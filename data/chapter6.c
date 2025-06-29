

#include "../core.h"

const LibFunc chapter6[] = {
    {"struct_definition",
     "Define and use a simple struct.",
     "Demonstrates declaring a struct and accessing its members.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "struct Point {\n"
     "    int x;\n"
     "    int y;\n"
     "};\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    struct Point p;\n"
     "    p.x = 10;\n"
     "    p.y = 20;\n"
     "    printf(\"Point: (%d, %d)\\n\", p.x, p.y);\n"
     "    return 0;\n"
     "}\n"},
    {"pointer_to_struct",
     "Use pointer to access struct members.",
     "Demonstrates use of -> operator with a struct pointer.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "struct Point {\n"
     "    int x;\n"
     "    int y;\n"
     "};\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    struct Point p = {5, 15};\n"
     "    struct Point *ptr = &p;\n"
     "    printf(\"Point: (%d, %d)\\n\", ptr->x, ptr->y);\n"
     "    return 0;\n"
     "}\n"},
    {"typedef_struct",
     "Use typedef to simplify struct declarations.",
     "Defines a typedef for a struct and uses it.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "typedef struct {\n"
     "    int x;\n"
     "    int y;\n"
     "} Point;\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    Point p = {1, 2};\n"
     "    printf(\"Point: (%d, %d)\\n\", p.x, p.y);\n"
     "    return 0;\n"
     "}\n"},
    {"struct_array",
     "Array of structs.",
     "Demonstrates using an array of struct values.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "struct Point {\n"
     "    int x;\n"
     "    int y;\n"
     "};\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    struct Point points[3] = {{0,0}, {1,1}, {2,2}};\n"
     "    int i = 0;\n"
     "    while (i < 3)\n"
     "    {\n"
     "        printf(\"Point %d: (%d, %d)\\n\", i, points[i].x, points[i].y);\n"
     "        i++;\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"struct_function_argument",
     "Passing struct to function by value.",
     "Shows how structs can be passed as function arguments.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "struct Point {\n"
     "    int x;\n"
     "    int y;\n"
     "};\n"
     "\n"
     "void print_point(struct Point p)\n"
     "{\n"
     "    printf(\"(%d, %d)\\n\", p.x, p.y);\n"
     "}\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    struct Point p = {7, 9};\n"
     "    print_point(p);\n"
     "    return 0;\n"
     "}\n"},
    {"return_struct_from_function",
     "Function returns a struct.",
     "Illustrates returning a struct value from a function.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "struct Point {\n"
     "    int x;\n"
     "    int y;\n"
     "};\n"
     "\n"
     "struct Point create_point(int a, int b)\n"
     "{\n"
     "    struct Point p;\n"
     "    p.x = a;\n"
     "    p.y = b;\n"
     "    return p;\n"
     "}\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    struct Point p = create_point(3, 4);\n"
     "    printf(\"(%d, %d)\\n\", p.x, p.y);\n"
     "    return 0;\n"
     "}\n"},
    {"nested_struct",
     "Struct containing another struct.",
     "Illustrates composition of structs using nested members.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "struct Point {\n"
     "    int x;\n"
     "    int y;\n"
     "};\n"
     "\n"
     "struct Rectangle {\n"
     "    struct Point top_left;\n"
     "    struct Point bottom_right;\n"
     "};\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    struct Rectangle r = {{0, 0}, {5, 5}};\n"
     "    printf(\"Top Left: (%d, %d)\\n\", r.top_left.x, r.top_left.y);\n"
     "    printf(\"Bottom Right: (%d, %d)\\n\", r.bottom_right.x, r.bottom_right.y);\n"
     "    return 0;\n"
     "}\n"},
    {"pass_struct_by_pointer",
     "Passing struct to function by pointer.",
     "Shows how to update struct members using a pointer.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "struct Point {\n"
     "    int x;\n"
     "    int y;\n"
     "};\n"
     "\n"
     "void move(struct Point *p, int dx, int dy)\n"
     "{\n"
     "    p->x += dx;\n"
     "    p->y += dy;\n"
     "}\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    struct Point p = {1, 2};\n"
     "    move(&p, 3, 4);\n"
     "    printf(\"Moved to: (%d, %d)\\n\", p.x, p.y);\n"
     "    return 0;\n"
     "}\n"},
    {"struct_compound_literal",
     "Initialize struct using compound literal.",
     "Demonstrates inline struct initialization.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "struct Point {\n"
     "    int x;\n"
     "    int y;\n"
     "};\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    struct Point p = (struct Point){8, 9};\n"
     "    printf(\"Point: (%d, %d)\\n\", p.x, p.y);\n"
     "    return 0;\n"
     "}\n"}};

int get_chapter6_functions_count(void)
{
    return sizeof(chapter6) / sizeof(LibFunc);
}
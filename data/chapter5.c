#include "../core.h"

const LibFunc chapter5[] = {
    {"pointer_basics",
     "Demonstrate basic pointer usage.",
     "Shows how to declare a pointer and access variable via pointer.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int x = 10;\n"
     "    int *p = &x;\n"
     "    printf(\"x = %d\\n\", x);\n"
     "    printf(\"*p = %d\\n\", *p);\n"
     "    *p = 20;\n"
     "    printf(\"x after *p = 20: %d\\n\", x);\n"
     "    return 0;\n"
     "}\n"},
    {"pointer_arithmetic",
     "Demonstrate basic pointer arithmetic.",
     "Shows how pointer increments traverse an array.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int arr[] = {10, 20, 30, 40, 50};\n"
     "    int *p = arr;\n"
     "    int i = 0;\n"
     "    while (i < 5)\n"
     "    {\n"
     "        printf(\"arr[%d] = %d\\n\", i, *(p + i));\n"
     "        i++;\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"array_as_pointer",
     "Demonstrate array and pointer equivalence.",
     "Shows how arrays and pointers behave similarly when accessing elements.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int arr[] = {1, 2, 3};\n"
     "    int *p = arr;\n"
     "    printf(\"arr[0] = %d\\n\", arr[0]);\n"
     "    printf(\"*p = %d\\n\", *p);\n"
     "    printf(\"*(arr + 1) = %d\\n\", *(arr + 1));\n"
     "    printf(\"p[2] = %d\\n\", p[2]);\n"
     "    return 0;\n"
     "}\n"},
    {"string_pointer_example",
     "Demonstrate pointer to a string literal.",
     "Shows how to use char pointers to access string data.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    char *msg = \"hello\";\n"
     "    printf(\"%s\\n\", msg);\n"
     "    printf(\"First char: %c\\n\", *msg);\n"
     "    msg++;\n"
     "    printf(\"After increment: %s\\n\", msg);\n"
     "    return 0;\n"
     "}\n"},
    {"pointer_to_pointer",
     "Demonstrate pointer to a pointer.",
     "Access and modify value using a pointer to a pointer.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int x = 5;\n"
     "    int *p = &x;\n"
     "    int **pp = &p;\n"
     "    printf(\"x = %d\\n\", x);\n"
     "    printf(\"*p = %d\\n\", *p);\n"
     "    printf(\"**pp = %d\\n\", **pp);\n"
     "    **pp = 10;\n"
     "    printf(\"x after modification = %d\\n\", x);\n"
     "    return 0;\n"
     "}\n"},
    {"array_of_strings",
     "Demonstrate array of string pointers.",
     "Prints a list of names using a char* array.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    char *names[] = {\"Alice\", \"Bob\", \"Charlie\"};\n"
     "    int i = 0;\n"
     "    while (i < 3)\n"
     "    {\n"
     "        printf(\"Name %d: %s\\n\", i + 1, names[i]);\n"
     "        i++;\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"pass_pointer_to_function",
     "Pass pointer to a function and modify value.",
     "Shows how a function can update a value using pointer.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "void update(int *p)\n"
     "{\n"
     "    *p = 42;\n"
     "}\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int x = 10;\n"
     "    update(&x);\n"
     "    printf(\"Updated x = %d\\n\", x);\n"
     "    return 0;\n"
     "}\n"},
    {"malloc_example",
     "Demonstrate dynamic memory allocation using malloc.",
     "Allocates memory for an array and fills it with values.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#include <stdlib.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int *arr = malloc(5 * sizeof(int));\n"
     "    int i = 0;\n"
     "    while (i < 5)\n"
     "    {\n"
     "        arr[i] = i * 10;\n"
     "        i++;\n"
     "    }\n"
     "    i = 0;\n"
     "    while (i < 5)\n"
     "    {\n"
     "        printf(\"arr[%d] = %d\\n\", i, arr[i]);\n"
     "        i++;\n"
     "    }\n"
     "    free(arr);\n"
     "    return 0;\n"
     "}\n"},
    {"const_pointer_examples",
     "Demonstrate const pointers in different configurations.",
     "Shows difference between const data, const pointer, and both.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int a = 5, b = 10;\n"
     "    const int *p1 = &a;       // data is const\n"
     "    //*p1 = 20; // error\n"
     "    p1 = &b; // ok\n"
     "\n"
     "    int *const p2 = &a;       // pointer is const\n"
     "    *p2 = 30; // ok\n"
     "    //p2 = &b; // error\n"
     "\n"
     "    const int *const p3 = &a; // both are const\n"
     "    //p3 = &b; // error\n"
     "    //*p3 = 40; // error\n"
     "    printf(\"a = %d, b = %d\\n\", a, b);\n"
     "    return 0;\n"
     "}\n"},
    {"function_returning_pointer",
     "Function returns pointer to maximum element.",
     "Demonstrates returning a pointer to an array element.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int *find_max(int *arr, int size)\n"
     "{\n"
     "    if (size <= 0)\n"
     "        return NULL;\n"
     "    int *max = arr;\n"
     "    int i = 1;\n"
     "    while (i < size)\n"
     "    {\n"
     "        if (arr[i] > *max)\n"
     "            max = &arr[i];\n"
     "        i++;\n"
     "    }\n"
     "    return max;\n"
     "}\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int nums[] = {4, 15, 7, 8};\n"
     "    int *max_ptr = find_max(nums, 4);\n"
     "    if (max_ptr)\n"
     "        printf(\"Max = %d\\n\", *max_ptr);\n"
     "    return 0;\n"
     "}\n"}};
int get_chapter5_functions_count(void)
{
    return sizeof(chapter5) / sizeof(LibFunc);
}
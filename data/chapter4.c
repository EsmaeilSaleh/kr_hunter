#include "../core.h"

const LibFunc chapter4[] = {
    {"power_function",
     "A simple power function using a loop.",
     "Computes x raised to the power n (x^n).",
     NULL,
     0,
     "int power(int base, int n)\n"
     "{\n"
     "    int p = 1;\n"
     "    while (n > 0)\n"
     "    {\n"
     "        p = p * base;\n"
     "        n--;\n"
     "    }\n"
     "    return p;\n"
     "}\n"},
    {"external_variable",
     "Demonstrate use of an external variable.",
     "Shows how a global variable can be modified in a function.",
     NULL,
     0,
     "int count = 0;\n"
     "\n"
     "void increment(void)\n"
     "{\n"
     "    count++;\n"
     "}\n"},
    {"function_declaration_order",
     "Declare function before use or provide prototype.",
     "Illustrates function call before its full definition.",
     NULL,
     0,
     "int square(int);\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int result = square(5);\n"
     "    printf(\"Square of 5 is %d\\n\", result);\n"
     "    return 0;\n"
     "}\n"
     "\n"
     "int square(int x)\n"
     "{\n"
     "    return x * x;\n"
     "}\n"},
    {"modular_file_structure",
     "Illustrate splitting function declarations and definitions.",
     "Simulates a function defined in one file and declared in another.",
     NULL,
     0,
     "// math_utils.h\n"
     "int multiply(int a, int b);\n"
     "\n"
     "// math_utils.c\n"
     "int multiply(int a, int b)\n"
     "{\n"
     "    return a * b;\n"
     "}\n"
     "\n"
     "// main.c\n"
     "#include <stdio.h>\n"
     "#include \"math_utils.h\"\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int result = multiply(3, 4);\n"
     "    printf(\"3 * 4 = %d\\n\", result);\n"
     "    return 0;\n"
     "}\n"},
    {"static_function_example",
     "Demonstrate use of static for internal linkage.",
     "A static helper function that is not visible outside the file.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "static int helper(int x)\n"
     "{\n"
     "    return x * 2;\n"
     "}\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int result = helper(10);\n"
     "    printf(\"helper(10) = %d\\n\", result);\n"
     "    return 0;\n"
     "}\n"},
    {"header_guard_example",
     "Demonstrate usage of header guards.",
     "Prevents double inclusion of header file contents.",
     NULL,
     0,
     "// math_utils.h\n"
     "#ifndef MATH_UTILS_H\n"
     "#define MATH_UTILS_H\n"
     "\n"
     "int multiply(int a, int b);\n"
     "\n"
     "#endif /* MATH_UTILS_H */\n"},
    {"extern_variable_across_files",
     "Demonstrate extern usage across multiple files.",
     "Declares a variable in one file and accesses it from another using extern.",
     NULL,
     0,
     "// file1.c\n"
     "int shared = 42;\n"
     "\n"
     "// file2.c\n"
     "#include <stdio.h>\n"
     "\n"
     "extern int shared;\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    printf(\"Shared value is %d\\n\", shared);\n"
     "    return 0;\n"
     "}\n"},
    {"argc_argv_example",
     "Demonstrate command-line arguments in C.",
     "Prints out each argument passed to the program.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(int argc, char *argv[])\n"
     "{\n"
     "    int i = 0;\n"
     "    while (i < argc)\n"
     "    {\n"
     "        printf(\"Argument %d: %s\\n\", i, argv[i]);\n"
     "        i++;\n"
     "    }\n"
     "    return 0;\n"
     "}\n"}};

int get_chapter4_functions_count(void)
{
    return sizeof(chapter4) / sizeof(LibFunc);
}
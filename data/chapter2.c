#include "../core.h"

const LibFunc chapter2[] = {
    // Chapter 2 functions will be added here
    {
        "int_division_vs_cast",
        "Demonstrate integer division vs floating-point division.",
        "Shows how type affects result of arithmetic expressions.",
        (const char *[]){NULL},
        0,
        "#include <stdio.h>\n"
        "\n"
        "int main(void)\n"
        "{\n"
        "    int fahr;\n"
        "\n"
        "    for (fahr = 0; fahr <= 300; fahr = fahr + 20)\n"
        "        printf(\"%3d %6.1f\\n\", fahr, (5.0/9.0)*(fahr-32));\n"
        "    return 0;\n"
        "}\n"},
    {"postfix_vs_prefix",
     "Compare postfix and prefix increment operators.",
     "Illustrates difference between i++ and ++i.",
     (const char *[]){NULL},
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int i = 5;\n"
     "    printf(\"i++ = %d\\n\", i++);\n"
     "    printf(\"After i++, i = %d\\n\", i);\n"
     "\n"
     "    i = 5;\n"
     "    printf(\"++i = %d\\n\", ++i);\n"
     "    printf(\"After ++i, i = %d\\n\", i);\n"
     "    return 0;\n"
     "}\n"},
    {"bitwise_operators",
     "Demonstrate basic bitwise operations.",
     "Uses &, |, ^, <<, and >> operators.",
     (const char *[]){NULL},
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    unsigned int a = 5, b = 9;\n"
     "    printf(\"a = %u, b = %u\\n\", a, b);\n"
     "    printf(\"a & b = %u\\n\", a & b);\n"
     "    printf(\"a | b = %u\\n\", a | b);\n"
     "    printf(\"a ^ b = %u\\n\", a ^ b);\n"
     "    printf(\"b << 1 = %u\\n\", b << 1);\n"
     "    printf(\"b >> 1 = %u\\n\", b >> 1);\n"
     "    return 0;\n"
     "}\n"},
    {"conditional_operator",
     "Use conditional (ternary) operator.",
     "Returns the greater of two values using ?: operator.",
     (const char *[]){NULL},
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int a = 10, b = 20;\n"
     "    int max = (a > b) ? a : b;\n"
     "    printf(\"Max is %d\\n\", max);\n"
     "    return 0;\n"
     "}\n"},
    {"sizeof_operator",
     "Show sizes of different data types using sizeof.",
     "Prints size in bytes for int, char, float, double.",
     (const char *[]){NULL},
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    printf(\"Size of int: %lu\\n\", sizeof(int));\n"
     "    printf(\"Size of char: %lu\\n\", sizeof(char));\n"
     "    printf(\"Size of float: %lu\\n\", sizeof(float));\n"
     "    printf(\"Size of double: %lu\\n\", sizeof(double));\n"
     "    return 0;\n"
     "}\n"},
    {"operator_precedence",
     "Demonstrate operator precedence and parentheses usage.",
     "Evaluates expressions with and without parentheses.",
     (const char *[]){NULL},
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int a = 2, b = 3, c = 4;\n"
     "    int result1 = a + b * c;\n"
     "    int result2 = (a + b) * c;\n"
     "    printf(\"a + b * c = %d\\n\", result1);\n"
     "    printf(\"(a + b) * c = %d\\n\", result2);\n"
     "    return 0;\n"
     "}\n"},
    {"type_conversion_expression",
     "Demonstrate type promotion and conversion in expressions.",
     "Illustrates how mixed types affect arithmetic operations.",
     (const char *[]){NULL},
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int i = 5;\n"
     "    float f = 2.5;\n"
     "    float result = i * f;\n"
     "    printf(\"int * float = %f\\n\", result);\n"
     "    return 0;\n"
     "}\n"}};
int get_chapter2_functions_count(void)
{
    return sizeof(chapter2) / sizeof(LibFunc);
}
#include "../core.h"

const LibFunc appendix1[] = {
    {"define_constant",
     "#define for symbolic constants.",
     "Demonstrates a macro-defined constant.",
     "Demonstrates using #define for symbolic constants.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#define PI 3.14\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    printf(\"PI = %f\\n\", PI);\n"
     "    return 0;\n"
     "}\n"},
    {"macro_function",
     "#define with arguments (function-like macros).",
     "Demonstrates a macro to square a number.",
     "Uses #define with arguments to create macro functions.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#define SQUARE(x) ((x) * (x))\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int val = 5;\n"
     "    printf(\"Square of %d = %d\\n\", val, SQUARE(val));\n"
     "    return 0;\n"
     "}\n"},
    {"ifdef_example",
     "Conditional compilation with #ifdef.",
     "Demonstrates use of #ifdef for optional features.",
     "Controls compilation using #ifdef directives.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#define DEBUG\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    printf(\"Program started\\n\");\n"
     "#ifdef DEBUG\n"
     "    printf(\"Debug mode is ON\\n\");\n"
     "#endif\n"
     "    return 0;\n"
     "}\n"},
    {"undef_macro",
     "Demonstrates #undef usage.",
     "Undefines a macro and shows effect.",
     "Shows how to undefine macros with #undef.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#define TEMP 100\n"
     "#undef TEMP\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "#ifdef TEMP\n"
     "    printf(\"TEMP is defined: %d\\n\", TEMP);\n"
     "#else\n"
     "    printf(\"TEMP is not defined\\n\");\n"
     "#endif\n"
     "    return 0;\n"
     "}\n"},
    {"predefined_macros",
     "Demonstrates __FILE__ and __LINE__.",
     "Prints the file name and line number using predefined macros.",
     "Uses built-in macros like __FILE__ and __LINE__ for diagnostics.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    printf(\"This is file: %s\\n\", __FILE__);\n"
     "    printf(\"This is line: %d\\n\", __LINE__);\n"
     "    return 0;\n"
     "}\n"}};

int get_appendix1_functions_count(void)
{
    return sizeof(appendix1) / sizeof(LibFunc);
}
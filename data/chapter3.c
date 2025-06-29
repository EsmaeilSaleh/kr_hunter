#include "../core.h"

const LibFunc chapter3[] = {
    {"if_else_example",
     "Basic if-else condition check.",
     "Compares two integers and prints the greater one.",
     "Explains basic decision-making using if-else.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int a = 5, b = 10;\n"
     "    if (a > b)\n"
     "        printf(\"a is greater\\n\");\n"
     "    else\n"
     "        printf(\"b is greater\\n\");\n"
     "    return 0;\n"
     "}\n"},
    {"switch_example",
     "Demonstrate switch statement.",
     "Prints a message based on the value of a character.",
     "Demonstrates multi-branch control with switch-case.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    char grade = 'B';\n"
     "    switch (grade)\n"
     "    {\n"
     "        case 'A':\n"
     "            printf(\"Excellent\\n\");\n"
     "            break;\n"
     "        case 'B':\n"
     "            printf(\"Good\\n\");\n"
     "            break;\n"
     "        case 'C':\n"
     "            printf(\"Fair\\n\");\n"
     "            break;\n"
     "        default:\n"
     "            printf(\"Invalid grade\\n\");\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"while_loop_example",
     "Demonstrate a basic while loop.",
     "Prints numbers from 1 to 5 using while.",
     "Introduces while loops for repeated execution.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int i = 1;\n"
     "    while (i <= 5)\n"
     "    {\n"
     "        printf(\"%d\\n\", i);\n"
     "        i++;\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"do_while_loop_example",
     "Demonstrate a do-while loop.",
     "Executes the loop body at least once.",
     "Shows how do-while guarantees at least one iteration.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int i = 1;\n"
     "    do\n"
     "    {\n"
     "        printf(\"%d\\n\", i);\n"
     "        i++;\n"
     "    } while (i <= 5);\n"
     "    return 0;\n"
     "}\n"},
    {"for_loop_rewritten_as_while",
     "Simulate a for loop using a while loop.",
     "Prints numbers from 0 to 4 using a while loop instead of for.",
     "Illustrates how for loops translate to while loops.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int i = 0;\n"
     "    while (i < 5)\n"
     "    {\n"
     "        printf(\"%d\\n\", i);\n"
     "        i++;\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"break_and_continue",
     "Demonstrate use of break and continue in loops.",
     "Skips 3 and breaks at 5 using continue and break.",
     "Teaches how to control loop execution using break/continue.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int i = 0;\n"
     "    while (i < 10)\n"
     "    {\n"
     "        i++;\n"
     "        if (i == 3)\n"
     "            continue;\n"
     "        if (i == 6)\n"
     "            break;\n"
     "        printf(\"%d\\n\", i);\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"nested_if_while",
     "Demonstrate nested if inside while loop.",
     "Prints only even numbers between 1 and 10.",
     "Combines if inside while for conditional repetition.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int i = 1;\n"
     "    while (i <= 10)\n"
     "    {\n"
     "        if (i % 2 == 0)\n"
     "            printf(\"%d is even\\n\", i);\n"
     "        i++;\n"
     "    }\n"
     "    return 0;\n"
     "}\n"}};

int get_chapter3_functions_count(void)
{
    return sizeof(chapter3) / sizeof(LibFunc);
}

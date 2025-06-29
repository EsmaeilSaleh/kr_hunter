#include "../../core.h"

const LibFunc chapter1_functions[] = {
    {"hello_world",
     "Basic 'hello, world' example from K&R",
     "Prints 'hello, world' followed by a newline to standard output.",
     "Basic 'hello, world' example from K&R",
     NULL,
     0,
     "int main(void)\n"
     "{\n"
     "    printf(\"hello, world\\n\");\n"
     "    return 0;\n"
     "}\n"},

    {"fahrenheit_table",
     "Print Fahrenheit to Celsius conversion table.",
     "Prints a table of Fahrenheit values with their Celsius equivalents.",
     "Print Fahrenheit to Celsius conversion table.",
     NULL,
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

    {"char_count",
     "Count number of characters from standard input.",
     "Reads characters until EOF and counts them, then prints the total.",
     "Count number of characters from standard input.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    long nc;\n"
     "\n"
     "    nc = 0;\n"
     "    while (getchar() != EOF)\n"
     "        ++nc;\n"
     "    printf(\"%ld\\n\", nc);\n"
     "    return 0;\n"
     "}\n"},

    {"line_count",
     "Count number of lines from standard input.",
     "Reads characters and increments line count on each newline character.",
     "Count number of lines from standard input.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c, nl;\n"
     "\n"
     "    nl = 0;\n"
     "    while ((c = getchar()) != EOF)\n"
     "        if (c == '\\n')\n"
     "            ++nl;\n"
     "    printf(\"%d\\n\", nl);\n"
     "    return 0;\n"
     "}\n"},

    {"word_count",
     "Count words, lines, and characters using state transitions.",
     "Tracks state between words and prints totals at the end.",
     "Count words, lines, and characters using state transitions.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "#define IN  1\n"
     "#define OUT 0\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c, nl, nw, nc, state;\n"
     "\n"
     "    state = OUT;\n"
     "    nl = nw = nc = 0;\n"
     "    while ((c = getchar()) != EOF) {\n"
     "        ++nc;\n"
     "        if (c == '\\n')\n"
     "            ++nl;\n"
     "        if (c == ' ' || c == '\\n' || c == '\\t')\n"
     "            state = OUT;\n"
     "        else if (state == OUT) {\n"
     "            state = IN;\n"
     "            ++nw;\n"
     "        }\n"
     "    }\n"
     "    printf(\"%d %d %d\\n\", nl, nw, nc);\n"
     "    return 0;\n"
     "}\n"},

    {"copy_input",
     "Copy input to output using getchar and putchar.",
     "Demonstrates a basic I/O loop copying characters from stdin to stdout.",
     "Copy input to output using getchar and putchar.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c;\n"
     "\n"
     "    while ((c = getchar()) != EOF)\n"
     "        putchar(c);\n"
     "    return 0;\n"
     "}\n"},

    {"visible_characters",
     "Replace tabs, backspaces, and backslashes with visible escape sequences.",
     "Makes non-printable characters visible in output.",
     "Replace tabs, backspaces, and backslashes with visible escape sequences.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c;\n"
     "\n"
     "    while ((c = getchar()) != EOF) {\n"
     "        if (c == '\\t')\n"
     "            printf(\"\\\\t\");\n"
     "        else if (c == '\\b')\n"
     "            printf(\"\\\\b\");\n"
     "        else if (c == '\\\\')\n"
     "            printf(\"\\\\\\\\\");\n"
     "        else\n"
     "            putchar(c);\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},

    {"longest_line",
     "Print the longest line from input.",
     "Stores and compares input lines to track the longest one.",
     "Print the longest line from input.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#define MAXLINE 1000\n"
     "\n"
     "int getline_k(char line[], int maxline);\n"
     "void copy(char to[], char from[]);\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int len;\n"
     "    int max;\n"
     "    char line[MAXLINE];\n"
     "    char longest[MAXLINE];\n"
     "\n"
     "    max = 0;\n"
     "    while ((len = getline_k(line, MAXLINE)) > 0)\n"
     "        if (len > max) {\n"
     "            max = len;\n"
     "            copy(longest, line);\n"
     "        }\n"
     "    if (max > 0)\n"
     "        printf(\"%s\", longest);\n"
     "    return 0;\n"
     "}\n"
     "\n"
     "int getline_k(char s[], int lim)\n"
     "{\n"
     "    int c, i;\n"
     "\n"
     "    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\\n'; ++i)\n"
     "        s[i] = c;\n"
     "    if (c == '\\n') {\n"
     "        s[i] = c;\n"
     "        ++i;\n"
     "    }\n"
     "    s[i] = '\\0';\n"
     "    return i;\n"
     "}\n"
     "\n"
     "void copy(char to[], char from[])\n"
     "{\n"
     "    int i = 0;\n"
     "    while ((to[i] = from[i]) != '\\0')\n"
     "        ++i;\n"
     "}\n"},

    {"symbolic_constants",
     "Use symbolic constants instead of hardcoded values.",
     "Defines constants for upper, lower, and step to improve readability.",
     "Use symbolic constants instead of hardcoded values.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "#define LOWER 0\n"
     "#define UPPER 300\n"
     "#define STEP  20\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int fahr;\n"
     "\n"
     "    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)\n"
     "        printf(\"%3d %6.1f\\n\", fahr, (5.0/9.0)*(fahr-32));\n"
     "    return 0;\n"
     "}\n"},

    {"word_per_line",
     "Print each word from input on a new line.",
     "Replaces whitespace with newlines to separate words.",
     "Print each word from input on a new line.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c;\n"
     "\n"
     "    while ((c = getchar()) != EOF) {\n"
     "        if (c == ' ' || c == '\\t' || c == '\\n')\n"
     "            putchar('\\n');\n"
     "        else\n"
     "            putchar(c);\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},

    {"remove_blank_lines",
     "Remove extra blank lines from input.",
     "Skips over consecutive newline characters.",
     "Remove extra blank lines from input.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c, prev;\n"
     "\n"
     "    prev = 0;\n"
     "    while ((c = getchar()) != EOF) {\n"
     "        if (c != '\\n' || prev != '\\n')\n"
     "            putchar(c);\n"
     "        prev = c;\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},

    {"multi_space_to_one",
     "Replace multiple spaces with a single space.",
     "Collapses consecutive spaces into one when printing input.",
     "Replace multiple spaces with a single space.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c, prev_space = 0;\n"
     "    while ((c = getchar()) != EOF) {\n"
     "        if (c == ' ') {\n"
     "            if (!prev_space) {\n"
     "                putchar(c);\n"
     "                prev_space = 1;\n"
     "            }\n"
     "        } else {\n"
     "            putchar(c);\n"
     "            prev_space = 0;\n"
     "        }\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},

    {"limit_input_length",
     "Stop reading lines longer than a specified length.",
     "Reads lines up to a max length and ignores the rest of the line.",
     "Stop reading lines longer than a specified length.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#define MAXLINE 100\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c, i;\n"
     "    char line[MAXLINE];\n"
     "\n"
     "    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\\n'; ++i)\n"
     "        line[i] = c;\n"
     "    if (c == '\\n') {\n"
     "        line[i] = c;\n"
     "        ++i;\n"
     "    }\n"
     "    line[i] = '\\0';\n"
     "    printf(\"%s\", line);\n"
     "    return 0;\n"
     "}\n"},

    {"horizontal_histogram",
     "Print horizontal histogram of word lengths.",
     "Counts lengths of words and prints a horizontal bar for each.",
     "Print horizontal histogram of word lengths.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "#define MAX_WORD_LEN 10\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c, i, len;\n"
     "    int lengths[MAX_WORD_LEN + 1] = {0};\n"
     "\n"
     "    len = 0;\n"
     "    while ((c = getchar()) != EOF) {\n"
     "        if (c == ' ' || c == '\\n' || c == '\\t') {\n"
     "            if (len > 0) {\n"
     "                if (len <= MAX_WORD_LEN)\n"
     "                    ++lengths[len];\n"
     "                else\n"
     "                    ++lengths[0]; // overflow bucket\n"
     "                len = 0;\n"
     "            }\n"
     "        } else {\n"
     "            ++len;\n"
     "        }\n"
     "    }\n"
     "\n"
     "    for (i = 1; i <= MAX_WORD_LEN; ++i) {\n"
     "        printf(\"%2d: \", i);\n"
     "        while (lengths[i]-- > 0)\n"
     "            putchar('*');\n"
     "        putchar('\\n');\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},

    {"vertical_histogram",
     "Print vertical histogram of word lengths.",
     "Draws vertical bars showing word length frequencies.",
     "Print vertical histogram of word lengths.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "#define MAX_WORD_LEN 10\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c, i, j, len;\n"
     "    int lengths[MAX_WORD_LEN + 1] = {0};\n"
     "    int max = 0;\n"
     "\n"
     "    len = 0;\n"
     "    while ((c = getchar()) != EOF) {\n"
     "        if (c == ' ' || c == '\\n' || c == '\\t') {\n"
     "            if (len > 0) {\n"
     "                if (len <= MAX_WORD_LEN)\n"
     "                    ++lengths[len];\n"
     "                else\n"
     "                    ++lengths[0];\n"
     "                if (lengths[len] > max)\n"
     "                    max = lengths[len];\n"
     "                len = 0;\n"
     "            }\n"
     "        } else {\n"
     "            ++len;\n"
     "        }\n"
     "    }\n"
     "\n"
     "    for (i = max; i > 0; --i) {\n"
     "        for (j = 1; j <= MAX_WORD_LEN; ++j) {\n"
     "            if (lengths[j] >= i)\n"
     "                printf(\" * \");\n"
     "            else\n"
     "                printf(\"   \");\n"
     "        }\n"
     "        putchar('\\n');\n"
     "    }\n"
     "    for (j = 1; j <= MAX_WORD_LEN; ++j)\n"
     "        printf(\"%2d \", j);\n"
     "    putchar('\\n');\n"
     "    return 0;\n"
     "}\n"}};

int get_chapter1_functions_count(void)
{
    return sizeof(chapter1_functions) / sizeof(LibFunc);
}
#include "../core.h"

const LibFunc chapter7[] = {
    {"getchar_putchar",
     "Demonstrates getchar and putchar.",
     "Reads characters from input and echoes them.",
     "Echoes characters using getchar and putchar until EOF.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c;\n"
     "    while ((c = getchar()) != EOF)\n"
     "        putchar(c);\n"
     "    return 0;\n"
     "}\n"},
    {"getc_putc_example",
     "Demonstrates getc and putc with FILE.",
     "Reads characters from stdin using getc and writes them using putc.",
     "Similar to getchar/putchar but uses FILE streams explicitly.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c;\n"
     "    while ((c = getc(stdin)) != EOF)\n"
     "        putc(c, stdout);\n"
     "    return 0;\n"
     "}\n"},
    {"fopen_fclose_example",
     "Demonstrates fopen and fclose.",
     "Opens a file, writes to it, then closes it.",
     "Opens, writes to, and closes a file using basic FILE APIs.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    FILE *fp = fopen(\"output.txt\", \"w\");\n"
     "    if (fp == NULL)\n"
     "    {\n"
     "        perror(\"Error opening file\");\n"
     "        return 1;\n"
     "    }\n"
     "    fputs(\"Hello, file!\\n\", fp);\n"
     "    fclose(fp);\n"
     "    return 0;\n"
     "}\n"},
    {"fprintf_fscanf_example",
     "Uses fprintf and fscanf to write and read formatted data.",
     "Demonstrates writing and reading formatted text from a file.",
     "Performs formatted file I/O with fprintf and fscanf.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    FILE *fp = fopen(\"data.txt\", \"w\");\n"
     "    if (!fp)\n"
     "    {\n"
     "        perror(\"Write open error\");\n"
     "        return 1;\n"
     "    }\n"
     "    fprintf(fp, \"%d %f\\n\", 42, 3.14);\n"
     "    fclose(fp);\n"
     "\n"
     "    int i;\n"
     "    float f;\n"
     "    fp = fopen(\"data.txt\", \"r\");\n"
     "    if (!fp)\n"
     "    {\n"
     "        perror(\"Read open error\");\n"
     "        return 1;\n"
     "    }\n"
     "    fscanf(fp, \"%d %f\", &i, &f);\n"
     "    printf(\"Read: %d and %f\\n\", i, f);\n"
     "    fclose(fp);\n"
     "    return 0;\n"
     "}\n"},
    {"perror_example",
     "Demonstrates perror usage.",
     "Uses perror to show descriptive error messages on failure.",
     "Demonstrates error reporting using perror().",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    FILE *fp = fopen(\"nonexistent.txt\", \"r\");\n"
     "    if (fp == NULL)\n"
     "    {\n"
     "        perror(\"File open failed\");\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"fgets_fputs_example",
     "Demonstrates fgets and fputs.",
     "Reads lines using fgets and writes them with fputs.",
     "Reads and writes text line-by-line using fgets/fputs.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    char buffer[100];\n"
     "    while (fgets(buffer, 100, stdin))\n"
     "        fputs(buffer, stdout);\n"
     "    return 0;\n"
     "}\n"},
    {"fread_fwrite_example",
     "Binary file I/O using fread and fwrite.",
     "Writes and reads an array of integers to a binary file.",
     "Handles binary file operations with fread and fwrite.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int nums[] = {1, 2, 3, 4, 5};\n"
     "    FILE *fp = fopen(\"nums.bin\", \"wb\");\n"
     "    if (!fp)\n"
     "    {\n"
     "        perror(\"Write open error\");\n"
     "        return 1;\n"
     "    }\n"
     "    fwrite(nums, sizeof(int), 5, fp);\n"
     "    fclose(fp);\n"
     "\n"
     "    int read_nums[5];\n"
     "    fp = fopen(\"nums.bin\", \"rb\");\n"
     "    if (!fp)\n"
     "    {\n"
     "        perror(\"Read open error\");\n"
     "        return 1;\n"
     "    }\n"
     "    fread(read_nums, sizeof(int), 5, fp);\n"
     "    fclose(fp);\n"
     "\n"
     "    int i = 0;\n"
     "    while (i < 5)\n"
     "    {\n"
     "        printf(\"%d \", read_nums[i]);\n"
     "        i++;\n"
     "    }\n"
     "    printf(\"\\n\");\n"
     "    return 0;\n"
     "}\n"},
    {"ungetc_example",
     "Use of ungetc to push character back to input.",
     "Pushes back the first character if it's a digit.",
     "Pushes back a character to input stream if it's a digit.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "#include <ctype.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    int c = getchar();\n"
     "    if (isdigit(c))\n"
     "    {\n"
     "        ungetc(c, stdin);\n"
     "        printf(\"Digit pushed back: %c\\n\", c);\n"
     "        int newc = getchar();\n"
     "        printf(\"Read again: %c\\n\", newc);\n"
     "    }\n"
     "    else\n"
     "    {\n"
     "        printf(\"Not a digit: %c\\n\", c);\n"
     "    }\n"
     "    return 0;\n"
     "}\n"},
    {"feof_ferror_example",
     "Check for EOF and file error using feof and ferror.",
     "Reads from file and checks for EOF and error conditions.",
     "Checks for end-of-file and read errors with feof/ferror.",
     NULL,
     0,
     "#include <stdio.h>\n"
     "\n"
     "int main(void)\n"
     "{\n"
     "    FILE *fp = fopen(\"nonexistent.txt\", \"r\");\n"
     "    if (!fp)\n"
     "    {\n"
     "        perror(\"Open error\");\n"
     "        return 1;\n"
     "    }\n"
     "    char c;\n"
     "    while ((c = fgetc(fp)) != EOF)\n"
     "        putchar(c);\n"
     "    if (feof(fp))\n"
     "        printf(\"\\nEnd of file reached\\n\");\n"
     "    if (ferror(fp))\n"
     "        printf(\"\\nFile read error\\n\");\n"
     "    fclose(fp);\n"
     "    return 0;\n"
     "}\n"}};

int get_chapter7_functions_count(void)
{
    return sizeof(chapter7) / sizeof(LibFunc);
}
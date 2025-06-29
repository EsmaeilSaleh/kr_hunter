#include "../../core.h"

const SubChapter chapter1_sections[] = {
    {"1.1 Getting Started",
     "This section introduces the structure of a basic C program using the classic 'Hello, World' example. "
     "It discusses how to compile and run a C program, the use of `main`, and standard output with `printf`.",
     chapter1_functions, 1}};

const int chapter1_sections_count = sizeof(chapter1_sections) / sizeof(SubChapter);

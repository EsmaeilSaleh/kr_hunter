#include "core.h"

const LibFunc appendix2[] = {

    {"hello_world", "void", "Prints 'Hello, World!'", "Basic Hello World example in C.", NULL, 0, "int main() { printf(\"Hello, World!\\n\"); return 0; }"},
    {"sum_two_numbers", "int", "Returns sum of two integers", "Reads two integers and prints their sum.", NULL, 0, "int main() { int a, b; scanf(\"%d %d\", &a, &b); printf(\"%d\\n\", a + b); return 0; }"},
    {"loop_with_condition", "void", "Demonstrates a while loop", "Demonstrates a while loop with a user-controlled condition.", NULL, 0, "int main() { int i = 0; while(i < 5) { printf(\"%d\\n\", i); i++; } return 0; }"},
    {"simple_function", "int", "Adds two integers", "Defines and calls a basic function that adds two integers.", NULL, 0, "int add(int x, int y) { return x + y; } int main() { printf(\"%d\\n\", add(3, 4)); return 0; }"},
    {"array_iteration", "void", "Iterates over an array", "Iterates over an array using a loop.", NULL, 0, "int main() { int arr[] = {1,2,3,4,5}; for(int i=0; i<5; i++) { printf(\"%d\\n\", arr[i]); } return 0; }"},
    {"pointer_increment", "void", "Increments a pointer", "Increments a pointer to traverse an array.", NULL, 0, "int main() { int arr[] = {1,2,3}; int *p = arr; for(int i=0; i<3; i++) { printf(\"%d\\n\", *p); p++; } return 0; }"},
    {"string_length_example", "int", "Calculates string length", "Calculates the length of a string without using strlen.", NULL, 0, "int strlen_custom(char *s) { int len = 0; while(s[len]) len++; return len; } int main() { printf(\"%d\\n\", strlen_custom(\"hello\")); return 0; }"},
    {"basic_recursion", "int", "Calculates factorial", "Shows recursive function for factorial calculation.", NULL, 0, "int fact(int n) { if(n<=1) return 1; else return n*fact(n-1); } int main() { printf(\"%d\\n\", fact(5)); return 0; }"},
    {"command_line_args", "void", "Prints command-line args", "Prints command-line arguments passed to the program.", NULL, 0, "int main(int argc, char *argv[]) { for(int i=0; i<argc; i++) printf(\"%s\\n\", argv[i]); return 0; }"}};

int get_appendix2_functions_count(void)
{
    return sizeof(appendix2) / sizeof(LibFunc);
}
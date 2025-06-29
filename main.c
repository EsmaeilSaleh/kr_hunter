#include "core.h"

void clear_screen(void)
{
    system("clear");
}

int main(void)
{
    clear_screen();

    int selected_chapter;
    printf("1. Chapter 1\n");
    printf("2. Chapter 2\n");
    printf("3. Chapter 3\n");
    printf("4. Chapter 4\n");
    printf("5. Chapter 5\n");
    printf("6. Chapter 6\n");
    printf("7. Chapter 7\n");
    printf("8. Chapter 8\n");
    printf("9. Appendix 1\n");
    printf("Select Chapter: \n");
    scanf("%d", &selected_chapter);

    const LibFunc *selected_funcs = NULL;
    int count = 0;

    if (selected_chapter == 1)
    {
        count = get_chapter1_functions_count();
        selected_funcs = chapter1;
    }
    else if (selected_chapter == 2)
    {
        count = get_chapter2_functions_count();
        selected_funcs = chapter2;
    }
    else if (selected_chapter == 3)
    {
        count = get_chapter3_functions_count();
        selected_funcs = chapter3;
    }
    else if (selected_chapter == 4)
    {
        count = get_chapter4_functions_count();
        selected_funcs = chapter4;
    }
    else if (selected_chapter == 5)
    {
        count = get_chapter5_functions_count();
        selected_funcs = chapter5;
    }
    else if (selected_chapter == 6)
    {
        count = get_chapter6_functions_count();
        selected_funcs = chapter6;
    }
    else if (selected_chapter == 7)
    {
        count = get_chapter7_functions_count();
        selected_funcs = chapter7;
    }
    else if (selected_chapter == 8)
    {
        count = get_chapter8_functions_count();
        selected_funcs = chapter8;
    }
    else if (selected_chapter == 9)
    {
        count = get_appendix1_functions_count();
        selected_funcs = appendix1;
    }

    int i = 0;
    while (i < count)
    {
        printf("%d. %s\n", i, selected_funcs[i].name);
        i++;
    }

    int func;
    printf("Select:\n");
    scanf("%d", &func);
    clear_screen();

    printf("Name: %s\n", selected_funcs[func].name);
    printf("Description: %s\n", selected_funcs[func].description);
    printf("\nFunction:\n%s\n", selected_funcs[func].code);

    char buffer[1024] = {0};
    char line[1024];
    size_t size = 1024;

    printf("\nStart typing below. Type 'END' on a line to finish.\n\n");
    while (fgets(line, sizeof(line), stdin))
    {
        if (strcmp(line, "END\n") == 0 || strcmp(line, "END\r\n") == 0)
        {
            system("git add . && git commit -m 'update' && git push");
            break;
        }

        if (strlen(buffer) + strlen(line) + 1 >= size)
        {
            fprintf(stderr, "Input buffer full. Truncating input.\n");
            break;
        }

        strncat(buffer, line, size - strlen(buffer) - 1);
    }

    FILE *typed = fopen("typed.c", "a");
    fprintf(typed, "%s", buffer);
    fclose(typed);

    printf("You typed: %s\n", buffer);
    printf("\nTotals: %d\n", count);
    return (0);
}
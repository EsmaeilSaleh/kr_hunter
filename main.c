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
    printf("Select Chapter: \n");
    scanf("%d", &selected_chapter);

    if (selected_chapter != 1)
    {
        printf("Only Chapter 1 is supported for now.\n");
        return 0;
    }

    extern const SubChapter chapter1_sections[];
    extern const int chapter1_sections_count;

    clear_screen();
    for (int i = 0; i < chapter1_sections_count; i++)
    {
        printf("%d. %s\n", i, chapter1_sections[i].title);
    }

    int selected_section;
    printf("Select Subchapter:\n");
    scanf("%d", &selected_section);
    getchar(); // flush newline

    clear_screen();
    printf("%s\n\n", chapter1_sections[selected_section].title);
    printf("%s\n\n", chapter1_sections[selected_section].summary);
    printf("Press 'n' then Enter to continue to typing practice...\n");

    char proceed = getchar();
    if (proceed != 'n' && proceed != 'N')
        return 0;

    const LibFunc *funcs = chapter1_sections[selected_section].funcs;
    int count = chapter1_sections[selected_section].func_count;

    for (int i = 0; i < count; i++)
        printf("%d. %s\n", i, funcs[i].name);

    int func;
    printf("Select Function:\n");
    scanf("%d", &func);
    getchar(); // flush newline
    clear_screen();

    printf("Name: %s\n", funcs[func].name);
    printf("Description: %s\n", funcs[func].description);
    printf("Function:\n\n%s\n", funcs[func].code);

    char buffer[1024] = {0};
    char line[1024];
    size_t size = 1024;

    printf("\nStart typing below. Type 'END' on a line to finish.\n\n");
    while (fgets(line, sizeof(line), stdin))
    {
        if (strcmp(line, "END\n") == 0 || strcmp(line, "END\r\n") == 0)
            break;

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
    system("git add . && git commit -m 'update' && git push");

    printf("You typed: %s\n", buffer);
    printf("\nFunctions in this section: %d\n", count);
    return 0;
}
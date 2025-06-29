#ifndef CORE_H
#define CORE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_variant
{
    const char *style;
    const char *code;
} Variant;

typedef struct s_libfunc
{
    const char *name;
    const char *description;
    const char *return_description;
    const char *summary;
    const char **variants;
    int variant_count;
    const char *code;
} LibFunc;

typedef struct
{
    const char *title;
    const char *summary;
    const LibFunc *funcs;
    int func_count;
} SubChapter;

extern const SubChapter chapter1_sections[];
extern const int chapter1_sections_count;

extern const LibFunc chapter1_functions[];
extern const LibFunc chapter1[];
extern int get_chapter1_functions_count(void);
/*extern const LibFunc chapter2[];
extern const LibFunc chapter3[];
extern const LibFunc chapter4[];
extern const LibFunc chapter5[];
extern const LibFunc chapter6[];
extern const LibFunc chapter7[];
extern const LibFunc chapter8[];
extern const LibFunc appendix1[];
int get_chapter2_functions_count(void);
int get_chapter3_functions_count(void);
int get_chapter4_functions_count(void);
int get_chapter5_functions_count(void);
int get_chapter6_functions_count(void);
int get_chapter7_functions_count(void);
int get_chapter8_functions_count(void);
int get_appendix1_functions_count(void);
*/

#endif // CORE_H

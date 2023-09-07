#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that duplicates a string
 *
 * @str: is a pointer to the a string
 *
 * Return: x
*/
#include <stdlib.h>
#include <string.h>

char* str_concat(char* s1, char* s2) {
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

	size_t s1_length = strlen(s1);
	size_t s2_length = strlen(s2);
	size_t total_length = s1_length + s2_length;

    char* result = malloc(total_length + 1);
    if (result == NULL)
        return NULL;

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}

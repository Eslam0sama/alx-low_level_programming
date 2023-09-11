#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - A function that allocates memory with number of elemnts
 *
 * @nmemb: number of elemnts
 *
 * @size: number of bytes each element needs
 *
 * Return: ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;
    int *cptr;

    if (nmemb == 0 || size == 0)
    {
        return NULL;
    }

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    cptr = (int *)ptr;

    for (i = 0; i <(nmemb; i++)
    {
        cptr[i] = 0;
    }
    return ptr;
}

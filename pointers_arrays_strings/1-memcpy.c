#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area
 * @n: bytes numbers
 * @src: memory area
 * @dest: memory area
 * Return: pointer to dest
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *ptr_dest = dest;
    char *ptr_src = src;

    while (n > 0) {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
        n--;
    }

    return dest;
}


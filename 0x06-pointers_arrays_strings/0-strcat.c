#include "main.h"

/*
 * Custom string concatenation function.
 * Concatenates two strings.
 * @param dest: Destination string.
 * @param src: Source string to be concatenated.
 * @return: Pointer to the concatenated string.
 */
char *customStringConcat(char *dest, char *src) {
    int i = 0, n = 0;

    // Finding the end of the destination string
    while (dest[i] != '\0') {
        i++;
    }

    // Appending the source string to the destination
    while ((dest[i + n] = *src++) != '\0') {
        n++;
    }

    return dest;
}

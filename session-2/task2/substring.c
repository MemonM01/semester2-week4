/*
 * Find a substring within a given string
 */

 // create a program to locate a substring "ump" within a given string "The quick brown fox jumped over the lazy dog"

 /*  Hints:
 1. include the appropriate libraries
 2. create the main function
 3. define the program data as strings
 4. using the string library documentation find the appropriate string function
 5. implement the solution and compute the answer  
 6. print the answer appropriately as pointer, character and string
 */ 

#include <stdio.h>
#include <string.h>

int main( void ) {

    char str1[100] = "The quick brown fox jumped over the lazy dog";
    char str2[100] = "ump";

    // use printf to verify the following tests
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // use 'strstr' to find the substring - print the resulting pointer, character and string
    char *ptr = strstr(str1, str2);
    if (ptr != NULL) {
        printf("Substring found at pointer: %p\n", (void*)ptr);
        printf("First character of substring: %c\n", *ptr);
        printf("Substring found: %s\n", ptr);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}


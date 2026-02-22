
/*
Name: Muhammad Shafay Memon
Student ID: 201957435
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char holder[100];
    

    // process the command-line data using appropriate string functions
    for (int i = 1; i < argc; i++) {
        strcat(holder, argv[i]);
        if (i < argc - 1) {
            strcat(holder, "-");
        }
    }

    printf("%s\n", holder); // use only this single print statement in your submitted code

    return 0;
}
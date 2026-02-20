
/*
 * We expect to use the following program by providing a list of command line data
 * - 1 integer value
 * - 1 string 
 * - 1 double value
 * Process the command line arguments and print them with appropriate formatting.
 * Test your code, eg.  ./cmd_line_data -2 abcd 4.2
 *
 * Implement a similar code in Python and compare it to the C code.
 */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv ) {

    
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <integer> <string> <double>\n", argv[0]);
        return 1;
    }

    int integer_value = atoi(argv[1]);
    char *string_value = argv[2];
    double double_value = atof(argv[3]);

    printf("Integer value: %d\n", integer_value);
    printf("String value: %s\n", string_value);
    printf("Double value: %.2f\n", double_value);

    return 0;
}

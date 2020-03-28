/*
 * This file is part of Prose Proxy project.
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv){
    printf("This is a template - remove me.\n");
    printf("Arguments (%d):\n", argc);
    for (; argc > 0; argc--){
        printf("%s\n", argv[argc - 1]);
    }
    return 0;
}

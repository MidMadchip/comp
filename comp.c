#include <stdio.h>

int main() {
    #ifdef __STDC_VERSION__
        #if __STDC_VERSION__ >= 199901L
            printf("Compiler supports C99\n");
        #else
            printf("Compiler does not support C99\n");
        #endif
    #else
        printf("Compiler does not define __STDC_VERSION__\n");
    #endif

    return 0;
}


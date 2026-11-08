#include <stdio.h>
#include <string.h>

int main(void) {
    char str[30] = "happy C programming";

    printf("Length of str \"%s\" : %i\n", str, strlen(str));
    return 0;
}
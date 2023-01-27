#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    char* str = NULL;
    int     value = 0;

    // sebuah contoh dari function atoi
    str = "  -2309 ";
    value = atoi(str);
    printf("Function: atoi( \"%s\" ) = %d\n", str, value);

    // contoh lain dari function atoi
    str = "31412764";
    value = atoi(str);
    printf("Function: atoi( \"%s\" ) = %d\n", str, value);

    // contoh lain dari function atoi
    // dengan kondisi overflow yang terjadi.
    str = "3336402735171707160320";
    value = atoi(str);
    printf("Function: atoi( \"%s\" ) = %d\n", str, value);

    if (errno == ERANGE) {
        printf("Overflow condition occurred.\n");
    }

    _getch();
    return 0;
}
#include <stdio.h>
#include <ctype.h>
int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;  // c is uppercase
    } else {
        return 0;  // c is not uppercase
    }
}


int main()
{

    char c = 'A';
    if (_isupper(c)) {
        printf("%c is uppercase.\n", c);
    } else {
        printf("%c is not uppercase.\n", c);
    }


    return 0;
}

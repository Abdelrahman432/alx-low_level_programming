#include <stdio.h>
int _isdigit(int c) {
    if (c >= '0' && c <= '9') {
        return 1;  // c is a digit
    } else {
        return 0;  // c is not a digit
    }
}

int main()
{
 char c = '5';
    if (_isdigit(c)) {
        printf("%c is a digit.\n", c);
    } else {
        printf("%c is not a digit.\n", c);
    }
    return 0;
}

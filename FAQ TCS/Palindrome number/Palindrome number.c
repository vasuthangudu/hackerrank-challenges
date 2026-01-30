#include <stdio.h>

int main() {
    int a, temp, rev = 0, dig;

    a = 121;
    temp = a;   // store original number

    while (a > 0) {
        dig = a % 10;
        rev = rev * 10 + dig;
        a = a / 10;
    }

    if (temp == rev) {
        printf("It is a Palindrome");
    } else {
        printf("It is NOT a Palindrome");
    }

    return 0;
}
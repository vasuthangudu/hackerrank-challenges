#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a != b && b != c && c != a) {
        printf("%d", a + b + c);
    }
    else if (a == b) {
        printf("%d", c);
    }
    else if (b == c) {
        printf("%d", a);
    }
    else {
        printf("%d", b);
    }

    return 0;
}

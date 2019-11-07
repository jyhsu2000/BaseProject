#include <stdio.h>
#include "main.h"

#ifndef TEST
int main() {
    printf("Rule Breaker!!!\n");
    printf("4 + 3 = %d\n", addNumber(4, 3));
    printf("%d\n", getTriangleType(3, 4, 5));
    return 0;
}
#endif // TEST

int addNumber(int a, int b) {
    return a + b;
}

int getTriangleType(int a, int b, int c) {
    // 註解註解123ABC
    if (a > b && a > c) {
        int temp = c; c = a; a = temp;
    }
    else if (b > a && b > c) {
        int temp = c; c = b; b = temp;
    }

    if (a + b <= c) {
        return -2;
    }
    else if (a * a + b * b == c * c) {
        return 0;
    }
    else if (a * a + b * b > c * c) {
        return 1;
    }
    else if (a * a + b * b < c * c) {
        return -1;
    }
    return -3;
}

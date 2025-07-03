#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n > 0) {
        if (n == 1)
            break;

        int a = 2;
        while (n % a != 0) {
            a++;
        }
        printf("%d\n", a);
        n /= a;
    }

    return 0;
}
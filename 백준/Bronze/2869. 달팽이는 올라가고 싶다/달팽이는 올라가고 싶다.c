#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int high = 0, day =0;

    day = (v - a) / (a - b);
    high = day * (a - b);

    while (high != v) {
        day++;

        high += a;
        if (high >= v)
            break;
        else
            high -= b;
    }

    printf("%d", day);

    return 0;
}
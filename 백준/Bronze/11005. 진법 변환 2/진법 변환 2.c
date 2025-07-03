#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    
    long long n; int b;
    scanf("%lld %d", &n, &b);

    char ans[100];
    int i = 0;

    while (n > 0) {
        int cal = n % b;
        if (cal >= 10)
            ans[i] = cal + 55;
        else
            ans[i] = cal + '0';
        n = n / b;
        i++;

    }

    for (int j = i-1; j >= 0; j--) {
        printf("%c", ans[j]);
    }

    return 0;
}
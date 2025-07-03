#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    for (;;) {
        int n;
        scanf("%d", &n);
        
        if (n == -1)
            break;

        int sum = 0, i = 1;

        printf("%d ", n);

        // 완전수인지 판별
        while (i != n) {

            if (n % i == 0)
                sum += i;
            i++;
        }
        // 완전수라면
        if (sum == n) {
            i = 1; sum = 0;
            printf("= ");
            while (i != n) {

                if (n % i == 0) {
                    sum += i;
                    printf("%d", i);
                    if (sum != n)
                        printf(" + ");
                }
                i++;
            }
            printf("\n");
        }
        // 완전수가 아니라면
        else {
            printf("is NOT perfect.\n");
        }
    }
    
    return 0;
}
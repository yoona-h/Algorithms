#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0;i < n;i++) {
        int num, a=1, t_cnt=0;
        scanf("%d", &num);
        while (a <= num) {
            if (num % a == 0)
                t_cnt += 1;
            a++;
        }
        if (t_cnt == 2)
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}
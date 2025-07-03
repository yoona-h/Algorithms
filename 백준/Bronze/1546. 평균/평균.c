#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[1000];
    int N, max;
    double sum = 0;
    max = 0;
    scanf("%d", &N);

    for (int i = 0;i < N;i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0;i < N;i++) {
        sum += (double)arr[i] / max * 100;
    }

    printf("%f", (double)sum / N);

    return 0;
}

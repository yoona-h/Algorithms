#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[101];
    int N, M;
    scanf("%d %d", &N, &M);
    int a, b, save;

    for (int i = 0;i <= N;i++) {
        arr[i] = i;
    }

    for (int i = 0;i < M;i++) {
        scanf("%d %d", &a, &b);
        save = arr[a];
        arr[a] = arr[b];
        arr[b] = save;
    }

    for (int i = 1;i <= N;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

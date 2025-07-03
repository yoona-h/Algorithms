#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char words[5][16];

    // 초기화
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 15;j++) {
            words[i][j] = '\0';
        }
    }

    // 입력 받기
    for (int i = 0;i < 5;i++) {
        scanf("%s", &words[i]);
    }

    // 출력
    for (int i = 0;i < 15;i++) {
        for (int j = 0;j < 5;j++) {
            if(words[j][i] == '\0')
                continue;
            else
                printf("%c", words[j][i]);
        }
    }

    return 0;
}
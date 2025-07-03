#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000001];
    scanf("%s", &ch);
    int len = strlen(ch);

    // 대문자로 변환 
    for (int i = 0;i < len;i++) {
        if (ch[i] > 96)
            ch[i] = ch[i] - 32;
    }
   
    // 카운트 할 int 배열, 0으로 초기화
    int cnt[26] = { 0, };

    for (int i = 0;i < len;i++) {
        int ind = ch[i] - 'A'; // 위치에 맞추어 카운트
        cnt[ind]++;
    }
    
    int max = 0;

    for (int i = 0;i < 26;i++) {
        if (cnt[i] > max)
            max = cnt[i];
    }
    
    // 중복 검사
    int du = 0;
    char c;

    for (int i = 0;i < 26;i++) {
        if (max == cnt[i]) {
            c = i + 'A';
            du++;
        }
    }

    // max 중복이 없다면 알파벳 출력
    if (du != 1)
        printf("?");
    else
        printf("%c",c);

    return 0;
}

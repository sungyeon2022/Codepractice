#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int sttoint(const char* s) {
    char* num[] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
    int answer = 0;
    while (*s) {
        if (*s >= 48 && *s <= 57) {
            answer = answer * 10 + *s - 48;
        }
        else {

        }
        s++;
    }
    printf("%d", answer);
    return answer;
}
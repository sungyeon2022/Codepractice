#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long sum(int a[], int alen) {
    long sum = 0;
    for (int i = 0; i < alen; i++) {
        sum += a[i];
    }
    return sum;
}

// queue1_len은 배열 queue1의 길이입니다.
// queue2_len은 배열 queue2의 길이입니다.
int solution(int queue1[], size_t queue1_len, int queue2[], size_t queue2_len) {
    long q1sum = sum(queue1, queue1_len);
    long q2sum = sum(queue2, queue2_len);
    int* q1 = (int*)malloc(15000);
    int* q2 = (int*)malloc(15000);
    int q1len = 0;
    int q2len = 0;
    int res;
    int answer = 0;
    if ((q1sum + q2sum) % 2 == 1) {
        return -1;
    }
    else {
        res = (q1sum + q2sum) / 2;
    }
    while (1) {
        if (q1sum > q2sum) {
            answer++;
        }
        else if (q1sum < q2sum) {
            answer++;
        }
        else if (q1sum == q2sum) {
            break;
        }
        if (q1len == -1 || q2len == -1) {
            return -1;
        }
        
    }
    return answer;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <stdbool.h>

// paths_rows�� 2���� �迭 paths�� �� ����, paths_cols�� 2���� �迭 paths�� �� �����Դϴ�.
// gates_len�� �迭 gates�� �����Դϴ�.
// summits_len�� �迭 summits�� �����Դϴ�.
int* san(int n, int** paths, size_t paths_rows, size_t paths_cols, int gates[], size_t gates_len, int summits[], size_t summits_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* suminten = calloc(summits_len*gates_len, sizeof(int));
    int mlo = 0;
    int* answer = (int*)malloc(2);
    return answer;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main() {
	int n;
	int* li = (int*)calloc(10000, sizeof(int));
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &li[i]);
		upqsort(li, 0, i);
		printf("%d \n", li[i / 2]);
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	


#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int count = 0;

void swap(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

void ssemqsort(int a[], int start, int end) {
	count++;
	if (start >= end) return;
	int piv = start;
	int le = start + 1;
	int ri = end;
	while (le <= ri) {
		while (a[le] < a[piv] && le <= end) {
			printf("le: %d \n", le);
			le++;
		}
		while (a[ri] > a[piv]) {
			printf("ri: %d \n", ri);
			ri--;
		}
		if (le <= ri) {
			swap(&a[le], &a[ri]);
			for (int i = 0; i < 10; i++) {
				printf("%d,", a[i]);
			}
			le++;
			ri--;
		}
	}
	swap(&a[ri], &a[piv]);
	for (int i = 0; i < 10; i++) {
		printf("%d,", a[i]);
	}
	printf("piv: %d \n", piv);
	printf("%d È¸Àü \n", count);
	ssemqsort(a, start, piv - 1);
	ssemqsort(a, piv + 1, end);
}


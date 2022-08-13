#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

static int temp;
static int count = 0;

int part(int a[], int left, int right) {
	int piv = a[left];
	int i = left + 1, j = right;
	while (i < j) {
		while (piv < a[i]) {
			i++;
			printf("i:%d \n", i);
		}
		while (piv >= a[j]) {
			j--;
			printf("j: %d \n", j);
		}
		if (i <= j) {
			swap(&a[i], &a[j]);
			for (int i = 0; i < 10; i++) {
				printf("%d,", a[i]);
			}
			i++;
			j--;
		}
	}
	a[left] = a[i];
	a[i] = piv;
	return i;
}

void myqsort(int a[], int left, int right) {
	count++;
	printf("%d 회전 \n",count);
	if (left >= right) return;
	int q = part(a, left, right);
	printf("piv:%d \n", q);
	myqsort(a, left, q - 1); //분할
	myqsort(a, q + 1, right);
}

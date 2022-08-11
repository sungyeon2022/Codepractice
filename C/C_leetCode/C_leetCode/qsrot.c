#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

void swap(int a, int b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	printf("%d", temp);
}

int part(int a[], int left, int right) {
	int mid = (left + right) / 2;
	swap(a[left],a[mid]);
	int i = left;
	int j = right;
	int piv = a[left];
	int temp = 0;
	while (i < j) {
		while (piv < a[j]||j>0) {
			j--;
		}
		while (i < j && piv >= a[i]) {
			i++;
		}
		swap(a[i],a[j]);
		for (int i = 0; i < 10; i++) {
			printf("%d,", a[i]);
		}
		printf("\n");
	}
	a[left] = a[i];
	a[i] = piv;
	return i;
}

void myqsrot(int a[], int left, int right) {
	if (left >= right) return;
	int q = part(a, left, right);
	myqsrot(a, left, q - 1); //ºÐÇÒ
	myqsrot(a, q + 1, right);
}

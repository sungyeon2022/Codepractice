#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main() {
	int a[] = { 10,-56,-33,2,6,7,8,1,3,5 };
	int len = sizeof(a) / sizeof(int);
	ssemqsort(a, 0, len-1);
	for (int i = 0; i < 10; i++) {
		printf("%d,", a[i]);
	}
}
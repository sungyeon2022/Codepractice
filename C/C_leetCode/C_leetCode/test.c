#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main() {
	int a[] = { 10,-99,-56,5,1,4,8,9,7,-33 };
	int len = sizeof(a) / sizeof(int);
	myqsrot(a, 0, len);
	for (int i = 0; i < 10; i++) {
		printf("%d,", a[i]);
	}
}
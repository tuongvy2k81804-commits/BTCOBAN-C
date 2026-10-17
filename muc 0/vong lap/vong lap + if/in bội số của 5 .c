/* Viết chương trình nhập vào số nguyên n từ bàn phím.
In ra tất cả các số nguyên dương là bội số của 5 và nhỏ hơn n */
#include <stdio.h>

int main () {
	int n;
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	for (int i = 5; i < n; ++i) {
		if (i % 5 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}

/* Viết chương trình in ra các số lẻ từ 1 đến n - 1
n là số nhập từ bàn phím */	

#include <stdio.h>

int main () {
	int n;
	printf("Nhap vao so nguyen n: \n");
	scanf("%d", &n);
	
	for (int i = 1; i < n; ++i) {
		
		if (i % 2 != 0) {
			printf("%d ", i);
	}
	return 0;
}

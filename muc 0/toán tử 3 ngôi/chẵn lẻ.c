/* Chẵn hay lẻ: Nhập số nguyên n, in ra "chan" hoặc "le" */

#include <stdio.h>

int main () {
	int n;
	
	scanf("%d", &n);
	
	printf("%s", n % 2 == 0 ? "chan" : "le");
	
	return 0;
}

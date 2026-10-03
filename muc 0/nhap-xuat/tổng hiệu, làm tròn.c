#include <stdio.h>

int main () {
float a, b;
	
	scanf("%f%f", &a, &b);
	printf("Tong: %.2f\nHieu: %.2f\nTich: %.2f\nThuong: %.2f\n", a + b, a - b, a * b, a / b);
	
	return 0;
}

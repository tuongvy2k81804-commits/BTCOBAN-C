/* Viết chương trình tính giá trị biểu thức
trong đó x là số nguyên nhập từ bàn phím
F(x) = (1 + x) / (1 - x)
g(x) = (3x^5 + 2x + sqrt(x + 1) ) / ( 5x ^ 2 - 3) */

#include <stdio.h>
#include <math.h>

int main() {
	int x; 
	
	printf("Nhap x: ");
	scanf("%d", &x);
	
	printf ("F(x) = %.2f\n", (double)(1 + x) / (1 - x));                
	printf ("g(X) = %.2f", (3 * pow(x,5) + 2 * x + sqrt(x + 1) ) / ( 5 * x * x - 3));
	
	return 0;
}

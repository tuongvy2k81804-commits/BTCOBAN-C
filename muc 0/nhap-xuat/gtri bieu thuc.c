/*  Viết chương trình tính giá trị F(x), G(x)
trong đó x là số nguyên nhập từ bàn phím 
F(x) = 5x^2 + 6x + 1
G(x) = 2x^4 - 5x^2 +  4x + 1 */

#include <stdio.h>

int main () {
	int x; scanf("%d", &x);
	
	printf("F(x) = %d\n", 5 * x * x + 6 * x + 1);
	printf("G(x) = %d", 2 * x * x * x * x - 5 * x * x + 4 * x + 1);
	
	return 0;
}


//BT8: Nhập vào 2 số nguyên a, b tìm số lớn nhất 

#include <stdio.h>
#include <math.h>

int main () {
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%d", a > b ? a : b );  // a > b đúng thì in ra a, sai in b
	// toán tử 3 ngôi
	return 0;
}
/*Thư viện C k có hàm max
fmax(double x, double y)
fmaxf(float x, float y)
fmaxl(long double x, long double y) */

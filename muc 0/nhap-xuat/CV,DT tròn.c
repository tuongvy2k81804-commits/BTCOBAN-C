/* Viết chương trình nhập vào bán kính hình tròn
Tính và xuất kết quả chu vi, diện tích */

#include <stdio.h>
#define pi 3.14159265358979323846

int main () {
	float bankinh;
	
	printf("Nhap vao ban kinh : ");
	scanf("%f", &bankinh);
	
	printf("Chu vi: %.2f\n", 2 * pi * bankinh);
	printf("Dien tich: %.2f", pi * bankinh * bankinh);
	
	return 0;
}

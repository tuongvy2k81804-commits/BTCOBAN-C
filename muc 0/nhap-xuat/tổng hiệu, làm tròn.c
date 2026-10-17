/* BT1: Viết chương trình nhập vào 2 số thực.
Tính và xuất kết quả tổng, hiệu, tích, thương
Kết quả lấy 2 số lẻ */

#include <stdio.h>

int main () {
float a, b;
	
	scanf("%f%f", &a, &b);
	printf("Tong: %.2f\nHieu: %.2f\nTich: %.2f", a + b, a - b, a * b);
	
	if (b == 0) {
		printf("\nThuong: khong xac dinh");
	}
	
	else {
		printf("\nThuong: %.2f", a / b);
	}
	return 0;
}

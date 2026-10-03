/* Nhập vào 5 số nguyên
tính trung bình cộng */

#include <stdio.h>

int main () {
	long long a, b, c, d, e;
	
	printf("Nhap 5 so nguyen:");
	scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
	
	printf("Trung binh cong : %.2f",(a + b + c + d + e) / 5.0);
	
	return 0;
	
}

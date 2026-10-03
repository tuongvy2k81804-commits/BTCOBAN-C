/* Nhập 3 số nguyên a,b,c
xuất ra số lớn nhất và nhỏ nhất */

#include <stdio.h>  // kco min max 
//lap trinh C k co min max

int main () {
	int a, b, c;
	
	printf ("Nhap vao a,b,c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int max = a;
	int min = a;
	
	if ( b > max) max = b;
	if ( c > max) max = c;
	
	if ( b < min) min = b;           // dùng else if thì chỉ cần đáp ứng 1 điều kiện sẽ dừng hết cái đk còn lại
	if ( c < min) min = c;
	
	printf ("so lon nhat: %d\nso be nhat: %d", max, min);
	
	return 0;
}

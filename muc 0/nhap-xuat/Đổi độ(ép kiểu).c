/*  Viết chương trình đổi đơn vị từ F( Ferarit) sang độ C (Celsius)
C = 5/9(F-32) */
/* BT2: Viết chương trình đổi đơn vị từ F( Ferarit) sang độ C (Celsius)
C = 5/9(F-32) */

#include <stdio.h>

int main () {
	float f;
	
	printf("Nhap vao do F(Ferarit): ");
	scanf("%f", &f);
	
	printf("%f do F = %.2f do C", f , 5.0 / 9 *( f - 32) );       // số thực chia số nguyên là số thực
	
	return 0;
}

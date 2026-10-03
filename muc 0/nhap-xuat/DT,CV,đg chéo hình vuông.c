/*BT7: Viết chương trình nhập vào chiều dài 1 cạnh hình vuông
Xuất ra kết quả chu vi, diện tích, đường chéo */

#include <stdio.h>
#include <math.h>

int main () {
	float canh;
	
	printf("Nhap canh hinh vuong: ");
	scanf("%f",&canh);
	
	printf("Chu vi: %.2f\n", canh * 4);
	printf("Dientich: %.2f\n", canh *canh);
	printf("Do dai duong cheo: %.2f", canh * sqrt(2));
	
	return 0;
}

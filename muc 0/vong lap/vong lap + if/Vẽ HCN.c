/* Viết chương trình vẽ hình chữ nhật
với d và r là dài và rộng được nhập từ phím */

#include <stdio.h>

int main () {
	int d, r;
	printf("Nhap vao chieu dai: ");
	scanf("%d", &d);
	
	printf ("\nNhap vao  chieu rong: ");
	scanf("%d", &r);
	
	if (d >= 0 && r >= 0) {

		for (int i = 1; i <= r; ++i) {
		
			for (int j = 1; j <= d; ++j) {
				printf("* ");	
		}
		printf("\n");
}
}
	else {
		printf("\nKhong hop le");
	}
	return 0;
}

// Viet chuong trình giai và bien luan phuong trình bac nhat ax + b = 0.
#include<stdio.h>

int main() {
    float a, b; // Khai báo 3 biến a, b và x.
    // Yêu cầu người dùng nhập vào 2 số a và b và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap so thuc a, b : "); 
    scanf("%f%f", &a, &b); 
  
  // Xét điều kiện của a và b và biện luận phương trình.
	if (a != 0)
		printf("Phuong trinh co nghiem la : %.2f", -b / a); // In ra nghiệm của phương trình nếu a khác 0.

	else if (a == 0 && b == 0)
		printf("Phuong trinh co vo so nghiem "); // In ra nghiệm của phương trình nếu a khác 0 và b khác 0.

	else if (a == 0 && b != 0)
		printf("Phuong trinh vo nghiem "); // In ra màn hình vô nghiệm nếu a bằng 0 và b khác 0.
	
}

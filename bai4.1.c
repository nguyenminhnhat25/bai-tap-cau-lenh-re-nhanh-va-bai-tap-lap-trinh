// Viet chuong trình nhap vào 2 so thuc và kiểm tra 2 so do co cung dau hay la khong.
#include<stdio.h>

int main() {
    float thu1, thu2; // Khai báo 2 biến: biến thứ nhất và biến thứ hai.
    
    // Yêu cầu người dùng nhập 2 số thực thu1 và thu2 và đọc dữ liệu được nhập vào từ người dùng.
    printf("Nhap so thuc thu nhat, thu hai : "); 
    scanf("%f%f", &thu1, &thu2); 
  
   // Xét dấu của hai số thu nhat và thu hai.
   if (thu1 <= 0 && thu2 <= 0 || thu1 >= 0 && thu2 >= 0) 
   printf("\n số thực thứ nhất và số thực thứ hai cùng dấu"); // In ra màn hình a và b cùng dấu.
   
   else
   printf("\n số thực thứ nhất và số thực thứ hai trái dấu"); // In ra màn hình a và b trai dấu.
   
   
}

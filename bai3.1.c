// Thay đổi nội dung chương trình C yêu cầu người dùng nhập vào một số nguyên bất kỳ và hiển thị thông báo số đó là chẵn hay lẻ.
#include<stdio.h>
// nhập (n)vào một số nguyên bất kỳ và hiển thị thông báo  số đó là chẵn hay lẻ.
int main() {
  int n; // khai báo biến nhập vào một số nguyên bất kỳ và hiển thị thông báo nếu đó là số chẵn hay số lẻ(n).
  //người dùng nhập vào một số nguyên bất kỳ
  printf("nhap vào mot so nguyen bat ki: ");
  scanf("%d", &n);
  //kiểm tra số người nhập là số chẵn hay số lẻ 
  if (n % 2 == 0)
  printf("%d la so chẵn!", n); // In ra màn hình nếu số nguyên là số chẵn.
  else
  printf("%d la số lẻ!", n); // In ra màn hình nếu số nguyên là sai số lẻ.
}

// Thay đổi nội dung chương trình C yêu cầu người dùng nhập vào một số nguyên bất kỳ và hiển thị thông báo nếu số nguyên đó là số âm.
#include<stdio.h>
// nhập (n)vào một số nguyên bất kỳ và hiển thị thông báo nếu số nguyên đó là số âm.
int main() {
  int n; // khai báo biến nhập vào một số nguyên bất kỳ và hiển thị thông báo nếu số nguyên đó là số âm(n).
  //người dùng nhập vào một số nguyên bất kỳ
  printf("nhap vào mot so nguyen bat ki: ");
  scanf("%d", &n);
  //kiểm tra số người nhập là số âm hoặc là sai số
  if (n % 2 == 0)
  printf("%d la so nguyen am!", n); // In ra màn hình nếu số nguyên là số nguyên âm.
  else
  printf("%d la nhap sai so!", n); // In ra màn hình nếu số nguyên là sai số.
}

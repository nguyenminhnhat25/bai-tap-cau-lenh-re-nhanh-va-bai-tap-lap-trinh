#include<stdio.h>
//Nếu 9 <= điểm <= 10: Hiển thị thông báo là Xuất sắc.
//Nếu 8 <= điểm < 9: Hiển thị thông báo là Giỏi.
//Nếu 7 <= điểm < 8: Hiển thị thông báo là Khá.
//Nếu 6 <= điểm < 7: Hiển thị thông báo là Trung bình Khá.
//Nếu 5 <= điểm < 6: Hiển thị thông báo là Trung bình.
//Nếu 0 <= điểm < 5: Hiển thị thông báo là Yếu.
int main() {
int diem;
    printf ("\n nhập vào điểm của một học sinh từ 0 đến 10 và hiển thị ");
    printf("\n Đạt "); scanf("%d",&diem);
if(( diem >= 0) && (diem <= 5))
    printf(" yếu \n");
else if(( diem >= 5) && (diem <= 6))
    printf(" Trung bình \n");
else if(( diem >= 6) && (diem <= 7))
    printf(" Trung bình Khá \n");
else if(( diem >= 7 && diem <= 8))
    printf(" Khá \n");
else if (( diem >= 8) && (diem <= 9))
    printf(" Giỏi \n");
else if (( diem >= 9) && (diem <= 10))
    printf(" Xuất sắc \n");
else
    printf(" Nhập sai \n");
    scanf(" %d", &diem);
}

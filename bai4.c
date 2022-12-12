// Viet chuong trình tìm so lon nhat và nho nhat trong 3 so thuc a, b, c.
#include<stdio.h>

int main() {
    float a, b, c; // Khai báo biến a, b và c.
	
// Yêu cầu người dùng nhập vào 3 số a, b và c và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap so thuc a, b , c : "); 
    scanf("%f%f%f", &a, &b, &c); 
	
    float max = a; // Gán max = a.
    float min = a; // Gán min = a.
  
  
// Xét điều kiện để tìm Max.
    if (max<b)
	    max = b;
    if (max<c)
	    max = c;
    printf("Max cua 3 so thuc a, b, c la : %.2f", max); // In ra Max của 3 số a,b và c.
  
  
// Xét điều kiện để tìm Min.
    if (min>b)
	    min = b;
    if (min>c)
	    min = c;
    printf("\nMin cua 3 so thuc a, b, c la : %.2f", min); //In ra Min của 3 số a,b và c.
}

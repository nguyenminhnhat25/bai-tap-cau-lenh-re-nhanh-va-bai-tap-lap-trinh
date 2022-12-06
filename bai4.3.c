// Nhap vào tháng cua mot nam. Cho biet tháng thuoc quí may trong nam. 
// Ví du tháng 1, 2, 3 thuoc quý mot; 4, 5, 6 thuoc quý hai,...
#include<stdio.h>

int main() {
    int thang; // Khai báo biến tháng.
    
    // Yêu cầu người dùng nhập vào một tháng bất kì và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap thang: ");
    scanf("%d", &thang);
    
    // Xét điều kiện để kiểm tháng tháng mà người dùng nhập vào thuộc quý mấy trong năm.
    if (thang <= 0 || thang > 12)
    printf("Vui long nhap lai thang"); // Yêu cầu người dùng nhập lại tháng.
        
    if (thang == 1 || thang == 2 || thang == 3)
    	printf("\nQuy 1"); // In ra quý 1 nếu 1 <= thang <= 3.

	
	else if(thang == 4 || thang == 5 || thang == 6) 
		printf("\nQuy 2"); // In ra quý 2 nếu 4 <= thang <= 6.


	else if(thang == 7 || thang == 8 || thang == 9) 
		printf("\nQuy 3"); // In ra quý 3 nếu 7 <= thang <= 9.


	else if(thang == 10 || thang == 11 || thang == 12) 
		printf("\nQuy 4"); // In ra quý 4 nếu 10 <= thang <= 12.


}

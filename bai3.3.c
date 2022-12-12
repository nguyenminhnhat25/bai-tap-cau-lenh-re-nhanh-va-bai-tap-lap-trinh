/* vào hai số a, b và một ký tự bất kỳ. Chương trình sẽ hiển thị thông báo theo quy tắc sau:
Nếu kí tự nhập vào là +: Hiển thị tổng của a và b.
Nếu kí tự nhập vào là -: Hiển thị hiệu của a và b.
Các kí tự khác: Hiển thị Vui lòng nhập + hoặc - */

#include <stdio.h>


int main(){
    float a,b; // Khai báo biến a và b.
    char kytu; // khai báo biến ký tự (kytu).
    
    // Yêu cầu người dùng nhập dữ liệu và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap mot ky tu \'+\'hoặc \'-\': ");
    scanf("%c", &kytu);
    printf("va Nhap vao hai so a va b : ");
    scanf("%f%f",&a, &b); 
  
    // Xét điều kiện của dấu mà người dùng nhập vào.
    switch(kytu){
        case '+':
            printf("Tong hai so a va b la : a + b = %.2f",a + b); // In ra hai số a và b nếu là ký tự '+'.
            break;
        
        case '-':
            printf("Hieu hai so a va b la : a - b = %.2f",a - b); // In ra hai số a và b nếu là ký tự '-'.
            break;
        
        default :
            printf("Vui long nhap lai ky tu va dau"); // Yêu cầu người dùng nhập lại.
            break;
    }
}

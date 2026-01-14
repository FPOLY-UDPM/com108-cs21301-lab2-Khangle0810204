/******************************************************************************
 * Họ và tên: [Lê Bá Tấn Khang]
 * MSSV:      [PS184201]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    // Khai báo biến
    int gt1 = 0, gt2 = 0;
    // Nhập dữ liệu
    printf("Hay nhap gia tri cho x : ");
    scanf("%d", &gt1);
    
    printf("Hay nhap gia tri cho y : ");
    scanf("%d", &gt2);
    // Xử lý, tính toán
    //tinh tong
    int tong = 0;
    tong = gt1 + gt2;
    printf("Vay gia tri tong cua X va Y la : %d\n", tong);

    // tinh hieu
    int hieu = 0;
    hieu = gt1 - gt2;
    printf("Vay gia tri hieu cua X va Y la : %d\n", hieu);
    return 0;

}
/******************************************************************************
 * Họ và tên: [Lê Bá Tấn Khang]
 * MSSV:      [PS184201]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main()
{
    // Khai báo 2 biến chiều dài và chiều rộng của hình chữ nhật
    float ChieuDai, ChieuRong;
    // Khai báo biến cho diện tích và chu vi của hình chữ nhật
    float dienTich, chuVi;

    // Người dùng nhập số đo chiều dài và chiều rộng
    printf("Nhap chieu dai: ");
    scanf("%f", &ChieuDai);

    printf("Nhap chieu rong: ");
    scanf("%f", &ChieuRong);

    // Biểu thức tính toán của diện tích và chu vi hình chữ nhật
    dienTich = ChieuDai * ChieuRong;
    chuVi = (ChieuDai + ChieuRong) * 2;

    // In ra màn hình kết quả diện tích và chu vi hình chữ nhật
    printf("\nDien tich hinh chu nhat = %.2f\n", dienTich);
    printf("Chu vi hinh chu nhat = %.2f\n", chuVi);

    return 0;
}   
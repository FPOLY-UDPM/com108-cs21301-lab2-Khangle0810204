/******************************************************************************
 * Họ và tên: [Lê Bá Tấn Khang]
 * MSSV:      [PS184201]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main()
{
     float banKinh;
    float chuVi, dienTich;
    const float PI = 3.14159;

    printf("Nhap vao ban kinh cua duong tron: ");
    scanf("%f", &banKinh);

    chuVi = 2 * PI * banKinh;
    dienTich = PI * banKinh * banKinh;

    printf("\nChu vi hinh tron = %.2f\n", chuVi);
    printf("Dien tich hinh tron = %.2f\n", dienTich);

    return 0;
}

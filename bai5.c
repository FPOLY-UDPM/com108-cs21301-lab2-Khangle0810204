/******************************************************************************
 * Họ và tên: [LÊ BÁ TẤN KHANG]
 * MSSV:      [PS48328]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

/******************************************************************************
 * Họ và tên: [LÊ BÁ TẤN KHANG]
 * MSSV:      [PS48328]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    int so1, so2;
    int tich;
    float thuong;

    printf("Chuong trinh tinh tich va thuong cua 2 so\n");

    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    // Tính tích
    tich = so1 * so2;
    printf("Tich cua %d va %d la: %d\n", so1, so2, tich);

    // Tính thương
    if (so2 != 0) {
        thuong = (float)so1 / so2;
        printf("Thuong cua %d va %d la: %.2f\n", so1, so2, thuong);
    } else {
        printf("Khong the tinh thuong vi so thu hai bang 0\n");
    }

    return 0;
}

/******************************************************************************
 * Họ và tên: [Lê Bá Tấn Khang]
 * MSSV:      [PS184201]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main() {
    float diemToan, diemLy, diemHoa;
    float diemTrungBinh;

    printf("Nhap diem mon Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem mon Ly: ");
    scanf("%f", &diemLy);

    printf("Nhap diem mon Hoa: ");
    scanf("%f", &diemHoa);

    diemTrungBinh = (diemToan * 3 + diemLy * 2 + diemHoa * 1) / (3 + 2 + 1);

    printf("\nDiem trung binh cua ban la: %.2f\n", diemTrungBinh);

    return 0;
}
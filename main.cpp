#include <iostream>
#include "cTamGiac.h"
using namespace std;

int main() {
    cTamGiac tg;
    string loai;

    //Nhập lại nếu không phải tam giác
    do {
        tg.Nhap();
        loai = tg.KiemTraLoai();

        if (loai == "Khong phai tam giac") {
            cout << "Khong phai tam giac! Vui long nhap lai.\n";
        }

    } while (loai == "Khong phai tam giac");

    cout << "\nTam giac: ";
    tg.Xuat();

    cout << "\nLoai: " << loai;
    cout << "\nChu vi: " << tg.TinhChuVi();
    cout << "\nDien tich: " << tg.TinhDienTich();

    //Tịnh tiến
    float dx, dy;
    cout << "\n\nNhap dx: ";
    cin >> dx;
    cout << "\nNhap dy: ";
    cin >> dy;
    tg.TinhTien(dx, dy);
    cout << "Sau tinh tien: ";
    tg.Xuat();

    //Phóng to
    float k;
    cout << "\n\nNhap k phong to: ";
    cin >> k;
    tg.PhongTo(k);
    cout << "Sau phong to: ";
    tg.Xuat();

    //Thu nhỏ
    cout << "\n\nNhap k thu nho: ";
    cin >> k;
    tg.ThuNho(k);
    cout << "Sau thu nho: ";
    tg.Xuat();

    //Quay
    float goc;
    cDiem tam;
    cout << "\n\nNhap goc quay: ";
    cin >> goc;
    cout << "Nhap tam quay:\n";
    tam.Nhap();

    tg.Quay(goc, tam);
    cout << "Sau quay: ";
    tg.Xuat();

    return 0;
}

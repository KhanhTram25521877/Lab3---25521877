#include "cDaGiac.h"
#include <iostream>
using namespace std;

int main() {
    cDaGiac dg;
    do {
        dg.Nhap();

        if (!dg.LaDaGiac()) {
            cout << "Khong phai da giac! Nhap lai.\n\n";
        }

    } while (!dg.LaDaGiac());

    cout << "\nDa giac ban dau:\n";
    dg.Xuat();

    cout << "\nChu vi: " << dg.TinhChuVi() << endl;
    cout << "Dien tich: " << dg.TinhDienTich() << endl;

    //Tịnh tiến
    float dx, dy;
    cout << "\nNhap vector tinh tien (dx, dy): ";
    cin >> dx >> dy;

    dg.TinhTien(dx, dy);
    cout << "Sau khi tinh tien:\n";
    dg.Xuat();

    //Quay
    float goc;
    cout << "\nNhap goc quay (do): ";
    cin >> goc;

    cDiem tam;
    cout << "Nhap tam quay (x y): ";
    tam.Nhap();

    dg.Quay(goc, tam);
    cout << "Sau khi quay:\n";
    dg.Xuat();

    //Phóng to
    float k;
    cout << "\nNhap he so phong to k: ";
    cin >> k;

    dg.PhongTo(k);
    cout << "Sau khi phong to:\n";
    dg.Xuat();

    //Thu nhỏ
    cout << "\nNhap he so thu nho k: ";
    cin >> k;

    dg.ThuNho(k);
    cout << "Sau khi thu nho:\n";
    dg.Xuat();

    return 0;
}

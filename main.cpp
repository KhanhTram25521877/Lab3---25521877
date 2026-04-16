#include "cNhanVienSX.h"
#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Nhap so luong nhan vien: ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cout << "Nhap sai! Nhap lai.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (cin.fail() || n <= 0);

    cNhanVienSX ds[100];

    cout << "\nNhap danh sach\n";
    for (int i = 0; i < n; i++) {
        cout << "\nNhan vien " << i + 1 << ":\n";
        ds[i].Nhap();
    }

    cout << "\nDanh sach nhan vien\n";
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
    }

    //lương thấp nhất
    float minLuong = ds[0].TinhLuong();
    int viTri = 0;

    for (int i = 1; i < n; i++) {
        if (ds[i].TinhLuong() < minLuong) {
            minLuong = ds[i].TinhLuong();
            viTri = i;
        }
    }

    cout << "\nNhan vien co luong thap nhat:\n";
    ds[viTri].Xuat();

    //tổng lương
    float tong = 0;
    for (int i = 0; i < n; i++) {
        tong += ds[i].TinhLuong();
    }

    cout << "\nTong luong cong ty: " << tong << endl;

    //sắp xếp
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].TinhLuong() > ds[j].TinhLuong()) {
                cNhanVienSX temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    cout << "\nDanh sach sau khi sap xep tang theo luong\n";
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
    }

    return 0;
}

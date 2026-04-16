#include "cNhanVienSX.h"
#include <iostream>
using namespace std;

// Constructor
cNhanVienSX::cNhanVienSX() {
    MaNV = "";
    HoTen = "";
    NgaySinh = "";
    SoSanPham = 0;
    DonGia = 0;
}

// Nhập
void cNhanVienSX::Nhap() {
    cin.ignore();

    cout << "Nhap MaNV: ";
    getline(cin, MaNV);

    cout << "Nhap HoTen: ";
    getline(cin, HoTen);

    cout << "Nhap NgaySinh: ";
    getline(cin, NgaySinh);

    // nhập số sản phẩm
    do {
        cout << "Nhap SoSanPham: ";
        cin >> SoSanPham;

        if (cin.fail() || SoSanPham < 0) {
            cout << "Nhap sai! Nhap lai.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (cin.fail() || SoSanPham < 0);

    // nhập đơn giá
    do {
        cout << "Nhap DonGia: ";
        cin >> DonGia;

        if (cin.fail() || DonGia < 0) {
            cout << "Nhap sai! Nhap lai.\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (cin.fail() || DonGia < 0);
}

// Xuất
void cNhanVienSX::Xuat() {
    cout << "MaNV: " << MaNV << endl;
    cout << "HoTen: " << HoTen << endl;
    cout << "NgaySinh: " << NgaySinh << endl;
    cout << "SoSanPham: " << SoSanPham << endl;
    cout << "DonGia: " << DonGia << endl;
    cout << "Luong: " << TinhLuong() << endl;
    cout << "\n";
}

// Tính lương
float cNhanVienSX::TinhLuong() {
    return SoSanPham * DonGia;
}

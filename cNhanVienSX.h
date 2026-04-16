#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H
#include <string>
#include <iostream>
using namespace
std;

class cNhanVienSX
{
   private:
    string MaNV;
    string HoTen;
    string NgaySinh;
    int SoSanPham;
    float DonGia;

public:
    cNhanVienSX();

    void Nhap();
    void Xuat();
    float TinhLuong();
};

#endif // CNHANVIENSX_H

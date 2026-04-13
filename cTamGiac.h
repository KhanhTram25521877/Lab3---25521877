#ifndef CTAMGIAC_H
#define CTAMGIAC_H
#include "cDiem.h"
#include <string>
using namespace std;


class cTamGiac
{
    private:
        cDiem A;
        cDiem B;
        cDiem C;
    public:
        cTamGiac(cDiem A, cDiem B, cDiem C);
        cTamGiac();
        ~cTamGiac();

        void Nhap();
        void Xuat();

        string KiemTraLoai();

        float TinhChuVi();
        float TinhDienTich();

        void TinhTien(float dx, float dy);
        void Quay(float goc, cDiem tam);

        void PhongTo(float k);
        void ThuNho(float k);
};

#endif // CTAMGIAC_H

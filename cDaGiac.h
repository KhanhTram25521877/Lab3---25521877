#ifndef CDAGIAC_H
#define CDAGIAC_H
#include "cDiem.h"


class cDaGiac {
private:
    int SoDinh;
    cDiem* DsDinh;

public:
    cDaGiac();
    ~cDaGiac();

    void Nhap();
    void Xuat();

    bool LaDaGiac();

    float TinhChuVi();
    float TinhDienTich();

    void TinhTien(float dx, float dy);
    void Quay(float goc);
    void Quay(float goc, cDiem tam);
    void PhongTo(float k);
    void ThuNho(float k);
};

#endif // CDAGIAC_H

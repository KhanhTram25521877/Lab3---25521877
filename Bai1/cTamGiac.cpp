#include "cTamGiac.h"
#include <iostream>
#include <cmath>
using namespace std;

#define EPS 0.001

bool bangNhau(float a, float b) {
    return fabs(a - b) < EPS;
}

cTamGiac::cTamGiac() {}

cTamGiac::cTamGiac(cDiem A, cDiem B, cDiem C) {
    this->A = A;
    this->B = B;
    this->C = C;
}

cTamGiac::~cTamGiac() {}

void cTamGiac::Nhap() {
    cout << "Nhap A:\n";
    A.Nhap();
    cout << "Nhap B:\n";
    B.Nhap();
    cout << "Nhap C:\n";
    C.Nhap();
}

void cTamGiac::Xuat() {
    cout << "A"; A.Xuat();
    cout << " ";
    cout << "B"; B.Xuat();
    cout << " ";
    cout << "C"; C.Xuat();
}

string cTamGiac::KiemTraLoai() {
    float a = B.KhoangCach(C);
    float b = C.KhoangCach(A);
    float c = A.KhoangCach(B);

    //Không phải tam giác
    if (a + b <= c || b + c <= a || a + c <= b)
        return "Khong phai tam giac";

    //Tam giác đều
    if (bangNhau(a,b) && bangNhau(b,c))
        return "Tam giac deu";

    //Tam giác vuông
    if (fabs(a*a + b*b - c*c) < EPS ||
        fabs(b*b + c*c - a*a) < EPS ||
        fabs(a*a + c*c - b*b) < EPS)
    {
        //Vuông cân
        if (bangNhau(a,b) || bangNhau(b,c) || bangNhau(a,c))
            return "Tam giac vuong can";

        return "Tam giac vuong";
    }

    //Tam giác cân
    if (bangNhau(a,b) || bangNhau(b,c) || bangNhau(a,c))
        return "Tam giac can";

    return "Tam giac thuong";
}

float cTamGiac::TinhChuVi() {
    float a = B.KhoangCach(C);
    float b = C.KhoangCach(A);
    float c = A.KhoangCach(B);
    return a + b + c;
}

float cTamGiac::TinhDienTich() {
    float a = B.KhoangCach(C);
    float b = C.KhoangCach(A);
    float c = A.KhoangCach(B);

    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void cTamGiac::TinhTien(float dx, float dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void cTamGiac::PhongTo(float k) {
    A.PhongTo(k);
    B.PhongTo(k);
    C.PhongTo(k);
}

void cTamGiac::ThuNho(float k) {
    A.ThuNho(k);
    B.ThuNho(k);
    C.ThuNho(k);
}

void cTamGiac::Quay(float goc, cDiem tam) {
    A.Quay(goc, tam);
    B.Quay(goc, tam);
    C.Quay(goc, tam);
}

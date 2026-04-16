#include "cDaGiac.h"
#include <iostream>
#include <cmath>
using namespace std;

//Tính khoảng cách giữa 2 điểm
float KhoangCach(cDiem a, cDiem b) {
    return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
}

cDaGiac::cDaGiac() {
    SoDinh = 0;
    DsDinh = NULL;
}

//Destructor giải phóng bộ nhớ động
cDaGiac::~cDaGiac() {
    delete[] DsDinh;
}

//Nhập số đỉnh và danh sách các đỉnh của đa giác
void cDaGiac::Nhap() {
    cout << "Nhap so dinh: ";
    cin >> SoDinh;

    DsDinh = new cDiem[SoDinh]; //cấp phát mảng động

    for (int i = 0; i < SoDinh; i++) {
        cout << "Nhap diem " << i + 1 << ": ";
        DsDinh[i].Nhap();
    }
}

//Xuất danh sách của các đỉnh
void cDaGiac::Xuat() {
    cout << "Da giac: ";
    for (int i = 0; i < SoDinh; i++) {
        DsDinh[i].Xuat();
        cout << " ";
    }
    cout << endl;
}

//Kiểm tra xem có phải là Đa Giác hay không
bool cDaGiac::LaDaGiac() {
    return SoDinh >= 3;
}

//Tính chu vi Đa Giác
float cDaGiac::TinhChuVi() {
    float C = 0;
    for (int i = 0; i < SoDinh; i++) {
        C += KhoangCach(DsDinh[i], DsDinh[(i + 1) % SoDinh]);
    }
    return C;
}

//Tính diện tích Đa Giác
float cDaGiac::TinhDienTich() {
    float S = 0;
    for (int i = 0; i < SoDinh; i++) {
        int j = (i + 1) % SoDinh;
        S += DsDinh[i].getX() * DsDinh[j].getY();
        S -= DsDinh[j].getX() * DsDinh[i].getY();
    }
    return abs(S) / 2;
}

//Tịnh tiến
void cDaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < SoDinh; i++) {
        DsDinh[i].TinhTien(dx, dy);
    }
}

//Quay quanh điểm bất kỳ
void cDaGiac::Quay(float goc, cDiem tam) {
    for (int i = 0; i < SoDinh; i++) {
        DsDinh[i].Quay(goc, tam);
    }
}

//Phóng to
void cDaGiac::PhongTo(float k) {
    for (int i = 0; i < SoDinh; i++) {
        DsDinh[i].PhongTo(k);
    }
}

//Thu nhỏ
void cDaGiac::ThuNho(float k) {
    for (int i = 0; i < SoDinh; i++) {
        DsDinh[i].ThuNho(k);
    }
}

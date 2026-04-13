#include "cDiem.h"
#include <iostream>
#include <cmath>
using namespace std;

//Hàm tạo mặc định
cDiem::cDiem()
{
    x = 0;
    y = 0;
}

//Hàm tạo tham số
cDiem::cDiem(float x, float y)
{
    this->x = x;
    this->y = y;
}

cDiem::~cDiem(){}

void cDiem::Nhap()
{
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
}

void cDiem::Xuat()
{
    cout << "(" << x << "," << y << ")";
}

float cDiem::getX() {
    return x;
}

float cDiem::getY() {
    return y;
}

float cDiem::KhoangCach(const cDiem& d)
{
    return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
}

void cDiem::TinhTien(float dx, float dy) {
    x += dx;
    y += dy;
}

void cDiem::PhongTo(float k) {
    x *= k;
    y *= k;
}

void cDiem::ThuNho(float k) {
    x /= k;
    y /= k;
}

void cDiem::Quay(float goc, cDiem tam) {
    float rad = goc * M_PI / 180;

    float xt = x - tam.getX();
    float yt = y - tam.getY();

    float x_moi = xt * cos(rad) - yt * sin(rad);
    float y_moi = xt * sin(rad) + yt * cos(rad);

    x = x_moi + tam.getX();
    y = y_moi + tam.getY();
}


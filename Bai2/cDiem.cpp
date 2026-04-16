#include "cDiem.h"
#include <iostream>
#include <cmath>
using namespace std;

//Constructor mặc định
cDiem::cDiem() {
    x = y = 0;
}

//Constructor có tham số
cDiem::cDiem(float x, float y) {
    this->x = x;
    this->y = y;
}

//Nhập giá trị toạ độ từ bàn phím
void cDiem::Nhap() {
    cin >> x;
    cin >> y;
}

//Xuất toạ độ điểm ra màn hình
void cDiem::Xuat() {
    cout << "(" << x << ", " << y << ")";
}

//Lấy giá trị hoành độ x
float cDiem::getX()
{
    return x;
}

//Lấy giá trị tung dộ y
float cDiem::getY()
{
    return y;
}

//Gán giá trị mới cho x
void cDiem::setX(float x)
{
     this->x = x;
}

//Gán giá trị mới cho y
void cDiem::setY(float y)
{
    this->y = y;
}

//Tịnh tiến
void cDiem::TinhTien(float dx, float dy) {
    x += dx;
    y += dy;
}

//Phóng to theo hệ số k
void cDiem::PhongTo(float k) {
    x *= k;
    y *= k;
}

//Thu nhỏ theo hệ số k
void cDiem::ThuNho(float k) {
    x /= k;
    y /= k;
}

//Quay điểm quanh một điểm bất kì, một gốc toạ độ bất kì
void cDiem::Quay(float goc, cDiem tam) {
    float rad = goc * M_PI / 180;

    //Tịnh tiến về gốc
    float xTam = x - tam.getX();
    float yTam = y - tam.getY();

    //Thực hiện quay
    float xMoi = xTam * cos(rad) - yTam * sin(rad);
    float yMoi = xTam * sin(rad) + yTam * cos(rad);

    //Tịnh tiến lại vị trí ban đầu
    x = xMoi + tam.getX();
    y = yMoi + tam.getY();
}

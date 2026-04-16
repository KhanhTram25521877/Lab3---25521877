#include "cArray.h"
#include <cstddef>
#include <iostream>
using namespace std;

// Constructor
cArray::cArray() {
    a = nullptr;
    n = 0;
}

// Constructor có tham số
cArray::cArray(int n) {
    this->n = n;
    a = new int[n];
}

// Destructor
cArray::~cArray() {
    if (a != nullptr)
        delete[] a;
}

// Kiểm tra mảng rỗng
bool cArray::Rong() {
    return n == 0;
}

//Tạo mảng ngẫu nhiên
void cArray::TaoMangNgauNhien() {
    cout << "Nhap so phan tu: ";
    cin >> n;

    // nếu nhập sai thì bắt nhập lại
    while (n < 0) {
        cout << "Nhap lai n >= 0: ";
        cin >> n;
    }

    if (a != nullptr)
        delete[] a;

    if (n == 0) {
        a = nullptr;
        return;
    }

    a = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// Xuất mảng
void cArray::Xuat() {
    if (n == 0) {
        cout << "Mang rong\n";
        return;
    }

    cout << "Mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Đếm x
int cArray::DemX(int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            dem++;
    }
    return dem;
}

// Kiểm tra tăng dần
bool cArray::KiemTraTangDan() {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

// Kiểm tra số nguyên tố
bool cArray::LaSoNguyenTo(int x) {
    if (x < 2) return false;

    for (int i = 2; i < x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

// Tìm số lẻ nhỏ nhất
int cArray::TimLeNhoNhat() {
    int minLe = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (minLe == -1 || a[i] < minLe)
                minLe = a[i];
        }
    }

    return minLe;
}

// Tìm số nguyên tố lớn nhất
int cArray::TimNguyenToLonNhat() {
    int maxNT = -1;

    for (int i = 0; i < n; i++) {
        if (LaSoNguyenTo(a[i])) {
            if (a[i] > maxNT)
                maxNT = a[i];
        }
    }

    return maxNT;
}

// Sắp xếp tăng
void cArray::SapXepTang() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Sắp xếp giảm
void cArray::SapXepGiam() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

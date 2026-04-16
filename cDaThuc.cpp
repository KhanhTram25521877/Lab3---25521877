#include "cDaThuc.h"
#include <iostream>
using namespace std;

// Constructor
cDaThuc::cDaThuc() {
    bac = 0;
    for (int i = 0; i < MAX; i++) {
        heSo[i] = 0;
    }
}

// Nhập
void cDaThuc::Nhap() {
    cout << "Nhap bac da thuc: ";
    cin >> bac;

    while (bac < 0 || bac >= MAX) {
        cout << "Nhap lai (0 <= bac < " << MAX << "): ";
        cin >> bac;
    }

    for (int i = 0; i <= bac; i++) {
        cout << "Nhap he so a[" << i << "] = ";
        cin >> heSo[i];
    }
}

// Xuất
void cDaThuc::Xuat() {
    cout << "P(x) = ";

    bool coIn = false;

    for (int i = 0; i <= bac; i++) {
        if (heSo[i] != 0) {
            coIn = true;

            cout << heSo[i];

            if (i > 0)
                cout << "x^" << i;

            if (i < bac)
                cout << " + ";
        }
    }

    if (!coIn)
        cout << "0";

    cout << endl;
}

// Tính giá trị
float cDaThuc::TinhGiaTri(float x) {
    float kq = 0;

    for (int i = 0; i <= bac; i++) {
        float mu = 1;
        for (int j = 0; j < i; j++) {
            mu *= x;
        }
        kq += heSo[i] * mu;
    }

    return kq;
}

// Cộng
cDaThuc cDaThuc::Cong(cDaThuc dt) {
    cDaThuc kq;

    kq.bac = (bac > dt.bac) ? bac : dt.bac;

    for (int i = 0; i <= kq.bac; i++) {
        float a1 = (i <= bac) ? heSo[i] : 0;
        float a2 = (i <= dt.bac) ? dt.heSo[i] : 0;

        kq.heSo[i] = a1 + a2;
    }

    return kq;
}

// Trừ
cDaThuc cDaThuc::Tru(cDaThuc dt) {
    cDaThuc kq;

    kq.bac = (bac > dt.bac) ? bac : dt.bac;

    for (int i = 0; i <= kq.bac; i++) {
        float a1 = (i <= bac) ? heSo[i] : 0;
        float a2 = (i <= dt.bac) ? dt.heSo[i] : 0;

        kq.heSo[i] = a1 - a2;
    }

    return kq;
}

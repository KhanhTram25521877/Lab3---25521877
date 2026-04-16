#ifndef CDATHUC_H
#define CDATHUC_H
#include <iostream>
using namespace std;

#define MAX 100

class cDaThuc
{
    private:
        float heSo[MAX]; // mảng hệ số
        int bac;         // bậc

    public:
        cDaThuc();

        void Nhap();
        void Xuat();

        float TinhGiaTri(float x);

        cDaThuc Cong(cDaThuc dt);
        cDaThuc Tru(cDaThuc dt);
};

#endif // CDATHUC_H

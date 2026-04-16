#include "cDaThuc.h"
#include <iostream>
using namespace std;

int main()
{
    cDaThuc A, B, C;

    cout << "Nhap da thuc A:\n";
    A.Nhap();

    cout << "\nNhap da thuc B:\n";
    B.Nhap();

    cout << "\nDa thuc A:\n";
    A.Xuat();

    cout << "\nDa thuc B:\n";
    B.Xuat();

    float x;
    cout << "\nNhap gia tri x: ";
    cin >> x;

    cout << "P_A(" << x << ") = " << A.TinhGiaTri(x) << endl;
    cout << "P_B(" << x << ") = " << B.TinhGiaTri(x) << endl;

    // Cộng
    C = A.Cong(B);
    cout << "\nA + B = ";
    C.Xuat();

    // Trừ
    C = A.Tru(B);
    cout << "\nA - B = ";
    C.Xuat();

    return 0;
}

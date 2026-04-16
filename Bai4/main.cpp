#include "cArray.h"
#include <iostream>
using namespace std;

int main() {
    cArray mang;

    mang.TaoMangNgauNhien();

    cout << "\nMang ngau nhien vua tao la:\n";
    mang.Xuat();

    // 👇 xử lý mảng rỗng
    if (mang.Rong()) {
        cout << "Khong the thuc hien cac thao tac khac!\n";
        return 0;
    }

    int x;
    cout << "\nNhap x can dem: ";
    cin >> x;

    cout << "So lan xuat hien cua " << x << ": "
         << mang.DemX(x) << endl;

    if (mang.KiemTraTangDan())
        cout << "Mang tang dan\n";
    else
        cout << "Mang KHONG tang dan\n";

    int le = mang.TimLeNhoNhat();
    if (le == -1)
        cout << "Khong co so le\n";
    else
        cout << "So le nho nhat: " << le << endl;

    int nt = mang.TimNguyenToLonNhat();
    if (nt == -1)
        cout << "Khong co so nguyen to\n";
    else
        cout << "So nguyen to lon nhat: " << nt << endl;

    cout << "\nSap xep tang:\n";
    mang.SapXepTang();
    mang.Xuat();

    cout << "\nSap xep giam:\n";
    mang.SapXepGiam();
    mang.Xuat();

    return 0;
}


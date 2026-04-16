#ifndef CARRAY_H
#define CARRAY_H


class cArray
{
   private:
    int* a;
    int n;

public:
    cArray();
    cArray(int n);
    ~cArray();

    void TaoMangNgauNhien();
    void Xuat();

    int DemX(int x);
    bool KiemTraTangDan();

    int TimLeNhoNhat();
    int TimNguyenToLonNhat();

    bool LaSoNguyenTo(int x);

    void SapXepTang();
    void SapXepGiam();

    bool Rong();
};

#endif // CARRAY_H

#ifndef CDIEM_H
#define CDIEM_H


class cDiem
{
    private:
        float x;
        float y;
    public:
        cDiem();
        cDiem(float x, float y);
        ~cDiem();

        void Nhap();
        void Xuat();

        float getX();
        float getY();
        float KhoangCach(const cDiem& d);
        void TinhTien(float dx, float dy);
        void PhongTo(float k);
        void ThuNho(float k);
        void Quay(float goc, cDiem tam);
};

#endif // CDIEM_H

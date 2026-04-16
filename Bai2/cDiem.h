#ifndef CDIEM_H
#define CDIEM_H


class cDiem
{
    private:
        float x, y;

    public:
        cDiem();
        cDiem(float x, float y);

        void Nhap();
        void Xuat();

        float getX();
        float getY();

        void setX(float x);
        void setY(float y);

        void TinhTien(float dx, float dy);
        void PhongTo(float k);
        void ThuNho(float k);
        void Quay(float goc, cDiem tam);
};

#endif // CDIEM_H

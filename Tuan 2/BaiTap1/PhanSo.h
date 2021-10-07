class PhanSo
{
    private:
        double TuSo;
        double MauSo;
    public:
        void set(double Tu, double Mau);
        void Nhap();
        void Xuat();
        void Cong(PhanSo PS);
        void Tru(PhanSo PS);
        void Nhan(PhanSo PS);
        void Chia(PhanSo PS);
        void ToiGianPhanSo(PhanSo &PS);
};
#include<iostream>
#include"Diem.h"
#include<cmath>
using namespace std;

void Diem::nhapdiem(Diem& a) {
	cin >> a.HoanhDo >> a.TungDo;
}

void Diem::xuatdiem(Diem& a) {
	cout << a.HoanhDo << ";"<<a.TungDo<<endl;
}

void Diem::tinhtien(Diem& a) {
	Diem c;
	cout << "nhap vecto tinh tien: ";
	int x, y;
	cin >> x >> y;
	c.HoanhDo = x + a.HoanhDo;
	c.TungDo = y + a.TungDo;
	cout << "diem a tinh tien theo vecto " << x << ";" << y << " thanh diem " << c.HoanhDo << ";" << c.TungDo<<endl;
}

long long giaithua(int n) {
	long long gt = 1;
	for (int i = 1; i <= n; i++) {
		gt = gt * i;
	}
	return gt;
}

float Cosin(float x/*x o radian*/) {
	float c = 0;
	for (int i = 0; i <=20; i++) {
		c = c + pow(-1, i) * pow(x, 2*i)*1.0 /giaithua(2*i);
	}
	return c;
}

void Diem::quay(Diem& a) {
	float rad;
	cout << "goc quay ";
	cin >> rad;
	float r = sqrt(pow(a.HoanhDo, 2) + pow(a.TungDo, 2));
	a.HoanhDo = r * Cosin(rad);
	a.TungDo = r * sqrt(1 - pow(Cosin(rad), 2));
	cout << " diem a qua phep quay tam O goc " << rad << " tro thanh diem " << a.HoanhDo << ";" << a.TungDo;
}

int main() {
	Diem a;
	a.nhapdiem(a);
	a.xuatdiem(a);
	a.tinhtien(a);
	a.quay(a);
	return 0;
}
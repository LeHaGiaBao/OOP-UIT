#include <iostream>
#include <string.h>
using namespace std;

class Candidate
{
private:
	char MaSV[100];
	char HovaTen[100];
	int Ngaysinh;
	int Thangsinh;
	int Namsinh;
	float Diemtoan;
	float Diemvan;
	float Diemanh;
public:
	void set();
	bool Sumscore();
	void print();
};

void Candidate::set()
{
	cout << "Nhap vao Ma SV: ";
	cin >> this->MaSV;
	cin.ignore();
	cout << "Nhap vao Ho va ten: ";
	cin.getline(this->HovaTen, 100);
	cout << "Nhap ngay thang nam sinh cua sinh vien: ";
	cin >> this->Ngaysinh >> this->Thangsinh >> this->Namsinh;
	cout << "Nhap diem toan cua sinh vien: ";
	cin >> this->Diemtoan;
	cout << "Nhap diem van cua sinh vien: "; 
	cin >> this->Diemvan;
	cout << "Nhap diem anh cua sinh vien: ";
	cin >> this->Diemanh;
}

bool Candidate::Sumscore()
{
	if ((this->Diemtoan + this->Diemanh + this->Diemvan) >= 15)
		return true;
}

void Candidate::print()
{
	cout << "Ho va ten: " << this->HovaTen << endl;
	cout << "Ma so sinh vien: " << this->MaSV << endl;
	cout << "Ngay thang nam sinh: " << this->Ngaysinh << " " << this->Thangsinh << " " << this->Namsinh << endl;
	cout << "Diem toan: " << this->Diemtoan << endl;
	cout << "Diem van: " << this->Diemvan << endl;
	cout << "Diem anh: " << this->Diemanh << endl;
}

class TestCandidate
{
public:
	void Nhapsinhvien(int n, Candidate x[1000]);
	void Insinhvien(int n , Candidate x[1000]);
};

void TestCandidate::Nhapsinhvien(int n, Candidate x[1000])
{
	for (int i = 0; i < n; i++) {
		x[i].set();
	}
}

void TestCandidate::Insinhvien(int n, Candidate x[1000])
{
	for (int i = 0; i < n; i++)
		if (x[i].Sumscore() == true)
			x[i].print();
}

int main() 
{
	int n;
	cin >> n;
	Candidate a[100];
	TestCandidate b;
	b.Nhapsinhvien(n, a);
	b.Insinhvien(n, a);
	return 0;
}
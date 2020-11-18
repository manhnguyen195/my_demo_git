#ifndef _Phan_So_h
#define _Phan_So_h

#include <iostream>
using namespace std;

class PhanSo {
private:
	int tu, mau;
public:
	PhanSo();
	PhanSo(int,int);
	PhanSo& operator+=(const PhanSo&);
	const PhanSo operator+(const PhanSo&) const;
	bool operator==(const PhanSo&) const;
	PhanSo& operator++(); //++tien to
	PhanSo operator++(int); //++hau to
friend ostream& operator<<(ostream& out, const PhanSo& src);
};

#endif

#ifndef _My_Matrix_H
#define _My_Matrix_H
#include <iostream>
using namespace std;

class MyMatrix{
public:
	int nrow, ncol;
private:
	int *A;
public:
	MyMatrix(int, int);
	~MyMatrix();
	int Get(int,int);
	void Set(int, int, int);
friend ostream& operator<<(ostream& out,const MyMatrix& M);
};

#endif

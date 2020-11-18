#include <iostream>
#include "PhanSo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	PhanSo a(2,3), b(5,6),c;
	c = a + b;
	
	cout << "phanSo: "<< c;
	return 0;
}

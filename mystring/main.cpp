#include <iostream>
#include <string>
#include "he\a.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str1("Hello ");
	string str2 = "world!";
	string s;
	s = str1 + str2;
	cout << "The string: " << s << endl;
	cout << "Length of string = " << s.length() << endl;
	cout << "First charater: " << s[0] << endl;
	int lastPos = s.length() - 1;
	cout << "Last charater: " << s[lastPos] << endl << max(5,6);
	return 0;
}

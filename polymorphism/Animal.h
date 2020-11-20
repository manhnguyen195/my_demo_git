#ifndef _Animal_h
#define _Animal_h
#include <string>
#include <iostream>
using namespace std;
class Animal{
protected:
	string name;
public:
	Animal();
	Animal(string s);
	virtual void Sound();
	
};

class Dog: public Animal{
public:
	Dog(string s);
	void Sound();
};

class Cat: public Animal{
public:
	Cat(string s);
	void Sound();
};

#endif

#include <iostream>
#include "Animal.h"
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Animal a("A");
	a.Sound();
	Dog b("Bingo");
	b.Sound();
	Cat c("Kitty");
	c.Sound();
	
	vector<Animal> v;
	v.push_back(c);
	v.push_back(a);
	v.push_back(b);
	for(int i =0; i<v.size(); i++){
		Animal temp = v[i];
		temp.Sound();
	}
	
	Animal* t = new Cat("Tom");
	t -> Sound();
	t = &b;
	t -> Sound();
	
	vector<Animal*> vl;
	vl.push_back(&c);
	vl.push_back(&a);
	vl.push_back(&b);
	vl.push_back(t);
	for(int i =0; i<vl.size(); i++){
		Animal* temp = vl[i];
		temp->Sound();
	}
	
	return 0;
}

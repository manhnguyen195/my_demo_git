#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void write_number_to_file_read_it()
{
    ofstream outFile("data.dat", ios::binary);
    int i = 19;
    double d = 11.9;
    string j="nguyen van a";
    outFile.write((char*) &i,sizeof(i)); // char* position_of_i_in_memory = &i;
    outFile.write((char*) &j,sizeof(j));
    outFile.write((char*) &d,sizeof(d));
    outFile.close();
    
    int c; double h; string k;
    ifstream inFile("data.dat",ios::binary);
    inFile.read((char*) &c, sizeof(c));
    inFile.read((char*) &k, sizeof(k));
    inFile.read((char*) &h, sizeof(h));
    


    cout << c << " " << h << " " << k << endl;
    inFile.close();
}
int main()
{
    write_number_to_file_read_it();

    return 0;
}
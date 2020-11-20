#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void write_string_to_txt_file(){
    ofstream outFile("hello.txt",ios::out);
    if(!outFile){
        cout << "can not open" << endl;
    }
    outFile << "how are you" << endl;
    outFile.close();
}
void read_all_string_from_txt_file(){
    ifstream inFile("hello.txt");
    const int maxSize = 255;
    char buff[maxSize];
    while(inFile.getline(buff, maxSize)){
        cout << buff << endl;
    }
    inFile.close();
}
void wire_int_to_file_then_read_it()
{
    ofstream outFile("data.txt",ios::out);
    int i = 19;
    outFile << i;
    outFile.close();
    ifstream inFile("data.txt");
    int x;
    inFile >> x;
    cout << x << endl;
    inFile.close();

}
void input_vector_write_to_file_then_read_it(){
    vector<float> a;
    cout << "Input: ";
    cin  >> a;
    for(int i:a){
        cout << i << " ";
    }
}

int main(){
    //write_string_to_txt_file();
    //read_all_string_from_txt_file();
    //wire_int_to_file_then_read_it();
    input_vector_write_to_file_then_read_it();
    cout << "Done";
    return 0;
}
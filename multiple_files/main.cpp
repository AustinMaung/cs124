#include<iostream>
#include"complex.h"
using namespace std;

int main() {
    cout << "Hello World!"<<endl;
    Complex bob(2.3,3);
    cout << bob.real()<< bob.imag() <<endl;
    return 0; 
}
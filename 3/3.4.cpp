//hexoct2.cpp -- display values in hex and octal
#include <iostream>
int main(int argc, char const *argv[]) {
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal)\n";
    cout << hex;            //manipulator for changing number base
    cout << "waist = " << waist << " (hexadecimal)" << endl;
    cout << oct;            //mainpulator for changing number base
    cout << "inseam = " << inseam << " (octal)"<< endl;
    return 0;
}

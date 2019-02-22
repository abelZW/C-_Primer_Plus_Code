//hexoct.cpp -- shows hex and octal constants
#include <iostream>
int main(int argc, char const *argv[]) {
    using namespace std;
    int chest = 42;     //decimal integer constants
    int waist = 0x42;   //hexadeciaml integer constants
    int inseam = 042;   //octal integer constants

    cout << "monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << "\n";
    cout << "waist = " << waist << endl;
    cout << "inseam = " << inseam << endl;
    return 0;
}

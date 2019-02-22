//bondini.cpp -- using escape sequences
#include <iostream>
int main(int argc, char const *argv[]) {
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:______\b\b\b\b\b";//\b退格
    long code;
    cin >> code;
    cout << "\aYou enter " << code << "...\n";
    cout << "\aCode verified! Process with Plan z3!\n";
    return 0;
}

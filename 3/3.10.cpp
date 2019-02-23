//arith.cpp -- some C++ arithmetic
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    float hats,heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);//fixed-point
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}
//对于float类型表示有效数的能力有限；对于float，C++保证6位的有效位数



//assign.cpp -- type change on assignment
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     //int converted to float
    int guess = 3.9832; //float converted to int
    int debt = 7.2e12;  //result not defined int C++,超出了存储的范围
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    return 0;
}

//morechar.cpp -- the char type and int type contrasted
#include <iostream>
int main(int argc, char const *argv[]) {
    using namespace std;
    char ch = 'M';      //assign ASCII
    int i = ch;         //store same code in an int
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;        //change character code in c
    i = ch;             //save new character code in i
    cout << "The ASCII code for "<< ch << " is " << i << endl;
    //using the cout.put() member function to display a char
    cout << "Display char ch using cout.put(ch): ";
    cout.put(ch);
    cout << endl;
    return 0;

}

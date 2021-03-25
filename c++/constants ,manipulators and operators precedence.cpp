#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // constants in c++
    const int a = 3;
    // a=45;    it will throw an error

    // mainpulators
    // endl is also a manipulator
    int b = 9, c = 19, d = 1934;
    cout << "the value of b without setw is " << b << endl;
    cout << "the value of c without setw is " << c << endl;
    cout << "the value of d without setw is " << d << endl;
    cout << "the value of b is " << setw(4) << b << endl;
    cout << "the value of c is " << setw(4) << c << endl;
    cout << "the value of d is " << setw(4) << d << endl;
    // basically setw is set width

    // operators precedence

    return 0;
}
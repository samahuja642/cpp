// there are two types of header files
//1. system header files :it comes with the compiler.
#include <iostream>
// 2. user defined header files:it is written by the programmer
#include "this.h"
using namespace std;
int main()
{
    int a = 3, b = 2;
    cout << "operators in c++ :" << endl;
    cout << "following are the types of operators in c++" << endl;
    cout << "these are the airthematic operators";
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of a++ is " << a++ << endl;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of b-- is " << b-- << endl;
    cout << "the value of ++b is " << ++b << endl;
    cout << "assignment operators -->these are used to assign values to the variables" << endl;
    int r = 3;
    char z = 'a';
    cout << "comparison operators" << endl;
    cout << "the value of a==b is " << (a == b) << endl;
    cout << "the value of a!=b is " << (a != b) << endl;
    cout << "the value of a<b is " << (a < b) << endl;
    cout << "the value of a>b is " << (a > b) << endl;
    cout << "the value of a>=b is " << (a >= b) << endl;
    cout << "the value of a<=b is " << (a <= b) << endl;
    cout << "following are the logical operators in c++" << endl;
    cout << "the value of this logical and operator ((a==b)&&(a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "the value of this logical or operator ((a==b)||(a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "the value of this logical or operator ((a==b)||(a>b)) is:" << ((a == b) || (a > b)) << endl;
    cout << "the value of this logical or operator (!(a==b)) is:" << (!(a == b)) << endl;

    return 0;
}
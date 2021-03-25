#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setnum(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    // below lines means that this friend function can access all 
    // private parts of the class
    friend complex sumcomplex(complex x, complex y);
    void printcrap()
    {
        cout << "The number is " << a << "+ " << b<<"i"<<endl;
    }
};
complex sumcomplex(complex x, complex y)
{
    complex z;
    z.setnum((x.a + y.a), (x.b + y.b));
    return z;
}
int main()
{
    complex x, y;
    x.setnum(1, 4);
    x.printcrap();
    y.setnum(5, 6);
    y.printcrap();
    complex sum = sumcomplex(x, y);
    sum.printcrap();
    return 0;
}
// properties of friend functions
// 1.not in scope of class
// 2.since it is not in scope of the class ,it cannot be called from the object of the class.x.sumcomplex()==invalid
// 3.can be invoked without the help of any is object
// 4.usually contains the object arguments
// 5. can be declared inside public or private section of the class
// 6. it cannot access the members directly by their names and need objects name.member name to access any member

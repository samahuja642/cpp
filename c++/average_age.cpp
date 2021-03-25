#include <iostream>
using namespace std;
int main()
{
    int age;
    int agetotal = 1;
    int numberofpeopleentered = -1;
    while (age != -1)
    {
        cout << "enter the person's age  :";
        cin >> age;
        numberofpeopleentered++;
        agetotal += age;
    }
    cout << "\nnumber of people entered is " << numberofpeopleentered;
    cout << "\ntotal sum of age is " << agetotal;
    cout << "\naverage age is " << float(agetotal / numberofpeopleentered);
    return 0;
}
//tellg tells us the position of reading pointer
//tellp tells us the position of writing pointer
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ifstream fil("tell.txt");
    int pos=fil.tellg();
    cout<<pos<<endl;
    char ch;
    fil>>ch;
    cout<<ch<<endl;
    pos=fil.tellg();
    cout<<pos<<endl;
    // getch()  some uses getch() to hold the console screen which stays till user type a char from keyboard.
    fil.close();
    // for appending mode end of the file position is 0
    ofstream ofil;
    ofil.open("tell.txt",ios::app);
    int position=ofil.tellp();
    cout<<position<<endl;
    ofil<<"time is always running but be aware you are not time you need rest.";
    position=ofil.tellp();
    cout<<position<<endl;
    ofil.close();
    return 0;
}
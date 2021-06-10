//locators
// ios_base::beg 
// ios_base::curr
// ios_base::end
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ifstream file;
    file.open("seek.txt");
    cout<<file.tellg()<<endl;
    cout<<(char)file.get();
    cout<<(char)file.get();
    cout<<file.tellg()<<endl;
    file.seekg(0);
    cout<<file.tellg()<<endl;
    cout<<(char)file.get();
    file.seekg(6);
    file.seekg(2,ios_base::cur);
    cout<<file.tellg()<<endl;
    cout<<(char)file.get();
    file.seekg(-4,ios_base::end);
    cout<<file.tellg()<<endl;
    cout<<(char)file.get();
    file.close();
    // seekp is used for ofstream all things will be same as seekg
    ofstream outfile;
    outfile.open("seek.txt",ios::ate|ios::app);
    outfile.tellp();
    outfile.seekp(2,ios_base::beg);
    outfile<<"\nstop killing time otherwise time will kill you."<<endl;
    outfile.tellp();
    outfile.close();
    return 0;
}
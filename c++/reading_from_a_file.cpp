#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    ifstream infile;
    infile.open("text2.txt");
    if(infile.fail()){
        cerr<<"error in opening file";
        exit(1);//terminates the program here only
    }
    // int x,y;
    // infile>>x>>y;
    // cout<<"num1: "<<x<<endl<<"num2: "<<y<<endl;
    // another way can be
    string item;
    int count=0;
    while(!infile.eof()){
        infile>>item;
        count++;
    }
    cout<<count<<" items found "<<endl;
    cout<<item;
    return 0;
}
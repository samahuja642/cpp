#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string myText;
    // create and write
    ofstream mytext("text.txt",ios::app);
    mytext << "that's what it is?";
    mytext.close();
    // reading a file
    ifstream myfile("text.txt");
    while (getline(myfile, myText))
    {
        cout << myText;
    }
    myfile.close();
    // read and write
    fstream file("text.txt");
    file<<"here is sam!";
    file.close();
    return 0;
}
// ios::app	opens a text file for appending. (appending means to add text at the end).
// ios::ate	opens a file for output and move the read/write control to the end of the file.
// ios::in	opens a text file for reading.
// ios::out	opens a text file for writing.
// ios::trunc	truncates the content before opening a file, if file exists.
// ios::binary binary file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    //syntax is to open the file
    ofstream file;
    file.open("sample.txt");
    file.close();
    //ios:: out and in both read and write can be done
    fstream note;
    // note.open("sample.txt",ios::out|ios::in);
    note.open("sample.txt",ios::app);
    char text[100];
    cin.getline(text,sizeof(text));
    note<<text<<endl;
    note>>text;//reading from file
    cout<<text<<endl;
    note.close();
    return 0;
}
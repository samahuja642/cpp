#include<iostream>
using namespace std;
void printarray(int array[],int size);
int main()
{
    int bucky[3]={20,54,675};
    printarray(bucky,3);
    return 0;
}
void printarray(int array[],int size){
    for(int x=0;x<size;x++){
        cout<<array[x]<<endl;
    }
}
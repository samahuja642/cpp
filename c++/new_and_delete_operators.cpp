#include<iostream>
using namespace std;
int main()
{
    int *ptr=NULL;
    // ptr=new int;//declaring using new operator.
    ptr=new int(23);//intialising using new operator.
    // nothrow is used when there is memory leak in dynamic allocation then 
    // rather than giving error it will return null value.
    int *p=new(nothrow) int;
    if(!p){
        cout<<"memory is not allocated"<<endl;
    }
    else{
        cout<<"memory is allocated"<<endl;
    }
    int * arrp=new int[5]{1,2,3,4,5};//intialising array using new.
    delete[] arrp;
    delete ptr,p;
    return 0;
}
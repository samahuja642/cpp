#include<iostream>
using namespace std;
// using templates
template<typename T>//you can also use class rather than typename doesn't matter works same.
int search(T arr[],int n,T key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int arr[]={1,2,3,4,5};
    int key=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"index of searched element is "<<search(arr,n,key)<<endl;
    return 0;
}
// using generic approach
// int linear_search(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie();
//     cout.tie();
//     int arr[]={1,2,3,4,5};
//     int key=6;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"index of searched element is "<<linear_search(arr,n,key)<<endl;
//     return 0;
// }
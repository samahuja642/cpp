#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[]="geeks for geeks what is this ";
    // char *token=strtok(str," ");
    // while(token!=NULL){
    //     cout<<token<<endl;
    //     token=strtok(NULL," ");//basically this function retain some memory and save the string so we need not to pass string again that tells compiler that i want to make token in this string only
    // }
    char *token;
    char *rest = str;
    while ((token = strtok_r(rest, " ", &rest)))
        printf("%s\n", token);
    return 0;
}
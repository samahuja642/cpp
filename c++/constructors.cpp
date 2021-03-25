#include <iostream>
#include <string>
using namespace std;
class samarthclass
{
public:
samarthclass(string z){
    setname(z);
}
    samarthclass(){
        cout<<"this line will printed automagically\n";
    }
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }
private:
    string name;

};
int main()
{
    samarthclass sb("that's my first object\n");
    // sb.setname("samarth ahuja");
    cout<<sb.getname()<<endl;
    samarthclass sb2("that's my second object\n");
    // sb2.setname("jojo");
    cout<<sb2.getname();
    samarthclass sb3;
    
    return 0;
}
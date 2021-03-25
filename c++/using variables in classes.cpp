#include <iostream>
#include <string>
using namespace std;
class samarthclass
{
    // public:
    // using public variable is not appreciated in programming world
public:
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
    samarthclass sb;
    sb.setname("samarth ahuja is now working on coding");
    cout<<sb.getname();
    return 0;
}
#include<iostream>
using namespace std;
class Demo
{
    public:
        int x;
        int y;
    Demo()
    {
        cout<<"Inside Constructor..\n";
        x=0;
        y=0;
    }
    void print()
    {
        cout<<"x :"<<x<<"\n";
        cout<<"y :"<<y<<"\n";
    }
    ~Demo()
    {
        cout<<"Destructor's work completed..\n";
    }

};

int main()
{
    Demo dobj;
    dobj.print();
    return 0;
}

/*

ouptup:

Inside Constructor..
x :0
y :0
Destructor's work completed..


*/



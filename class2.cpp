#include<iostream>
using namespace std;
class demo
{
    int data;
    public :
    void input(int a);
    int output();};
   void demo::input(int a)  //write this outside class body
    {
        data=a;
    }
    int demo::output()
    {
        return data;
    }


int main()
{   demo obj1,obj2;
    int a;
    cout<<"enter a number ";
    cin>>a;
    obj1.input(a);
    cout<<obj1.output();
   
    return 0;
}
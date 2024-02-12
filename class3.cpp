#include<iostream>
using namespace std;
class demo
{    int data;
     void get();
     int print();
  public :
     void input();
     void output();};
     void demo::get(){
     cout<<"enter value of data";
     cin>>data;}
     int  demo::print()
       {return data;}
       void demo::input()
       {get() ;}
       void demo::output()
       {cout<<"the printed number :";
        print();}
       int main()
       {
        demo obj1,obj2;
        
        obj1.input();
        
        obj1.output();
        return 0;

       }



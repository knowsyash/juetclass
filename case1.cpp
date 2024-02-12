#include<iostream>
using namespace std;
class demo{
    private :
      int a;
      public :
    void input();
    void output();
};
void demo::input()
 {cin>>a;}
 void demo::output()
 {
    cout<<a;
 }
 int main()
 {
    demo e1;
    e1.input();
    e1.output();
 }
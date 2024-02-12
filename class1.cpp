#include <iostream>
using namespace std;
class area
{private :int lenth;
          int breadth;
public :
   void setlenth(int l);
   void setbreadth(int b);
   int getarea();};
  void area::setlenth(int l)
   { lenth=l;} 
  void area::setbreadth(int b)
   { 
   breadth=b;}
  int area::getarea()
   { return lenth*breadth;
   }
   int main()
   { area ar;
    ar.setlenth(4);
    ar.setbreadth(7);
    int aim=ar.getarea();
    cout<<"Area :"<<aim<<endl;
    return 0;
   }
  

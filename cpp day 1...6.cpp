#include <iostream>

using namespace std;
class Area
{ public:
 double length,breadth;

 void setDim( double l,double b)
 {
   length=l;
   breadth=b;
 }
 int getArea()
 {
     return length*breadth;
 }

};

int main()
{  Area A;

     A.setDim(2,3);




    cout << "Area of Rectangle:" <<A.getArea()<<endl;
    return 0;
}

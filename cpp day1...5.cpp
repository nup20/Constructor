#include <iostream>

using namespace std;
class Rectangle
{
public:
    double length,breadth;

   setdata(double l,double b )
   { length=l;
     breadth=b;
     }
     int area()
     {
         return length*breadth;
     }

    
};
int main()
{
    Rectangle R1,R2;
    R1.setdata(4,5);
    R2.setdata(5,8);


    cout<<"Area of Rectangel 1:"<<R1.area()<<endl;
    cout<<"Area of Rectangle 2:"<<R2.area()<<endl;
        return 0;
}

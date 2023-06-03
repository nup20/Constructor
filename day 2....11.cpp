#include <iostream>

using namespace std;
class Area
{ public:
 double length,breadth,Area;

 setDim( double l,double b)
 {
   length=l;
   breadth=b;
 }
 int returnArea()
 {
     Area=length*breadth;
     return Area;
 }

};

int main()
{ float l,b;
 Area A;
cout << "Length:"<<endl;
cin>>l;
cout << "Breadth:"<<endl;
cin>>b;
     A.setDim(l,b);




    cout << "Area of Rectangle:" <<A.returnArea()<<endl;
    return 0;
}

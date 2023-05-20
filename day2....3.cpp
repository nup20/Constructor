#include <iostream>

using namespace std;
class Rectangle
{public:
  double L,B,Area;

  Rectangle()
  { L=0;
    B=0;
     cout << "Area" << L*B<<endl;

  }
  Rectangle(int l,int b)
  {
      L=l;
      B=b;
      cout << "Area" <<L*B<< endl;
  }
  Rectangle(int H)
  {

    cout << "Area:" <<H<<endl;
  }
  void area()
  {
      Area=L*B;
  }
};

int main()
{
    int l=5,b=7,H;
    H=l*b;
    Rectangle R1,R2(5,7),R3(H);






    return 0;
}

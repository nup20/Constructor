#include <iostream>

using namespace std;
class Addamount
{ public:
  double  amount=50,addd,rs;
  Addamount()
  {
       cout << "In Piggi Bank" << endl;
      cout<<"Initial amount:$"<<amount<<endl;

  }
  Addamount(double a)
  {
       rs=a;
       addd=amount+rs;


      }
  int bank()
  {
return addd;
  }
};
int main()
{
    double a;
    Addamount A1;

    cout<<"Enter the Amount:"<<endl;
    cin>>a;
    Addamount A2(a);
     cout<<"Total Amount:&"<<A2.bank()<<endl;
return 0;
}

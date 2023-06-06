#include <iostream>

using namespace std;
class Degree
{ public:

    void getDegree()
    {
        cout<<"I got a degree"<<endl;
    }
};
class Undergraduate
{ public:
    void shop()
    {
        cout<<"I am an Undergraduate"<<endl;
        cout<<"I am a Postgraduate" <<endl;
    }
};
class Postgraduate
{ public:
    void shop()
    {
        cout<<"I am an Undergraduate"<<endl;
        cout<<"I am a Postgraduate" <<endl;
    }

};
int main()
{  Degree D;
Undergraduate U;
Postgraduate P;

D.getDegree();
U.shop();
P.shop();

    return 0;
}

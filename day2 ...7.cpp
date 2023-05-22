#include <iostream>

using namespace std;
class Number
{   public:
    int a,a1;
    char b,b1;

    void print(int n,char c)
    {
         a=n;
         b=c;
         cout<<a<<","<<b<<endl;

    }
    void print(char c,int n)
    {    a1=n;
         b1=c;
         cout<<a1<<","<<b1<<endl;


    }
};
int main()
{ Number N;
N.print(2,'A');
N.print(4,'B');


    return 0;
}

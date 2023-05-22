#include <iostream>

using namespace std;
class Shape
{
    public:
    double Length,Breadth,side;

    void area(double l,double b)
    {Length=l;
    Breadth=b;
        cout << "Area of Rectangle=" <<Length*Breadth<< endl;
    }
     void area(double s)
    {
        side=s;
        cout << "Area of Square=" <<side*side<<endl;
    }

};
int main()
{
    Shape S;
    S.area(5,10);
    S.area(5);
    return 0;
}

#include <iostream>

using namespace std;
class Student
{
public:
double age;
string name,address;
Student()
{
    name="Unknown";
    age=0;
    address="not Available";
}
void setinfo(string a,double b)
{
    name=a;
    age=b;
    cout<<"Name:"<<a<<endl;
    cout<<"age:"<<b<<endl;
}
void setinfo(string a,double b,string c)
{
     name=a;
    age=b;
    address=c;
    cout<<"Name:"<<a<<endl;
    cout<<"age:"<<b<<endl;
    cout<<"address:"<<c<<endl;
}

};
int main()
{int n;
string a,c;
double b;

cout<<"Enter the  no of student:"<<endl;
cin>>n;
Student S[n];
for(int i=0;i<n;i++)
{  cout<<"student :"<<i+1<<endl;
    cout<<"Enter student name:"<<endl;
    cin>>a;
    cout<<"Enter student age:"<<endl;
    cin>>b;
    cout<<"  "<<endl;
    S[i].setinfo(a,b);


}


for(int i=0;i<n;i++)
{   cout<<"student :"<<i+1<<endl;
    cout<<"Enter student name:"<<endl;
    cin>>a;
    cout<<"Enter student age:"<<endl;
    cin>>b;
     cout<<"Enter student address:"<<endl;
    cin>>c;
    S[i].setinfo(a,b,c);


}




    return 0;
}

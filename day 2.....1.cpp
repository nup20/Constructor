#include <iostream>


using namespace std;

class Student
{
public:
    string name,ss;

    

    Student()
    {
        name="unknown";
        cout<<" Name :"<< name<<endl;

    }

    Student(string a)
    {
         ss=a;
         cout<<"Enter Name :"<<ss<<endl;
    }


};
int main()
{
string a;

     Student S,s1("sam");

     return 0;
}

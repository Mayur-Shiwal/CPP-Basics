#include<iostream>
using namespace std;

class Student
{
    public:
    int rlno;
    static int count;

    Student()
    {
        count++;
        rlno=count;
    }
    void display()
    {
        cout<<"Roll no. is: "<<rlno<<endl;
        cout<<"Total number of student: "<<count<<endl;
    }
};

int Student::count;

int main()
{
    Student s1,s2,s3;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
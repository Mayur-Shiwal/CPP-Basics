#include<iostream>
using namespace std;

class Student
{
    private:
    int rlno;
    static int count;
    public:
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
    static void show()
    {
        // static member function cannot access the nonstatic members.
        // static member function can be called using class name.
        cout<<"Total number of student: "<<count<<endl;  
    }
};

int Student::count;

int main()
{
    Student s1,s2,s3;
    
    Student::show();
    return 0;
}


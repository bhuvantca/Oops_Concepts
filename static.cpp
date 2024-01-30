/* Static: Static is a keyword or modifier that belongs to the type instead of objects.
So instance is not required to access the static members.

Static can be field, method, class, constructor, class.

Adv:  We donot need to create a instance for accessing the static members,
So it saves memory.
Also it belongs to the type, so it will not get memory each time when instance is created.

There is only one copy of static field created in the memory.
It is shared to all the objects.

It is used to refer the common property of all objects. */


/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class employee
{
    public:
    static int objectCount;
    string empName;
    employee(string name)
    {
     empName = name;
     objectCount++;
    }
    
    void PrintEmployeeName()
    {
        cout<<"Emp Name: "<<empName<<endl;
    }
    
    static void PrintCount()
    {
        cout<<"Count: "<<objectCount<<endl;
    }
};
int employee::objectCount = 0;
int main()
{
   employee emp("Agil");
   emp.PrintEmployeeName();
    employee::PrintCount();
   employee emp1("mugil");
   emp1.PrintEmployeeName();
    employee::PrintCount();
   employee emp2("pugal");
   emp2.PrintEmployeeName();
   employee::PrintCount();
    return 0;
}




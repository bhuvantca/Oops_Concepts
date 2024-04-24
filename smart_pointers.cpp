#include<iostream>
#include<memory>
using namespace std;

class MyClass
{
    private:
    
    public:
    MyClass()
    {
        cout<<"Constructor"<<endl;
    }
    ~MyClass()
    {
        cout<<"destructor"<<endl;
    }
};

int main()
{
    
    weak_ptr<int> wePtr1;
    {
        shared_ptr<int> shptr1 = make_shared<int>(25);
        wePtr1 = shptr1;
    }
    
    /*{
    unique_ptr<MyClass> unptr1 = make_unique<MyClass>();
    }
    cout<<"End"<<endl;
    
    
    shared_ptr<MyClass> shptr1 = make_shared<MyClass>();
    {
    cout<<"Count: "<<shptr1.use_count() <<endl;
    shared_ptr<MyClass> shptr2 = shptr1;
    cout<<"Count: "<< shptr1.use_count()<<endl;
    }
        cout<<"Count: "<< shptr1.use_count()<<endl;*/

    /*unique_ptr<int> unptr1 = make_unique<int>(5);
    cout<<*unptr1<<endl;
    
    unique_ptr<int> unptr2 = move(unptr1);
    cout<<*unptr2<<endl;
    cout<<*unptr1<<endl;*/

    return 0;
}

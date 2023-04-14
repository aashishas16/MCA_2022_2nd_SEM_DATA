#include<iostream>

using namespace std;

class A
{
   public:

  
   void fun()
    {
        cout<<"called fun";

    }
      ~A()
    {
        cout<<"called";

    }
};
// class B:public A{

// public:
// void get()
// {
//     name = 100;
//     age=10000;
// }
//     void fun1()
//     {
// cout<<name;
//     }
// };


int main()
{
    
        // A obj2;
        A *obj = new A();
        obj->fun();
        delete(obj);

}
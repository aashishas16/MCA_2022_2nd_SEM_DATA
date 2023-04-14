#include<iostream>

using namespace std;

class A
{
    private :
    int age;
    public: virtual void fun()
    {
        cout<<"parent";
    }
    int name;
};
class B:public A{

public:
void get()
{
    name = 100;
}
    void fun()
    {
        cout<<"base";
    }
};

void check(A *a)
{
    a->fun();
}
int main()
{
    A *obj;
B ob1;
obj = &ob1;
check(obj);
check(&ob1);


}
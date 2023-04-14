#include<iostream>
#include<ctime>
using namespace std;
{
class prompt{
private:
int count;
clock_t start,end;
public:
prompt(string s)
{
cout<<s;
cin>>count;
start=clock();
}
~prompt()
{
    for(int i=0;i<count;i++)
    {
        cout<<"ring a bell"<<endl;
    }
    end=clock();
    cout<<"time"<<end-start;
}
};
int main()
{
    prompt obj("enter the number")
}
return 0;
}
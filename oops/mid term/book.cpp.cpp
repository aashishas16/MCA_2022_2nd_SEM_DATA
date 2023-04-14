#include<iostream>
#include<string.h>
using namespace std;

class book
{
private:
    string book_id;
    string book_name;
    string book_author;
    int isbn;
    string dop;
    public:
    void set_data()
    {
        cout<<"Enter Book ID"<<endl;   
        cin>>this->book_id;
        cout<<"Enter Book name"<<endl;      
        cin>>this->book_name;
        cout<<"Enter Book Author"<<endl;
        cin>>this->book_author;
        cout<<"Enter ISBN"<<endl;
        cin>>std::ws;
        cin>>this->isbn;
        cout<<"Enter Date of Publication"<<endl;
        cin>>std::ws;
        cin>>this->dop;
    }
    void show_data(){
        cout<<"Book ID is "<<this->book_id<<endl;
        cout<<"Book Name is "<<this->book_name<<endl;
        cout<<"Book Author is "<<this->book_author<<endl;
        cout<<"Book ISBN is "<<this->isbn<<endl;
        cout<<"Book Date of Publish is "<<this->dop<<endl;
    }
};

int main(){

book b1;

b1.set_data();
b1.show_data();
return 0;
}

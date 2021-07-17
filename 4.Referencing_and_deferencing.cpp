#include<iostream>
using namespace std;
int main()
{
    int a;
    int *b;
    int c;
    a=5;    
    b=&a;   //&a implies address of a
    c=*b;   //*b implies value pointed by b
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
    return 0;
}

    
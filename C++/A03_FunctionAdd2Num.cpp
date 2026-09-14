#include<iostream>
using namespace std;
void add(int,int);
int main()
{
    int a,b;
    cout<<"Enter value of a and b:\n";
    cin>>a>>b;
    add(a,b);
}
void add(int a,int b)
{
    cout<<"Addition="<<a+b;
}
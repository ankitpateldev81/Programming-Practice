/* FUNCTION OVERLOADING- Multiple function withe same name but different parameters. */
/*Find area of sq and rect*/

#include<iostream>
using namespace std;
void area(int,int);
void area(int);
int main()
{
    int l,b,s;
    cout<<"Enter value of length and breadth of rectangle:\n";
    cin>>l>>b;
    cout<<"Enter value of side of square:\n";
    cin>>s;
    area(l,b);
    area(s);
}
void area(int len,int bre)
{
    cout<<"Area of rectangle "<<len<<"*"<<bre<<" ="<<len*bre<<endl;
}
void area(int sq)
{
    cout<<"Area of square "<<sq<<"*"<<sq<<" ="<<sq*sq;
}
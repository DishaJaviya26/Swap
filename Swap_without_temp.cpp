//C++ program to swap two variable without using temporary variable.

#include<iostream.h>
#include<conio.h>

int main()
{
    int a,b;
    clrscr();

    //get two values from users
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    cout<<endl<<"Original values are: "<<endl;
    cout<<"a="<<a<<"  b="<<b<<endl;

    //Swap the values of a and b
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<endl<<"The values after swap are: "<<endl;
    cout<<"a="<<a<<"  b="<<b;
    getch();
    return 0;
}
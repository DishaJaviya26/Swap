//C++ program to swap two variable given by user.

#include<iostream.h>
#include<conio.h>

int main()
{
    int a,b,c;
    clrscr();

    //get two values from users
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    cout<<endl<<"Original values are: "<<endl;
    cout<<"a="<<a<<"  b="<<b<<endl;

    //Swap the values of a and b
    c=a;
    a=b;
    b=c;

    cout<<endl<<"The values after swap are: "<<endl;
    cout<<"a="<<a<<"  b="<<b;
    getch();
    return 0;
}


//C++ program to swap two values using pointer variable.

#include<iostream.h>
#include<conio.h>

//swap function 
void swap(int *p, int *q)
{
    //temporary variable
    int t;
    
    //swap the two values
    t=*p;
    *p=*q;
    *q=t;
}

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

    //Swap function call
    swap(&a,&b);

    cout<<endl<<"The values after swap are: "<<endl;
    cout<<"a="<<a<<"  b="<<b;
    getch();
    return 0;
}

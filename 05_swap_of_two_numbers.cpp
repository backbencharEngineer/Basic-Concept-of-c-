#include<iostream>

using namespace std;

int main ()
{

    int a=2;
    int b=1;

    cout <<" Before swapping a= " << a << ",b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "after swapping a = " << a << ",b = " <<b << endl;


    return 0 ;

}
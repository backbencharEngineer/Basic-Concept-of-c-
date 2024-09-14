#include<iostream>

using namespace std;

int addTwonumber(int A, int B)

{
    return A+B; 
    }

int main()
{
    int A,B;

    cout << "Enter the first number: ";
    cin >> A;

    cout << " Enter the second nuymber: ";
    cin >> B;


    cout << "sum = " << addTwonumber(A,B);
     return 0;
}
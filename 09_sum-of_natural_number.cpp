#include<iostream>

using namespace std;

int findSum(int n) 
{
    return n *(n +1)/2;

}
int main ()
{

    int n = 100;
    cout <<findSum(n);
    return 0;
}

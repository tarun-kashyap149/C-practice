#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &ref1= x;
    int &ref2= ref1;
    ref2++;
    cout<<x;
    return 0;
}
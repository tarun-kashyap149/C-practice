#include<iostream>
using namespace std;
int sum(int a, int b);
int main(){
    int x=5, y=3,z;
    z=sum(x,y);
    cout<<"Sum:"<<z;
    return 0;
}
int sum(int a, int b){
    return a+b;
}
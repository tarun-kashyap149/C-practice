#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a= b;
    b= temp;
}
int main(){
    int x=0, y=1;
    swap(x,y);
    cout<<x<<" and "<<y;
}
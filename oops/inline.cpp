#include<iostream>
using namespace std;
inline int cube(int x){
    return x*x*x;
}
int main(){
    cout<<"Calculate Cube of a number :-"<<endl;
    cout<<"Enter a number:";
    int a;
    cin>>a;
    int cu = cube(a);
    cout<<"Cube of "<<a<<" is :"<<cu;
    return 0;
}
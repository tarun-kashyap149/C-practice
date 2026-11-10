#include<iostream>
using namespace std;
int add(int a, int b);
int main(){
    int x=12, y=10;
    int sum= add(x,y);
    cout<<sum;
    return 0;

}
int add(int a, int b){
    return a+b;
}
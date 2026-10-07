#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}
float add(float a, int b){
    return a+b;
}
float add(int a, float b){
    return a+b;
}
int main(){
    cout<<"calculate sum of two variables with function overloading:-"<<endl;
   
    float sum= add(5,5.5f);
    float sum1= add(3.2f,2.2f);
    int sum2= add(5,5);

    cout<<"Sum of int and float = "<<sum<<endl<<"Sum of float and float ="<<sum1<<endl<<"Sum of int and int ="<<sum2;
    return 0;
}


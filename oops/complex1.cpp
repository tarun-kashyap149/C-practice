#include<iostream>
using namespace std;
class complex1{
    public :
    int real;
    int imagi;
    void enter_data(){
        cout<<"Enter real value:";
        cin>>real;
        cout<<"Enter imaginary value:";
        cin>>imagi;
        
    }
    void display_data(){
        cout<<"Complex number: ";
        cout<<real<<" + i"<<imagi;
    }

};
int main(){
    complex1 C1;
    C1.enter_data();
    C1.display_data();

    return 0;
}
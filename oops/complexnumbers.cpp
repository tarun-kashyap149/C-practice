#include<iostream>
using namespace std;
class complex_no{
    public:
    int real;
    int imagi;
    void enter_numbers(){
        cout<<"Enter real number:";
        cin>>real;
        cout<<"Enter imaginary number:";
        cin>>imagi;
        cout<<endl;
    }
    void display(){
        cout<<"Complex number: "<<real<<"+ i"<<imagi;

    }
    complex_no add(complex_no c){
        complex_no temp;
        temp.real = real+c.real;
        temp.imagi=imagi+c.imagi;
        return temp;
    }
};
int main(){
    complex_no Z1,Z2,Z3;
    cout<<"Enter Z1 details:"<<endl;
    Z1.enter_numbers();
    cout<<"Enter Z2 details:"<<endl;
    Z2.enter_numbers();
   Z3= Z1.add(Z2);
    Z3.display();




   
    return 0;
}

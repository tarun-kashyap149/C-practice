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
complex_no nonmember( complex_no Z1, complex_no Z2){
    complex_no temp;
    temp.real = Z1.real + Z2.real;
    temp.imagi= Z1.imagi + Z2.imagi;
    return temp;
}

int main(){
    complex_no Z1,Z2,Z3;
    cout<<"Enter Z1 details:"<<endl;
    Z1.enter_numbers();
    cout<<"Enter Z2 details:"<<endl;
    Z2.enter_numbers();
   Z3= Z1.add(Z2);
   cout<<"Member function:"<<endl;
   Z3.display();
   cout<<endl;
   
    Z3 = nonmember(Z1, Z2);
    cout<<" Non Member function call:"<<endl;
    Z3.display();





   
    return 0;
}

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
        cout<<"Complex number: "<<real<<"+ i"<<imagi<<endl;

    }
   void addComplex(complex_no c1, complex_no c2){
  real = c1.real + c2.real;
  imagi = c1.imagi + c2.imagi;
}
};



int main(){
    complex_no Z1,Z2,Z3;
    cout<<"Enter Z1 details:"<<endl;
    Z1.enter_numbers();
    cout<<"Enter Z2 details:"<<endl;
    Z2.enter_numbers();
   Z3.addComplex(Z1,Z2);
   cout<<"Sum of Z1 and Z2:";
   Z3.display();
  
   
  





   
    return 0;
}
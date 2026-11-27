#include<iostream>
using namespace std;

class Number{
    private:
        int x;
    public:
        Number(){
            x = 0;
        }
        Number(int a){
            x = a;
        }
  
        void operator ++ (){
            x = x + 1;
        }
        void display(){
            cout<<"Value = "<<x<<endl;
        }

        friend Number operator - (Number, Number);
};


Number operator - (Number n1, Number n2){
    Number temp;
    temp.x = n1.x - n2.x;
    return temp;
}

int main(){
    Number n1(10), n2(4), n3;
    
    cout<<"Before ++ : ";
    n1.display();
    
    ++n1; 
    cout<<"After ++ : ";
    n1.display();
    
    n3 = n1 - n2; 
    cout<<"Subtraction (n1 - n2) : ";
    n3.display();
    
    return 0;
}
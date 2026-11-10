#include<iostream>
using namespace std;

class sum{
   private:
    int a;
   public: // 1. Public me karo
     sum(int x){
        a=x;
     }
     sum(){
        a=6;
     }
     // Sahi tarika - Ek object lega, ek naya bana ke return karega
     sum add(sum p){
         sum temp; // andar naya object
         temp.a = a + p.a; // this->a + p.a
         return temp; // pura object return
     }
     void display(){
        cout<<"Result: "<<a<<endl;
     }
};

int main(){
    sum s1(5), s2; // s1.a=5, s2.a=6 (default)
    
    sum s3;
    s3 = s1.add(s2); // 2. Object se call karo -> 5+6 = 11
    
    s3.display(); // Output: 11

    return 0;
}
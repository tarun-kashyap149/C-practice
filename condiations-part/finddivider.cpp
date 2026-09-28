#include<iostream>
using namespace std;
int main(){
    cout<<"Find which number can divide your given number."<<endl<<"Enter number:";
    int n;
    int found=0;
    cin>>n;
    for(int i=0; i<=n;i++){
        if(n%i==0 && found==0){
            cout<<i;
            found =1;
        
    }
    
    }
    return 0;
}
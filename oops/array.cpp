#include<iostream>
using namespace std;
int main(){
    cout<<"Program to find Max and min element of a array:-"<<endl;
    int n;
    cout<<"Enter number of Element:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int min=arr[0];
    int max=arr[0];
    for(int i =1; i<n; i++){
        if(min > arr[i]){
            min=arr[i];
        }
       if(max< arr[i]){
            max=arr[i];
        }
    };
    cout<<"max: "<<max<<endl<<"min: "<<min;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter number of elements:";
    int n;
    cin>>n;
    cout<<"Enter elements:"<<endl;
    vector<int> arr(n); 
    for(int i=0; i<n; i++){
        cout<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Arre before sorting:";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j <n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }

        }
    }
    cout<<"Sorted list:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    return 0;
}



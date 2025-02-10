#include<iostream>
using namespace std;
int main(){

    // int marks[6]={90,30,32,85,34,97};
    
    // n = number of students  n=7
    int n;
    cout<<"enter no of students : ";
    cin>>n;
    int arr[n];

    cout<<"taking inputs : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    //output
    cout<<"outputs : ";
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35) cout<<i<<endl;
    }

}
#include<iostream>
using namespace std;
int main(){

    int arr[8]={9,100,1,2,102,4,5,6};

    int max = 0;
    for(int i=0;i<=7;i++){
        if(arr[i]>max)  max=arr[i];
    }

    cout<<max;

    
}
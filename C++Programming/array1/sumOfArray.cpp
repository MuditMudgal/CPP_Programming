#include<iostream>
using namespace std;
int main(){

    int arr[6] = {1,4,3,2,5,6};

    int sum=0;
    for(int i=0;i<=5;i++){
        sum=sum+arr[i];
    }

    cout<<sum<<endl;



}
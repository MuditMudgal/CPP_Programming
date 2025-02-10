#include<iostream>
using namespace std;
int main(){

    int arr[5]={1,1,3,1,5};
    int x;
    cin>>x;

    bool flag = 0;

    for(int i=0;i<=4;i++){
        if(arr[i]==x)  flag=1;
    }

    if(flag==1)  cout<<"present";
    else cout<<"absent";






    // int arr[5]={9,0,8,1,3};
    // int x;
    // cin>>x;

    // for(int i=0;i<=4;i++){
    //     if(arr[i]==x)
    //         cout<<i;
    // }
}
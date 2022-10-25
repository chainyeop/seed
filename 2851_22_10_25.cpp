#include<iostream>
using namespace std;
int main(){
    int num,arr[11]={0},sum[11]={0},ans=101,a;
    for(int i=1;i<=10;i++){
        cin>>num;
        sum[i]=sum[i-1]+num;
    }
    for(int i=1;i<=10;i++){
        if(sum[i]-100>=0)
            arr[i]=sum[i]-100;
        else
            arr[i]=(sum[i]-100)*-1;
        if(arr[i]<=ans){
            ans=arr[i];
            a=i;
        }
    }
    cout<<sum[a];
}
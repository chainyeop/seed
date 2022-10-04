#include<iostream>
#include<algorithm>
using namespace std;

int dp[1001]={0};
int arr[1001]={0};

int main(){
    int N,num;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>num;
        arr[i]=num;
    }
    dp[1]=arr[1];
    for(int i=2;i<=N;i++){
        int sum=0;
        dp[i]=arr[i];
        for(int j=1;j<i;j++){
            if(arr[i]>arr[j]){
                sum+=arr[j];
                dp[i]=max(dp[i],sum+arr[i]);
            }
        }
    }
    for(int i=1;i<=N;i++){
        cout<<dp[i]<<" ";
    }
    sort(dp,dp+1+N);
    cout<<dp[N]<<"\n";
    for(int i=1;i<=N;i++){
        cout<<dp[i]<<" ";
    }
}
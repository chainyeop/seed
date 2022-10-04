#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int P,N,num,arr[1000]={0};
    cin>>P>>N;
    for(int i=0;i<N;i++){
        cin>>num;
        arr[i]=num;
    }
    sort(arr,arr+N);
    int cnt=0,check=0; 
    for(int i=0;i<N;i++){
        if(P<200){
            P+=arr[i];
            cnt++;
        }
        else{
            check=1;
            cout<<cnt;
            break;
        }
    }
    if(check==0)
        cout<<cnt;
}
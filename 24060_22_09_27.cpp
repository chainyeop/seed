// #include<iostream>
// using namespace std;

// int cnt=0,K;

// void merge(int *arr,int p,int q,int r){
//     int i=p,j=q+1,t=1;
//     int tmp[50001]={0};
//     while(i<=q && j<=r){
//         if(arr[i]<=arr[j]) tmp[t++]=arr[i++];
//         else tmp[t++]=arr[j++];
//     }
//     while(i<=q){
//         tmp[t++]=arr[i++];
//     }
//     while(j<=r){
//         tmp[t++]=arr[j++];
//     }
//     i=p,t=1;
//     while(i<=r){
//         cnt++;
//         cout<<"i"<<i<<" "<<"r"<<r<<"\n";
//         cout<<"arr"<<" "<<arr[i]<<" "<<"tmp"<<tmp[t]<<"\n";
//         arr[i++]=tmp[t++];
//         cout<<"cnt"<<" "<<cnt<<" "<<"K"<<K<<"\n";
//         if(cnt==K){
//             cout<<"ans"<<arr[i-1]<<"\n";
//             exit(0);
//         }
//         for(int j=0;j<5;j++){
//             cout<<arr[j]<<" ";
//         } 
//         cout<<"\n";
//     }
// }

// void merge_sort(int *arr,int p,int r){
//     if(p<r){
//         int q=(p+r)/2;
//         merge_sort(arr,p,q);
//         merge_sort(arr,q+1,r);
//         merge(arr,p,q,r);
//     }
// }

// int main(){
//     // ios::sync_with_stdio(false);
//     // cin.tie(NULL);
//     // cout.tie(NULL);
//     int arr[50001]={0},num,N;
//     cin>>N>>K;
//     for(int i=0;i<N;i++){
//         cin>>num;
//         arr[i]=num;
//     }
//     merge_sort(arr,0,N-1);
//     cout<<"cnt : "<<cnt<<"\n";
//     if(cnt<K) cout<<"-1";
// }

#include<iostream>
using namespace std;

int cnt=0,K;

void merge(int *arr,int p,int q,int r){
    int i=p,j=q+1,t=1;
    int tmp[50001]={0};
    while(i<=q && j<=r){
        if(arr[i]<=arr[j]) tmp[t++]=arr[i++];
        else tmp[t++]=arr[j++];
    }
    while(i<=q)
        tmp[t++]=arr[i++];
    while(j<=r)
        tmp[t++]=arr[j++];
    i=p,t=1;
    while(i<=r){
        cnt++;
        arr[i++]=tmp[t++];
        if(cnt==K)
            cout<<arr[i-1];
    }
}
void merge_sort(int *arr,int p,int r){
    if(p<r){
        int q=(p+r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int arr[50001]={0},N;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,N-1);
    if(cnt<K) cout<<-1;
}
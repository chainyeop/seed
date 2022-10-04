#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> ans;
    int num,arr[9]={0};
    for(int i=0;i<9;i++){
        cin>>num;
        arr[i]=num;
    }
    for(int i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            int sum=0;
            for(int k=0;k<9;k++){
                if(k==i||k==j)
                    continue;
                else{
                    sum+=arr[k];
                    ans.push_back(arr[k]);
                }
            }
            sort(ans.begin(),ans.end());
            if(sum==100){
                for(int a=0;a<7;a++){
                    cout<<ans[a]<<"\n";
                }
                return 0;
            }
            ans.clear();
        }   
    }
}
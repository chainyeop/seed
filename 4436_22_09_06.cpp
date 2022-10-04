#include<iostream>
using namespace std;
int main(){
    bool check[10]={false};
    long long n,cnt=0,num;
    while(cin >> n ){
        int i=1;
        while(1){
            num=n*i;
            cnt=0;
        //cout<<num<<"\n";
            while(num!=0){
                int a=num%10;
                check[a]=true;
                num=num/10;
            }
            for(int k=0;k<10;k++){
                if(check[k]==false) break;
                else cnt++;
            }
            //cout<<"cnt"<<" "<<cnt<<"\n";
            if(cnt==10){
                cout<<i<<"\n";
                for(int k=0;k<10;k++)
                    check[k]=false;
                break;
            }
            i++;
        }
    }
}
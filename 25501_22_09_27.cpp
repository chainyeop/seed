#include<iostream>
#include<string>
using namespace std;

int recursion(string s,int l,int r){
    if(l>=r) {
        cout<<"1"<<" ";
        return l+1;
    }
    else if(s[l]!=s[r]) {
        cout<<"0"<<" ";
        return l+1;
    }
    else return recursion(s,l+1,r-1);
}

int isPalindrome(string s){
    return recursion(s,0,s.size()-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    string S;
    for(int i=0;i<T;i++){
        cin>>S;
        cout<<isPalindrome(S)<<"\n";
    }
}
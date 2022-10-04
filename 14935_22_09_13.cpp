#include<iostream>
#include<string>
using namespace std;

string F(string &x){
    int n=(x[0]-'0')*x.size();
    string s=to_string(n);
    return s;
}

int main(){
    string x;
    cin>>x;
    string number="0";
    for(int i=0;;i++){
        x=F(x);
        if(number==x) {
            cout<<"FA";
            break;
        }
        number=x;
    }
}
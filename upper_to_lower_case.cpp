#include <iostream>
using namespace std;
#include <string>
int main(){
    string s;
    s="jdjnjnjnfjn";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<"\n";
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    cout<<s;
}
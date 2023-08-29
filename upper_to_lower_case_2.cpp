#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main(){
    string s="abcdhjjo";
    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<s<<"\n";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
}
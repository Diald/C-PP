#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // to convert to upper case 
    string s="abcdefghijklmnopqr";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<"\n";
    // to convert to lower case 
    string s2="ABCDEFGHIJKLMNOPQR";
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='A' && s2[i]<='Z'){
            s2[i]+=32;
        }
    }
    cout<<s2<<"\n";

    // inbuilt function to uppercase
    string s3="abcdefghijk";
    transform(s3.begin(),s3.end(),s3.begin(),::toupper);
    cout<<s3<<"\n";

    //inbuilt function to convert to lowercase 
    string s4="ABCDEFGHIJK";
    transform(s4.begin(),s4.end(),s4.begin(),::tolower);
    cout<<s4<<"\n";

    // Reverse Sorting string 
    string s5="12345";
    sort(s5.begin(),s5.end(), greater<int>());
    cout<<s5<<"\n";

    
}
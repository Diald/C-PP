#include<iostream>
#include<string>
using namespace std;
// to find all permutations of the string
void permutationOfString(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0 ; i<s.length() ; i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        permutationOfString(ros, ans+ch);
    }
}

// to return the shortest path from starting to ending point 
int shortestPath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=0; i<6; i++){
        count+=shortestPath(s+i, e);
    }
    return count;
}

// count the number of paths possible in a maze when u can only move upwards or downwards

int countMazePath(int n, int i, int j){
    if(i==n-1 && j == n-1){
        return 1;
    }
    if(i>=n && j>=n){
        return 0;
    }
    return countMazePath(n,i+1,j)+countMazePath(n,i,j+1);
}
int main(){
    cout<< countMazePath(3,0,0);
}

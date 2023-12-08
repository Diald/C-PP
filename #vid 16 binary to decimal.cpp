#include <iostream>
using namespace std;

int sum_of_n(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
bool pythagorian_triplet(int x, int y, int z){
    int a = max(x,max(y,z));
    int b,c;
    if(a==x){
        b = y;
        c = z;
    }
    else if(a==y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    if(b*b+ c*c - a*a ==0){
        return true;
    }
    else{
        return false;
    }
}
int binary_to_decimal(int n){
    int x = 1;
    int ans =0;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *=2;
        n /= 10;
    }
    return ans;
}

int main(){
    cout<<sum_of_n(5)<<"\n";
    if(pythagorian_triplet(5,3,4)){
        cout<<"pythagorian triplet"<<"\n";
    }
    else{
        cout<<"not pythagorian triplet"<<"\n";
    }
    cout<<binary_to_decimal(101);
}

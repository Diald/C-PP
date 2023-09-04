#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
    //n and n-1 have same bits as n except for rightmost "set" 1 bits that is moving from right position, the first one that is there like 0110 here the rightmost set bit is 01"1"0 so if we reset it and all bits beyond it we will get n-1 that is 0101 which is 5. so if we and these 2 bits, we will get rightmost bits as zero as they are all reverse of each other.
    
    // we have also noticed that all powers of 2 have only 1 set bit like 8= 1000 or 16=100000 or 4=0100 so if we and them with n-1 we will always get 0. 

// here n & n-1 keeps removing the 1's

int ispower2(int n){
    return (n && !(n & n-1));

}
int to_find_no_of_ones(int n){
    int count=0;
    while(n!=0){
        n=(n&n-1); 
        count++;
    }
    return count;
}
int main(){
    cout<<ispower2(16)<<"\n";
    cout<<to_find_no_of_ones(19)<<"\n";
}

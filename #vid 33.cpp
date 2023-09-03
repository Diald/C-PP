#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int getBit(int n,int pos){
    // to check if 0 or 1 bit in a position
    return (n&(1<<pos)!=0);
}
int setBit(int n, int pos){
    // to set or put a bit in a particular position
    return (n|(1<<pos));
}
int clearBit(int n, int pos){
    // first we take one's complement to convert 0100 to 1011
    int mask=~(1<<pos);
    //then we & to remove 1 at that particular position
    return (n & mask);
}
int updateBit(int n, int pos){
    // first we will do clear bit then we do set bit
    clearBit(n,pos);
    return setBit(n,pos);
}
int main(){
    //BIT MANUPULATION  
    cout<<getBit(5,2)<<"\n";
    cout<<setBit(5,1)<<"\n";
    cout<<clearBit(5,2)<<"\n";
    cout<<updateBit(5,1)<<"\n";
}
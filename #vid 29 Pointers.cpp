#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr;
    aptr = &a;
    // this & operator gives us the adress of a 
    //aptr stores the memory location of a 
    // but in order to access the value of a from aptr
    // we uses *aptr --> DEREFERENCING
    cout<<&a<<endl; // 2000
    cout<<aptr<<endl; // 2000
    cout<<*aptr<<endl; //10
    //using pointer we can access the variable but update it as well
    // like - 
    *aptr = 20;
    cout<<a<<endl; //20

    //we can only use 4 arithematic operations on pointers-
    // ++ , -- , + , -

    aptr++;
    cout<<aptr<<endl; //4 bytes int so memory will increase by 4 byte
    //char have 1 byte

    //arrays behaves same as pointers 
    // *arr will acts as same 

    int arr[]={10,20,30};
    cout<<*arr<<endl; // 10
    int *arr_ptr = arr; 
    cout<<arr_ptr<<endl; // 2000

    //array pointer can not be modified 

    // pointer to pointer - a pointer that points to 
    // another pointer that points to a variable 
    
}

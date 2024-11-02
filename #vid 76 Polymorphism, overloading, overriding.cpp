#include <iostream>
#include <vector>
#include <string>
using namespace std;

// polymorphism - in many forms 
// mainly 2 types of polymorphism - Compile time & Run Time 
// COMPILE TIME - Function Overloading & Operator Overloading
// RUN TIME - Virtual Functions (overriding)

// FUNCTION / METHOD OVERLOADING - same name of functions but different parameters or even different type of parameters 
// OPERATOR OVERLOADING - customizing the operators to function as we want
// OVERRIDING / VIRTUAL FUNCTION - it allows the derived class to have same function name from base class but different functionality, basically adds virtual to base method so derived class can not access it 

// FUNCTION OVERLOADING 

class A{
    public:
    void fun(){
        cout<<"function with no parameters";
    }
    int fun(int x){
        cout<<"Function with 1 parameter";
    }
    int fun(int x, int y){
        cout<<"Function with 2 parameters";
    }
};

// OPERATOR OVERLOADING 

class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
    Complex operator + (Complex const &obj){
        Complex res;
        res.real = obj.real + real;
        res.imag = obj.imag + imag;
        return res;
    }
    void display(){
        cout<< real<<" + "<<imag<<" i"<<endl;
    }
};

// OVERRIDING 

class Parent{
    public:
    virtual void print(){
        cout<<"Parent print";
    }
    void display(){
        cout<<"Parent display";
    }

};
class Child : public Parent{
    public:
    void print(){
        cout<<"Child print";
    }
    void display(){
        cout<<"Child display";
    }
};

int main(){
    Parent *p;
    Child c;
    p = &c;

    p->print();
    p->display();
}

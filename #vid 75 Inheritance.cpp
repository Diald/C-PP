#include <iostream>
#include<string>
#include<vector>
using namespace std;

// Derived Class - The child class which is derived from the parent class
// Base Class - The parent class from which the child class is being derived

// Types of inheritance - 
// Single , Multiple , Multilevel , Hierarchal , Hybrid

// Single Inheritance 
class A{
    public:
    void aFunc(){
        cout<<"A Class";
    }
};

class B : public A{
  public:
  void bFunc(){
    cout<<"Derived Class";
  }
};


// Multiple Inheritance

class A{
    public:
    void aFunc(){
        cout<<"A class";
    }
};

class B{
    public:
    void bFunc(){
        cout<<"B Class";
    }
};

class C : public A, public B{
    public:

};

// Multilevel Inheritance

class A{
    public:
    void aFunc(){
        cout<<"A class"<<endl;
    }
};

class B : public A{
    public:
    void bFunc(){
        cout<<"B Class"<<endl;
    }
};

class C : public B{
    public:
};

int main(){
    C c;
    c.aFunc();
    c.bFunc();
}

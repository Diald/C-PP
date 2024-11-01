#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
    public:
    int age;
    int grade;
    string name;
    //parameterized constructor
    Student(int a, int g, string n){
        name = n;
        age = a;
        grade = g;
    }
    //default constructor 
    Student(){
        cout<<"Default Constructor";
    }
    //copy constructor
    Student(Student &a){
        name = a.name;
        age = a.age;
        grade = a.grade;
    }
    // shallow copy 
    // instead of copying the original object it copies the references, such that original object and copy points to the same value
    // advantage is it is very fast as it does not copy the original object
    // disadvantage as any change in it will lead to a change in original object
    // deep copy 
    // it copies all the pointers and the addresses they are pointing to as well
    // advantage is that any change in copy will not change the original
    // disadvantage it requires a lot of memory as it copies all the pointers and their addresses as well
    ~Student(){
        cout<<"Destructor called";
    }
    // operator overloading - when you allow operators to behave in a way other than they are supposed to behave
    // basically giving definitions on how they will perform 

    bool operator == (Student &a){
        if(name==a.name && age==a.age && grade==a.grade){
            return true;
        }else{
            return false;
        }
    }
    void setName(string s){ 
        name = s; 
    }
};

int main(){
    Student a(19, 12, "Rohit");
    cout<<a.name;
    Student b; // this is a default constructor
    Student c(a); // this is a copy constructor 
    // we can also do Student c = a;
    cout<<c.name;
}

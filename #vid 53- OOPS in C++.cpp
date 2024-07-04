#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    // default constructor 
    student(){
        cout<<"default constructor"<<endl;
    }



    // parameterized constructor 

    student(string s, int b, bool c){
        name = s;
        age = b;
        gender = c;
    }



    // there are 2 types of copies 
    // shallow copy 
    // deep copy  

    // shallow copy only copies the pointers not the addresses. default copy constructor
    // deep copy copies the pointers as well as addresses. user defined copy constructors do deep copy
    // user define copy constructor 
    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
        cout<<"copy constructor"<<endl;
    }

    ~student(){
        cout<<"object destroyed"<<endl;
    }

    // OBJECT OVERLOADING - 
    // that allows you to define multiple behaviours of an operator or a function 

    // OPERATOR OVERLOAD - 

    bool operator == (student &a){
        if( name == a.name && age == a.age && gender == a.gender){
            cout<<"same"<<endl;
            return true;
        }
        else{
            return false;
        }
    }
    
    void printArray(){
            cout<<"Name = "<<name<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Gender = "<<gender<<endl;
    }
};
int main(){
    // student arr[3];

    // for(int i=0; i<3; i++){
    //     cout << "Enter Name: ";
    //     cin >> arr[i].name;
    //     cout << "Enter Age: ";
    //     cin >> arr[i].age;
    //     cout << "Enter Gender (1 for Male, 0 for Female): ";
    //     cin >> arr[i].gender;
    // }

    student a("Divya", 21, 1);

    a.printArray();

    student b;
    student c=a;
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<'Not same'<<endl;
    }
    // for(int i = 0; i<3; i++){
    //     arr[i].printArray();
    // }

}

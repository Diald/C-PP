#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*
1. str(5,'n')
2. getline(cin, str)
3. str1.append(str2)
4. str1 + str2
5. str[0]
6. str.clear()
7. str.compare(str1)
8. str1.empty()
9. str1.insert(2,'m')
10. str1.size()
11. str.length()
12. stoi(str)
13. str.substr(2,9)
14. to_string(x)
15. sort(s1.begin(),s1.end())
*/
int main(){
    //strings are better than character arrays
    // character arrays have static size and we cant concatenate it
    // we can operate concatenate and append in string 
    // there is no terminating point in char array
    // to declare a string 
    string str;
    cin>>str;
    cout<<str;

    // to write 'n' five times we write 
    string str1(5,'n');
    cout<<str1;

    // another way of taking input, it will take the entire string as input
    string str2;
    getline(cin,str2);
    cout<<str2;

    // to append 2 strings 
    str2.append(str1);
    cout<<str2<<endl;

    // or we could do
    cout<<str2+str1<<endl;

    // to access letters of the string 

    cout<<str2[1]<<endl;
    //like a normal character array we could access string
    // but its not possible in python

    // to clear the entire string we use clear function 

    str2.clear();
    cout<<str2;

    // to compare 2 strings we use compare function 

    cout<< str1.compare(str2) <<endl;

    // to check if empty or now 

    cout<< s1.empty() <<endl;

    // to insert an element inside string 
    // at a desired position 
    cout<< str1.insert(2,'m') <<endl;

    // to find length of 
    cout << str1.size() << endl;
    cout<< str1.length() << endl;

    // to find substring 

    cout<< str1.substr(6,4) <<endl;

    // to convert numeric string to integer

    cout<< stoi(str1) << endl;


}

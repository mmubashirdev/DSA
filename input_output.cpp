// Input Output
// Complete the function printNumber which takes an integer input from the user and prints it on the screen.


// Use:-

//     for C++ : cout << variable_name;
//     for Java : System.out.print();
//     for Python : print()
//     for Javascript : console.log()

// Example 1

// Input(user gives value): 7

// Output: 7

// Example 2

// Input(user gives value): -5

// Output: -5

// Now your turn!

// Input(user gives value): 0

// Output:

// Constraints

//     -1000 <= User Input <= 1000
#include<iostream>
using namespace std;

class Solution {
public:
    void printNumber() {
        cout<<"Ente a number: ";
        int num;
        cin>>num;
        cout<<num<<endl;
    }
};

int main(){
  Solution S;
  S.printNumber();
}
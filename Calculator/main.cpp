#include <iostream>
#include <cmath>

using namespace std;      

int main() {
    long double num_1{};
     long double num_2{};
    char operation {};
    
    cout << "Enter first number :" << endl;
    cin >> num_1;
    cout << "Enter operation(+,-,*,/) :" << endl;
    cin >> operation;
    cout << "Enter second number :" << endl;
    cin >> num_2;
    
    double result;
    bool validoperation = true;
    
    
    switch (operation){
     case '+':
       result = num_1 + num_2;
       break;
     case '-':
       result = num_1 - num_2;
       break;
     case '*':
       result = num_1 * num_2 ;
       break;
     case '/':
      if (num_2 != 0) {
          result = num_1 / num_2;
      }
      else {
          cout << "Error: Divison by 0 is not allowed"<< endl;
          validoperation = false;
      }
      break;
      default:
       cout << "Error:invalid operation" << endl;
       validoperation = false;
      break;
    }
      if (validoperation){
      
     cout << "result : " << result << endl;
    }
    return 0;
   }
   
   
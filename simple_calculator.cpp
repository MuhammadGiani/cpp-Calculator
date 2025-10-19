#include <iostream>
using namespace std;

int main(){

    double num1, num2;
    char op;

    cout << "\nSIMPLE CALCULATOR\n\n";

    cout << "Enter NUM_1: ";
    cin >>num1;

    cout << "Enter NUM_2: ";
    cin >> num2;

    cout << "Enter operation to perform: (+, -, /, *): " <<endl;
    cin >> op;

    if (op == '+')
    cout << "Result = " << num1+num2 << endl;

    else if (op == '-')
    cout << "Result = " << num1-num2 << endl;

    else if (op == '/'){
        if (num2==0)
        {
            /* code */
            cout << "Error Division By Zero" <<endl;
        }
        else
        cout << "Result = " << num1/num2 << endl;   
    }
    

    else if (op == '*')
    cout << "Result = " << num1*num2 << endl;

    else 
    cout << "Invalid Operator" <<endl;

    return 0;
}
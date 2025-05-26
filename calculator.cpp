
#include<iostream>
#include "calculator.h"
using namespace std;
using namespace Calculator;

calculator calc;
double value1;
double value2;
int option;
bool bExit = false;

int main()
{
 
    cout << "Hello World!" << endl;
    cout << "Welcome to My Calculator App"<< endl;

    while (!bExit)
    {
        switch(calc.AskForOperation())
        {
            case 1:
                calc.SetValues();
                cout << "The Value is" << endl;
                cout << calc.Add(value1,value2)<< endl;
                break;
            case 2:
                calc.SetValues();
                cout << "The Value is" << endl;
                cout << calc.Subtract(value1,value2)<< endl;
                break;
            case 3:
                calc.SetValues();
                cout << "The Value is" << endl;
                cout << calc.Multiply(value1,value2)<< endl;
                break;
            case 4:
                calc.SetValues();
                cout << "The Value is" << endl;
                cout << calc.Divide(value1,value2)<< endl;
                break;
            case 5:
                bExit = true;
                break;
            default:
            cout << "not a Valid Option"<<endl;
                break;
        }
    }
    
    return 0; 
}

int calculator::AskForOperation()
{
    cout << "Please select the operation you would like to make" << endl;
    cout << "1. ADD\n 2. SUBTRACT\n 3. Multiply\n 4. Divide\n 5. Close Application"<< endl;
    cin >> option;
    return option;
}

void calculator::SetValues()
{
    cout << "Choose First Operand" << endl;
    cin >> value1;
    cout << "Choose Second Operand" << endl;
    cin >> value2;
}

double calculator::Add(double input1, double input2)
{
    return input1 + input2;
}

double calculator::Subtract(double input1, double input2)
{
    return input1 - input2;
}

double calculator::Multiply(double input1, double input2)
{
    return input1*input2;
}

double calculator::Divide(double input1, double input2)
{
    if(input2 <= 0 || input1 <=0)
    {
        return 0;
    }
    return input1/input2;
}
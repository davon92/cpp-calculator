#pragma once
namespace Calculator
{
    class calculator
    {
        public:
            void SetValues();
            int AskForOperation();
            double Add(double input1, double input2 );
            double Subtract(double input1, double input2 );
            double Multiply(double input1, double input2 );
            double Divide(double input1, double input2);
    };
}
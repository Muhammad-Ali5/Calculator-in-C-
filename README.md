# Calculator Program
This program implements a multi-functional calculator in C++. The calculator includes the following features:

Simple Calculator: Perform basic arithmetic operations (addition, subtraction, multiplication, and division).
Scientific Calculator: Perform advanced mathematical operations such as power, square root, trigonometric functions (cosine, sine, tangent), and logarithmic functions (natural log and base-10 log).
CGPA Calculator: Calculate the CGPA (Cumulative Grade Point Average) based on input subjects, their credit hours, and points.
Fraction Addition: Add two fractions and output the result in fractional form.
# Usage
Running the Program
Compile the program using a C++ compiler. For example, using g++:

g++ -o calculator calculator.cpp
Run the compiled program:

./calculator
Menu Options
Upon running the program, you will be presented with a main menu:

mathematica
    --> CALCULATOR :)
    ======================================
    Press 1. For Simple Calculator     ==:)
    Press 2. For Scientific Calculator ==:)
    Press 3. For CGPA Calculator       ==:)
    Press 4. For Fractional Addition   ==:)
    Press 5. For Exit Program          ==:)
    ======================================
    
    Enter your choice :)
    ---------------------------
Select an option by entering the corresponding number.

Simple Calculator
Addition
Subtraction
Multiplication
Division
Scientific Calculator
Power Operation
Square Root
Cosine Operation
Sine Operation
Tangent Operation
Natural Logarithm
Base-10 Logarithm
CGPA Calculator
Calculate CGPA
Fraction Addition
Add two fractions by entering their numerators and denominators.

# Classes and Methods
Class: Calculator
# Methods:
void Add(double a, double b)
void Sub(double a, double b)
void Mult(double a, double b)
void Divi(double a, double b)
Class: Scientific_calculator (inherits from Calculator)
# Methods:
int Power(float n1, float n2)
int Squ_root(float n1)
int Cos(float n1)
int Sine(float n1)
int Tan(float n1)
int Log(float n1)
int BaseLog(float n1)
Class: CGPA_calculator (inherits from Scientific_calculator)
# Methods:
void getData()
void calculateData()
void setGrading()
Class: Add_two_Fraction (inherits from CGPA_calculator)
# Methods:
int gcd(int a, int b)
void AddFraction(double n1, double d1, double n2, double d2)
Example Usage
int main() {
    Add_two_Fraction s_cal;
    int choice;
    char option;
    double num1, num2;
    
    // Main menu and other functionality...
}
Author
[Muhammad Ali]

License
This project is licensed under the MIT License - see the LICENSE file for details.


#include <iostream>

using namespace std;

class Numbers {
   public:
      double Numone;   // Number one
      double Numtwo;  // Number two
      double Multiplication;   // Number three
};

int main() {
   Numbers Num1;        // Declare Num1 of type Numbers
   Numbers Num2;       // Declare Num2 of type Numbers
double Calculations = 0.0;
  
   Num1.Numone = 5.0;
   Num1.Numtwo = 6.0;
   Num1.Multiplication = 7.0;

  
   Num2.Numone = 10.0;
   Num2.Numtwo = 12.0;
   Num2.Multiplication = 13.0;

   
   Calculations = Num1.Numone * Num1.Numtwo * Num1.Multiplication;
   cout << "Calculations of Num1 : " << Calculations <<endl;


   Calculations = Num2.Numone * Num2.Numtwo * Num2.Multiplication;
   cout << "Calculations of Num2 : " << Calculations <<endl;
   return 0;
}

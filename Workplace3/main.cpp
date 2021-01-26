
#include <iostream>

using namespace std;




class Student {
public:
  Student(){
    cout<<"Student: Computer Science: National College of Ireland"<<endl;
  }
  string collegeName = "NCI";
};


class NCIStudent: public Student {
public:

  int sum(int num1, int num2){
     return num1*num2;
  }
  int sum(int num1, int num2, int num3){
     return num1*num2*num3;
  }


  NCIStudent(){
    cout<<"NCI: BSC Computer Science "<<endl;
  }
  string Collegecourse = "Computer Science";
  string Studentname = "Kevin Mbiyavanga";
};



class Numbers {
   public:
      double Numone;   // Number one
      double Numtwo;  // Number two
      double Multiplication;   // Number three
};

int main() {







     NCIStudent obj;
  cout<<"Name: "<<obj.Studentname<<endl;
  cout<<"College Name: "<<obj.collegeName<<endl;
  cout<<"NCI Course: "<<obj.Collegecourse<<endl;
  //This will call the first function
  cout<<"Output: "<<obj.sum(10, 20)<<endl;
  //This will call the second function
  cout<<"Output: "<<obj.sum(11, 22, 33);


   Numbers Num1;        // Declare Num1 of type Numbers
   Numbers Num2;       // Declare Num2 of type Numbers




double Calculations = 0.0;
   // box 1 specification
   Num1.Numone = 5.0;
   Num1.Numtwo = 6.0;
   Num1.Multiplication = 7.0;

   // box 2 specification
   Num2.Numone = 10.0;
   Num2.Numtwo = 12.0;
   Num2.Multiplication = 13.0;

   // volume of box 1
   Calculations = Num1.Numone * Num1.Numtwo * Num1.Multiplication;
   cout << "Calculations of Num1 : " << Calculations <<endl;

   // volume of box 2
   Calculations = Num2.Numone * Num2.Numtwo * Num2.Multiplication;
   cout << "Calculations of Num2 : " << Calculations <<endl;
   return 0;
}

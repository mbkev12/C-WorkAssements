#include <iostream> 

using namespace std;

// Base class


class Shape { 

public:

void Numberone(int one){

Numberone  = one;

}

void Numbertwo(int two){

Numbertwo = two;

}

protected:

int one;
int two;

};

// Derived class 

class Multiplication: public Shape {
public: 

int getAnswer() {
return(one*two);

}

};

int main(void) { 
Multiplication Ans;

Ans.getNumberOne(10);
Ans.getNumberTwo(5);


// Print Answer of multiplication.

cout <<"Answer Multiplaction: " << Ans.getMultiplication() << endl;

return 0;

}


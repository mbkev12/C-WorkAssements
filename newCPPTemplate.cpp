#include <iostream> 

using namespace std;

// Base class


class Numbers{ 

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

class Multiplication: public Numbers {
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

cout <<"Answer Multiplication: " << Ans.getMultiplication() << endl;

return 0;

}


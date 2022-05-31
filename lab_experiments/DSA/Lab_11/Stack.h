
#include <iostream>


const int MAX=100;		// The Stack Size


template <class Type>
class Stack {
	
private:
	Type arr[MAX];
	int top;		// indexing for the Stack

public:
	Stack() {  top = -1;  }	// Initially the Stack is set empty
	
	void push(Type);	// Defined outside
	
	Type pop();		// To POP! the fist / top element, defined outside

	bool isEmpty()	{

		if (top == -1) {  return true;  }
		else {  return false;  }

	}

	bool isFull()	{
		
		if (top == MAX - 1)  {  return true;  }
		else {  return false;  }

	}

	Type peek()	{

		return arr[top];

	}
};


template <class Type>
void Stack<Type> :: push(Type var)
{

	try {
		
		if (top == MAX-1) throw top;

		else {  arr[++top] = var;  }

	}
	catch (int x)	{
		
		std::cout << "Stack overflow!" << std::endl;
		exit(1);

	}
}


template <class Type>
Type Stack<Type> :: pop()
{

	try {
	
		if (top == -1)  throw top;
		else return arr[top--];

	}
	
	catch (int x) {
	
		std::cout << "Stack underflow!" << std::endl;
		exit(1);

	}
}


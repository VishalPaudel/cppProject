
#include <iostream>
#include "Stack.h"
#include "Queue.h"


using namespace std;


int main () {
	
	std::cout << "Everything seems to work!!" << std::endl;
	
	Stack <int> S1, S2;
	
	S1.push(3);
	S2.push(5);
	S1.push(4);
	S1.pop();

	std::cout << "S1 is empty? : " << S1.isEmpty() << std::endl;
	std::cout << "S2 is full? : " << S2.isFull() << std::endl;

	S1.pop();
	std::cout << "S1 is empty? : " << S1.isEmpty() << std::endl;

	Queue <int> Q1;
	std::cout << "Q1 is empty? : " << Q1.isEmpty() << std::endl;

	Q1.enqueue(5);
	Q1.enqueue(7);
	Q1.enqueue(15);

	std::cout << "Q1 is empty? : " << Q1.isEmpty() << std::endl;


	Q1.dequeue();
	Q1.dequeue();
	Q1.dequeue();
	// Q1.dequeue();

	return EXIT_SUCCESS;

}


template <class Type>
class Queue {

private:
	static const int MAX = 100;
	Type arr[MAX];

	int front;
	int rear;

public:

	Queue() {
		front = -1;
		rear = -1;
	}

	void enqueue(Type);	// To add elements in the rear

	Type dequeue();		// To remove element from the front

	bool isFull()	{

		if (front == 0 && rear == MAX - 1) {  return true;  }
		else return false;

	}

	bool isEmpty()	{
		
		try  {

			if (front == -1 && rear == -1) return true;
			else if (front == rear) {  throw 0;  }
			else return false;
		}

		catch (int x)  {

			std::cout 
				<< front 
				<< " " << rear 
				<< "The developer (@VishalPaudel) is silly!" 
				<< std::endl;

			exit(0);
		}
	}


	void peek()	{
		
		try {
			if (~(this->isEmpty()))	{  std::cout << arr[front] << std::endl;  }
			else throw 0;
		}

		catch (int x)	{

			std::cout << "The Queue is Empty!" << std::endl;
			exit(1);

		}

	}
};


template <class Type>
void Queue<Type> :: enqueue(Type val)	{


	try {

		if (  this->isFull() || rear == MAX - 1  ) {  throw 0;  }
		/* 
		 * This is for the case where rear is at the end and cannot 
		 * add further without accessing non-permitted territory
		 */

		else arr[++rear] = val;

	}
	
	catch (int x)  {

		std::cout << "Queue overflow!" << std::endl;
		exit(0);

	}

}


template <class Type>
Type Queue<Type> :: dequeue()	{


	try {

		if (  this->isEmpty() || front == MAX  ) {  throw 0;  }
		/*
		 * This is for the case where front is at the end and cannot 
		 * extract further without accessing non-permitted territory
		 */

		else {

			// This is where the developer (@VishalPaudel) needs to be carefull
			if (front > rear)  {

				front = rear = -1; // resetting the queue

			}

			return arr[front++];
		}

	}

	catch (int x)  {

		std::cout << "Queue underflow!" << std::endl;
		exit(0);

	}

}



#include <iostream>

using std::cout;


void say_hello();  // global function declaration


class Test {
public:
		int x;

		// defining mutable variable y
		// now this can be modified
		mutable int y;  // even if this is a member of const object it can change

		Test()
		{
				x = 4;
				y = 10;
		}
};


int outside_functions = 2222;  // global variable declaration
// Declared in the global scope


int main() {


		// register int smart_variable_for_fast_access;  // smart local variable
		// ISO C++17 does not allow 'register' storage class specifier
		// similar to auto, dies after function scope


		say_hello();
		std::cout << "extern cin main: " << outside_functions << std::endl;
		say_hello();

		say_hello();

		std::cout << "Trying mutable members of const objects" << '\n';
		const Test t1;

		// trying to change the value
		t1.y = 20;
		cout << t1.y;

		return 1;

}

void say_hello() {

		outside_functions++;

		static int will_remain_till_program_dies = 5;
		// persistent local variable
		// stays persistent after being declared in the function scope
		// becomes global variable henceforth
		will_remain_till_program_dies++;

		int normal_equivalent_to_auto = 5;
		normal_equivalent_to_auto++;

		std::cout << "extern variable: " << outside_functions << std::endl;
		std::cout << "static variable: " << will_remain_till_program_dies << '\n';
		std::cout << "      normal variable: " << normal_equivalent_to_auto << '\n';

		register char my_fast_char = 'H';
		// we cannot obtain the address of a register variable using pointers.

		cout << "a fast local variable" << '\n';


		return;

		// can follow the link to see something insightful


}

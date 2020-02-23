#include <iostream>
#include "Dog.h"

using namespace std;

int main() {

	Dog myDog(14, "Ike");
	myDog.bark();

	{
		Dog anotherDog(1, "Rylie");
		anotherDog.bark();
	}


	return 0;
}

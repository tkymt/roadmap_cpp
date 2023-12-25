#include "my_class.h"
#include <iostream>

class MyClass_Impl { // the actual implementation
public:
	void some_method() {
		std::cout << "Implementation method called!" << std::endl;
	}
};

MyClass::MyClass() :pImpl(new MyClass_Impl()) {} // constructor
MyClass::~MyClass() { delete pImpl; } // destructor

void MyClass::some_method() {
	pImpl->some_method(); // delegation to the implementation
}


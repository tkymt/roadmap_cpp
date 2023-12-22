#include "MyClass2.h"

class MyClass2::Impl {
public:
	void someMethod(){ /* Implementation */ }
};

MyClass2::MyClass2() :pImpl(new Impl()) {}
MyClass2::~MyClass2() { delete pImpl; }
void MyClass2::someMethod() { pImpl->someMethod(); }

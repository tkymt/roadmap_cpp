#pragma once

class MyClass2 {
public:
	MyClass2();
	~MyClass2();
	void someMethod();

private:
	class Impl;
	Impl* pImpl;
};
#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__
#include "base.hpp"
#include <math.h>
#include <iostream>

using namespace stdl;
class Decorator : public Base {
	public:
		Decorator(Decorator* decorator) { this->decorator = decorator; }	
		virtual int evaluate() = 0;
		virtual string stringify() = 0;
	private:
		Decorator* decorator;	
#endif

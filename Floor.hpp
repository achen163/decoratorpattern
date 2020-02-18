#ifndef __FLOOR_HPP___
#define __FLOOR_HPP__

#include "decorator.hpp"

class Floor : public Decorator {
	Floor (Base* value) : Decorator () { this->value = value;}	
	virtual double  evaluate() {
		return floor(value->evaluate());

	}
	virtual string stringify() {};

protected:
	Base* value;
	

};


#endif

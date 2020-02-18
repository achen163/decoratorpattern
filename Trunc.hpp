#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include "decorator.hpp" 
class Trunc : public Decorator{
	public:
		virtual string stringify(){
			int num = trunc(value->evaluate());
			return num.to_string();
			

		}	


	protected:
		Base* value;
	


};

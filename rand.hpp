#ifndef _RAND_HPP_
#define _RAND_HPP_

#include "base.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

class Rand : public Base {
	public:
		Rand(){ this->randnum = rand()%100;}
		virtual double evaluate()  { return randnum; }
		virtual string stringify() { return to_string(randnum); }
              
	private:
	double	randnum;



};
#endif


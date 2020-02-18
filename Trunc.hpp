#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

class Trunc : public Decorator{
	public:
		virtual string stringify(){
			int num = value->evaluate();
			return num.to_string();
			

		}	


	protected:
		Base* value;
	


}

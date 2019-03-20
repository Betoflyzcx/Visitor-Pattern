#include "visitor.h"
#include <iostream>
class Stock
{
	public:
		virtual void accept(class Visitor *)=0;
};



#include "stock.h"

class Apple: public Stock
{
	public: // visitor in void and through construction is different
    		void accept(class Visitor *);
		void buy()
		{
			std::cout << "Apple::buy\n";
		}
		void sell()
		{
			std::cout << "Apple::Sell\n";
		}
		
	private:
};

void Apple::accept(Visitor* v)
{

}

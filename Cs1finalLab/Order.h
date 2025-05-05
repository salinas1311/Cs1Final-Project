#include "Product.h"

using namespace std;
class Order {
private:
	int counter;
	int capacity;
	Product* Arr;
public:
	Order();
	Order(int orderSize);
	Order(const Order& oObj);
	~Order();
	void addProduct(const Product& pObj);
	void printOrder()const;
};

#include "Order.h"
#include<vector>
using namespace std;
class PickupOrder {
private:
	vector<Order> orders;
public:
	void addOrder(const Order& addtoVec);
	void print()const;
};
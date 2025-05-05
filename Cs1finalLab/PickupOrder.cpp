#include "PickupOrder.h"
#include<vector>
#include<iostream>

using namespace std;


	void PickupOrder::addOrder(const Order& addtoVec) {
		orders.push_back(addtoVec);
	}
	void PickupOrder::print()const {
		for (int i = 0; i < orders.size(); i++) {
			cout << "Order " << i + 1 << ":" << endl;
			orders[i].printOrder();
			cout << endl;
		}
	}
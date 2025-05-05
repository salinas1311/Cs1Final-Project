#include "Order.h"
#include<iostream>

using namespace std;
Order::Order() {
		int size = 0;
		counter = 0;
		cout << "How many items would you like: ";
		cin >> size;
		capacity = size;
		Arr = new Product[size];
	}
Order::Order(int orderSize) {
		counter = 0;
		capacity = orderSize;
		Arr = new Product[orderSize];
	}
Order::Order(const Order& oObj) {
		counter = oObj.counter;
		capacity = oObj.capacity;
		Arr = new Product[capacity];
		for (int i = 0; i < capacity; i++) {
			Arr[i] = oObj.Arr[i];
		}
	}
Order::~Order() {
		delete [] Arr;
		Arr = NULL;
	}
	void Order::addProduct(const Product& pObj) {
		if (capacity > counter) {
			Arr[counter] = pObj;
			counter++;
		}
		else {
			cout << "ERROR! Order exceeds size limit." << "\n\n";
		}
	}
	void Order::printOrder()const {
		for (int i = 0; i < capacity; i++) {
			Arr[i].print();
		}
	}
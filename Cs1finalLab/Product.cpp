#include "Product.h"
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

Product::Product() {
		productName = "";
		productPrice = 0.0;
	}
Product::Product(string pName, double pPrice) {
		productName = pName;
		productPrice = pPrice;
	}
	string Product::get_productName()const {
		return productName;
	}

	double Product::get_productPrice()const {
		return productPrice;
	}
	void Product::set_productName(string newName) {
		productName = newName;
	}

	void Product::set_productPrice(double newPrice) {
		productPrice = newPrice;
	}

	void Product::print()const {
		if (productName == "") {
			return;
		}
		cout << productName << ": $" << fixed << showpoint << setprecision(2) << productPrice << endl;
	}

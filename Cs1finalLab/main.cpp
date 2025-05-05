///////////////////////////////////////////////////////////////////// 
// Name: Sebastian Salinas
// Date: T 5/3/25
// Class: CSCI-1470-03-Spring2025
// Semester: Spring 2025 
// CSCI 1470 Instructor: Dr. Jonatan Reyes 
// Program Description: Allows for the creation of products to me made into orders. Then added into different pickup orders acting as the days.
///////////////////////////////////////////////////////////////////// 
#include "PickupOrder.h"
#include<iostream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main() {
	Product p1("Keyboard", 49.99);
	Product p2("Mouse", 25.50);
	Product p3("Monitor", 199.99);
	Product p4("Mouse Pad", 0.99);


	Order o1(3); // Allow up to 3 products
	o1.addProduct(p1);
	o1.addProduct(p2);

	Order o2(2);
	o2.addProduct(p3);

	PickupOrder monday;
	monday.addOrder(o1);
	monday.addOrder(o2);

	cout << "\n--- Pickup Orders Monday ---\n\n";
	monday.print();


	PickupOrder tuesday;

	Order o3(o2);
	o3.addProduct(p4);

	tuesday.addOrder(o3);

	cout << "\n--- Pickup Orders Tuesday ---\n\n";
	tuesday.print();

	return 0;
}
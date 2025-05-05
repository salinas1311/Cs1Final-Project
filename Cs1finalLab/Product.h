#include<string>

using namespace std;

class Product {
private:
	string productName;
	double productPrice;
public:
	Product();
	Product(string pName, double pPrice);
	string get_productName()const;
	double get_productPrice()const;
	void set_productName(string newName);
	void set_productPrice(double newPrice);
	void print()const;
};


#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product {
	string name;
	string category;
	double price;
	int quanity;
public:
	Product();
	Product(string n, string c, double pr, int q);
	void Initialize(string na, string c, double pr, int g);
	void Print() const;
	//Setters Getters

	void setName(string n);
	void setCategory(string c);
	void setPrice(double p);
	void setGuanity(int g);

	string getName() const;
	string getCategory() const;
	double getPrice() const;
	int getGuanity() const;

};
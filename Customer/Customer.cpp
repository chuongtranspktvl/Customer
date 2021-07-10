#pragma once
#include "iostream"
using namespace std;
class Customer {
private:
	string name;
	int id;
	int discount;
public:
	Customer() {

	}
	Customer(int id,string name, int discount) {
		this->id = id;
		this->name = name;
		this->discount = discount;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	int getID() {
		return id;
	}
	void setDiscount(int discount) {
		this->discount = discount;
	}
	int getDiscount() {
		return discount;
	}
};
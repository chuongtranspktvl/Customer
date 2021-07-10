#include <iostream>
#include "Customer.cpp"
#include "Invoice.cpp"
int main()
{
	Customer customer1(1998, "CHUONG", 20);
	Invoice invoice1(1998, customer1, 100000);
	cout << "Customer Name : " << invoice1.getCustomerName() << endl;
	cout << "Invoice After Discount For " << customer1.getDiscount() <<"%" << " : " << invoice1.getAmountAfterDiscount()<<endl;
	Customer customer2(1998, "CUONG", 10);
	Invoice invoice2(1998, customer2, 100000);
	cout << "Customer Name : " << invoice2.getCustomerName() << endl;
	cout << "Invoice After Discount For " << customer2.getDiscount() << "%" << " : " << invoice2.getAmountAfterDiscount()<<endl;
	Customer customer3(1998, "CUC", 30);
	Invoice invoice3(1998, customer3, 100000);
	cout << "Customer Name : " << invoice3.getCustomerName() << endl;
	cout << "Invoice After Discount For " << customer3.getDiscount() << "%" << " : " << invoice3.getAmountAfterDiscount() << endl;
	//hihi;
	//chuongtran
}

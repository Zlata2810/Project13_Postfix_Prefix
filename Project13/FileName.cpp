#include <iostream>
#include "Header.h"
using namespace std;

Product& operator+=(Product& p, int sum)
{
	p.setPrice(p.getPrice() + sum);
	return p;
}
Product& operator-=(Product& p, int sum)
{
	p.setPrice(p.getPrice() - sum);
	return p;
}
Product& operator++(Product& obj) // ++obj
{
    obj.setPrice(obj.getPrice() + 10);
    obj.setPrice(obj.getPrice() + 10);
    return obj;
}
Product operator++(Product& obj,int) // ++obj
{
	Product temp = obj;
	obj.setPrice(obj.getPrice() + 10);
	obj.setPrice(obj.getPrice() + 10);
	return temp;
}
Product& operator--(Product& obj) // --obj
{
	obj.setPrice(obj.getPrice() + 10);
	obj.setPrice(obj.getPrice() + 10);
	return obj;
}
Product operator--(Product& obj, int) // --obj
{
	Product temp = obj;
	obj.setPrice(obj.getPrice() - 10);
	obj.setPrice(obj.getPrice() - 10);
	return temp;
}




int main() {
	Product p1("Laptop", "Electronics", 999.99, 10);
	p1.Print();

	//глобальная перегрузка операторов
	++p1;
	p1++;

	p1--;
	--p1;

	p1 += 100; // увеличиваем цену на 100
	p1 -= 50;  // уменьшаем цену на 50

}
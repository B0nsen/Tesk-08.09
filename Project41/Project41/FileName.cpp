#include <iostream>
#include "Car.h"

int main()
{
	Car car1;
	car1.Input();
	car1.Print();
	Car car2;
	car2.SetModel("BMW");
	car2.SetColor("Black");
	car2.SetYear(2004);
	car2.SetPrice(1254.25);
	std::cout << car2.GetModel() << ' '
		<< car2.GetColor() << ' '
		<< car2.GetYear() << ' '
		<< car2.GetPrice() << '\n';
	Car car3("Nissan", "Red", 2006, 1522.25);
	car3.Print();
}
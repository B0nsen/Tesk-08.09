#include "Car.h"
#include <iostream>

Car::Car()
{
	model = nullptr;
	color = nullptr;
	year = 0;
	price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
	year = y;
	price = pr;
}

Car::~Car()
{
	delete[] model;
	delete[] color;
}

void Car::Input()
{
	char temp[50];
	std::cout << "Enter model: ";
	std::cin.getline(temp, 50);
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(temp) + 1];
	strcpy_s(model, strlen(temp) + 1, temp);
	std::cout << "Enter color: ";
	std::cin.getline(temp, 50);
	if (color != nullptr)
	{
		delete[] color;
	}
	color = new char[strlen(temp) + 1];
	strcpy_s(color, strlen(temp) + 1, temp);
	std::cout << "Enter year: ";
	std::cin >> year;
	std::cout << "Enter price: ";
	std::cin >> price;
}

void Car::Print()
{
	std::cout << "Model: " << model
		<< "\nColor: " << color
		<< "\nYear: " << year
		<< "\nPrice: " << price << '\n';
}

char* Car::GetModel()
{
	return model;
}

char* Car::GetColor()
{
	return color;
}

int Car::GetYear()
{
	return year;
}

double Car::GetPrice()
{
	return price;
}

void Car::SetModel(const char* a)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(a) + 1];
	strcpy_s(model, strlen(a) + 1, a);
}

void Car::SetColor(const char* a)
{
	if (color != nullptr)
	{
		delete[] color;
	}
	color = new char[strlen(a) + 1];
	strcpy_s(color, strlen(a) + 1, a);
}

void Car::SetYear(int a)
{
	year = a;
}

void Car::SetPrice(double a)
{
	price = a;
}

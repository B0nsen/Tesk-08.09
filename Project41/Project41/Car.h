#pragma once
class Car
{
private:
	char* model;
	char* color;
	int year;
	double price;
public:
	Car();
	Car(const char* m, const char* c, int y, double pr);
	~Car();
	void Input();
	void Print();
	char* GetModel();
	char* GetColor();
	int GetYear();
	double GetPrice();
	void SetModel(const char* a);
	void SetColor(const char* a);
	void SetYear(int a);
	void SetPrice(double a);
};


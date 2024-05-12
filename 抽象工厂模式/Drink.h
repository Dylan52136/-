#pragma once
#include <iostream>
#include <string>
class CDrink
{
public:
	CDrink();
	virtual ~CDrink();
	virtual void Show() = 0;
};

class CMilkTea : public CDrink
{
public:
private:
};


class CCoffee : public CDrink
{
public:

private:
};

class CChayanMilkTea : public CMilkTea
{
public:
	CChayanMilkTea()
	{

	}
	virtual ~CChayanMilkTea()
	{

	}
	void Show() override
	{
		std::cout << "I am Chayan Milktea\n";
	}
private:
};
class CChayanCoffee : public CCoffee
{
public:
	CChayanCoffee()
	{

	}
	virtual ~CChayanCoffee()
	{

	}
	void Show() override
	{
		std::cout << "I am Chayan Coffee\n";
	}
};

class CMixueMilkTea : public CMilkTea
{
public:
	void Show() override
	{
		std::cout << "I am Mixue Milktea\n";
	}
};

class CMixueCoffee : public CCoffee
{
public:
	void Show() override
	{
		std::cout << "I am Mixue Coffee\n";
	}
};
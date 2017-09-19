// practise.cpp:
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int  additive_1_9()
{
	int i = 50;
	int sum = 0;
	while (i <= 100) 
	{
		sum = sum + i++;
	}
	std::cout << sum << std::endl;
	return 0;
}
int printTentoZero_1_10()
{
	int i = 10;
	do 
	{
		std::cout << i-- << ",";
	} while (i);
	std::cout << std::endl;
	return 0;
}

int printBetweenEntered_1_11()
{
	int a, b;
	std::cout << "please enter one number:";
	std::cin >> a;
	std::cout << "please enter another number:";
	std::cin >> b;
	if (a > b)
	{
		while (a != b + 1)
		{
			std::cout << --a << ",";
		}
		std::cout << std::endl;
		return 0;
	}
	else 
	{
		do
		{
			std::cout << --b << ",";
		} while (a + 1 < b);
		std::cout << std::endl;
		return 0;
	}
}

int readAndAdd_1_16()
{
	int value = 0, sum = 0;
	std::cout << "please enter number:";
	while (std::cin >> value)
	{
		sum = sum + value;
	}
	std::cout << sum << std::endl;
	return 0;
}

int readAndCount_1_17() 
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal) 
	{
		int cnt = 1;
		while (std::cin>>val)
		{
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << "cocurs" << cnt << "times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << "cocurs" << cnt << "times" << std::endl;
	}
	return 0;
}
int exercise_3_2()
{
	string line;
	while(getline(cin,line))
		cout << line << endl;
	while(cin >> line)
		cout << line << endl;
	return 0;
}

int exercise_3_4()
{
	string a, b;
	cin >> a >> b;
	if (a == b)
	{
		cout << "same!" << endl;
	}
	else if(a > b)
	{
		cout << a;
	}
	else
	{
		cout << b;
	}

	if (a.length() == b.length())
	{
		cout << "same!" << endl;
	}
	else if (a.length() > b.length())
	{
		cout << a << endl;
	}
	else
	{
		cout << b << endl;
	}
	return 0;
}



int main()
{
	//additive_1_9();
	//printTentoZero_1_10();
	//printBetweenEntered_1_11();
	//readAndAdd_1_16();
	//readAndCount_1_17();
	//exercise_3_4();
	return 0;
}


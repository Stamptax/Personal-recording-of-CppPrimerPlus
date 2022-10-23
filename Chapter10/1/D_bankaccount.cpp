#include<iostream>
#include"bankaccount.h"

void bankaccount::set(string n, string an, double sum)
{
	name = n;
	accnum = an;
	m_sum = sum;
}

void bankaccount::fetch()
{
	cout << "\nname: " << name << endl
		<< "account number: " << accnum << endl
		<< "deposit: " << m_sum;
}

void bankaccount::save(double n)
{
	
	m_sum += n;
	cout << "Now your balance is : " << m_sum;
}

void bankaccount::withdraw(double n)
{
	if (n > m_sum)
	{
		cout << "\nFAILED, YOU CANNOT WITHDRAW MORE THAN YOU HAVE\n";
	}
	else
	{
		m_sum -= n;
		cout << "Now your balance is : " << m_sum;
	}
	
	
}

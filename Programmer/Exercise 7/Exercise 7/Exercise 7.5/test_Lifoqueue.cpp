#include <iostream>

using namespace std;

#include "Lifoqueue.h"
#include "Person.h"


void main()
{
	// test integer kø
	Lifoqueue<int> queue1;
	int number;

	for (int j = 0; j < 6; j++)
	{
		if (queue1.insert(j))
			cout << "Tallet " << j << " indsat i k\x9B." << endl;
		else
			cout << "K\x9B" << "en er fuld. Tallet " << j << " ikke indsat." << endl;
	}

	for (int k = 0; k < 6 && !queue1.isEmpty(); k++)
	{
		if (queue1.remove(number))
			cout << "Tallet " << number << " udtaget af k\x9B." << endl;
	}
	cout << "K\x9B" << "en er tom." << endl;

	// test char kø
	Lifoqueue<char> queue2;
	char character;

	for (int j = 0; j < 6; j++)
	{
		character = 97 + j;

		if (queue2.insert(character))
			cout << "Tegnet " << character << " indsat i k\x9B." << endl;
		else
			cout << "K\x9B" << "en er fuld. Tegnet " << character << " ikke indsat." << endl;
	}

	for (int k = 0; k < 6 && !queue2.isEmpty(); k++)
	{
		if (queue2.remove(character))
			cout << "Tegnet " << character << " udtaget af k\x9B." << endl;
	}
	cout << "K\x9B" << "en er tom." << endl;

	// test Person kø
	Lifoqueue<Person> queue3;
	Person p[6] = { Person("Bo Hald", 20), Person("Ib Hald", 24), Person("Pia Hald", 18),
					Person("Bo Hel", 40), Person("Ib Hel", 48), Person("Pia Hel", 36) };

	for (int j = 0; j < 6; j++)
	{
		if (queue3.insert(p[j]))
		{
			cout << "Personen ";
			p[j].print();
			cout << " indsat i k\x9B." << endl;
		}
		else
		{
			cout << "K\x9B" << "en er fuld. Personen ";
			p[j].print();
			cout << " ikke indsat." << endl;
		}
	}

	for (int k = 0; k < 6 && !queue3.isEmpty(); k++)
	{
		if (queue3.remove(p[k]))
		{
			cout << "Personen ";
			p[k].print();
			cout << " udtaget af k\x9B." << endl;
		}
	}
	cout << "K\x9B" << "en er tom." << endl;
}
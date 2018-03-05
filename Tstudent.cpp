#include "stdafx.h"
#include "Tstudent.h"


void Tstudent::setStudentsData()
{
	ifstream readOut("text.txt");
	if (!readOut)
	{
		string infoObj = "No file to open";
		throw infoObj;
	}
	readOut >> tableSize;

	table = new Tstudent[tableSize];

	for (int i = 0; i < 6; ++i) {
		readOut >> table[i].setName();
		readOut >> table[i].setSurname();
		readOut >> table[i].setIdNumer();
	}
}

void Tstudent::getOneStudentData() const
{

	int counter = 1;
	unsigned int i;

	while (counter == 1) {
		cout << "Which student show?\n";
		cin >> i;
		if (i < tableSize) {
			cout << table[i].getName() << '\t' << table[i].getSurname() << '\t' << table[i].getIdNumer() << endl << endl;
			counter--;
		}
		else
		{
			int ltableSize = tableSize;
			cout << "Only number from 0 to" << ltableSize - 1 << endl;
		}
	}
}

void Tstudent::getAllStudentsData() const
{
	for (int i = 0; i < tableSize; ++i) {
		cout << table[i].getName() << '\t' << table[i].getSurname() << '\t' << table[i].getIdNumer() << endl;
	}
}

void Tstudent::setOneStudentData()
{
	int counter = 1;
	unsigned int i;

	while (counter == 1) {
		cout << "Which persons set the data?\n" << endl;
		cin >> i;
		cout << "You`ve choosen Person " << i << endl;

		if (i < tableSize)
		{
			cout << "Enter the name\n";
			cin >> table[i].setName();
			cout << "Enter the surname\n";
			cin >> table[i].setSurname();
			cout << "Enter the Student ID nummer\n";
			cin >> table[i].setIdNumer();
			counter--;
		}
		else
		{
			int ltableSize = tableSize;
			cout << "Only number from 0 to" << ltableSize - 1 << endl;
		}
	}
}


void Tstudent::saveAllStudentsData()
{
	ofstream record("text.txt");
	if (!record) {
		string infoObj2 = "No file to open";
		throw infoObj2;
	}
	for (int i = 0; i < tableSize; ++i) {
		record << table[i].setName() << '\t';
		record << table[i].setSurname() << '\t';
		record << table[i].setIdNumer() << endl;

	}
}

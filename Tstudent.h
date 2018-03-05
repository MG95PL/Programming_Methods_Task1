#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
struct Tstudent
{
	std::string name, surname;
	int idNumer;
	Tstudent* table;
	int tableSize;

	std::string& setName() { return name; }
	std::string& setSurname() { return surname; }
	int& setIdNumer() { return idNumer; }

	const std::string& getName() const { return name; }
	const std::string& getSurname() const { return surname; }
	const int& getIdNumer() const { return idNumer; }


	void setStudentsData();
	void setOneStudentData();
	void getOneStudentData() const;
	void getAllStudentsData() const;
	void saveAllStudentsData();



};


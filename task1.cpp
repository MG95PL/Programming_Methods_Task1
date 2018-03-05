/*
*Task 1
*Define structure student (name, surname, student ID number).
*Create functions which able to get structs fields from file, print one of objects, print all objects,
*edit one of them and save all objects to file.
*
*/

#include "stdafx.h"
#include "Tstudent.h"

int main()
{
	Tstudent ob;

	try
	{
		ob.setStudentsData();
	}
	catch (string infoObj) { cout << infoObj; };

	ob.getOneStudentData();
	ob.getAllStudentsData();
	ob.setOneStudentData();

	try {
		ob.saveAllStudentsData();
	}
	catch (string infoObj2) { cout << infoObj2; }

	delete[] ob.table;
	ob.table = nullptr;

	system("pause");
	return 0;
}



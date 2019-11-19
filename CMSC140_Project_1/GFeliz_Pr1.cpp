/*
* Class: CMSC140 CRN 20780
* Instructor: Madhvi Shah
*  Project 1
* Description: Develop a program that calculates an employee’s total annual pay.
* Due Date: September 11, 2017
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Gabriel Feliz
*/

//Input:
// 1. Pay Amount
// 2. Total Pay Periods

//Output:
// 1. Display Employee Name 
// 2. Display Employee ID and Classification
// 3. Display Pay Amount
// 4. Display Number of Pay Periods
// 5. Display Annual Pay

//Process: (complete pseudo code/algorithm)
// 1. Multiply Pay Amount by Total Pay Periods
// 2. Store the value in Annual Pay

#include <iostream>
#include <string>
using namespace std;
int main()
{
	double payAmount = 914.98;
	int totalPayPeriods = 28;
	float annualPay = payAmount * totalPayPeriods;
	const string EMPLOYEE_FULLNAME = "David Jackson";
	const string EMPLOYEE_ID_CLASSIFICATION = "V5293558(N)";

	cout << "=================================" << endl;
	cout << "Employee Annual Pay" << endl;
	cout << "=================================" << endl;
	cout << " " << endl;
	cout << "Employee:		" << EMPLOYEE_FULLNAME << "	" << EMPLOYEE_ID_CLASSIFICATION << endl;
	cout << "Pay Amount:		" << payAmount << endl;
	cout << "Total Pay Periods:	" << totalPayPeriods << endl;
	cout << "Annual Pay:		" << annualPay << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "* Programmer: Gabriel Feliz" << endl;
	return 0;
}
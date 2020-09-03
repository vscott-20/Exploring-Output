/*
Viatris Scott
September 14, 2020
Lab 2 Exploring Output
Lab 2 C++ Programming
Description: This lab is designed to get you familiar output to the command propt using C++
*/

#include <iostream>
#include <string>

using namespace std;

const string Day1 = "Monday";   //days in the week
const string Day2 = "Tuesday";
const string Day3 = "Wednesday";
const string Day4 = "Thursday";
const string Day5 = "Friday";

const string First = "8:00";   //times
const string Second = "10:00";
const string Third = "1:00";
const string Fourth = "1:30";
const string Fifth = "2:15";
const string Sixth = "5:00";
const string Seventh = "4:00";
const string Eighth = "9:30"; 
const string Ninth = "3:15";

int main()
{

	cout << Day1 << " " << Second << "" << "Interpersonal Communication" << endl;
	cout << Day1 << " " << Fourth << " " << "C++" << endl;
	cout << Day1 << " " << Fifth << " " << "Weight lifting" << endl;
	cout << Day1 << " " << Sixth << " " << "Pratice" << endl;

	cout << Day2 << " " << First << " " << "Principles of Managment" << endl;
	cout << Day2 << " " << Second << " " << "Intro to Accounting" << endl;
	cout << Day2 << " " << Third << " " << "C++" << endl;
	cout << Day2 << " " << Sixth << " " << "Pratice" << endl;

	cout << Day3 << " " << Second << " " << "Interpersonal Communications" << endl;
	cout << Day3 << " " << Fifth << " " << "Weight lifting" << endl;
	cout << Day3 << " " << Ninth << " " << "Open gym" << endl;
	cout << Day3 << " " << Seventh << " " << "Study Hall" << endl;

	cout << Day4 << " " << Second << " " << "Into to Accounting" << endl;
	cout << Day4 << " " << Sixth << " " << "Pratice" << endl;
	
    cout << Day5 << " " << Sixth << " " << "Pratice" << endl;

	const string One = "*   *   *   *";  // star line
	const string Two = "  *   *   *   *";
	
		cout << One << endl; // lines of stars
		cout << Two << endl;
		cout << One << endl;
		cout << Two << endl;
		cout << One << endl;
		cout << Two << endl;
		cout << One << endl;
		cout << Two << endl;
	
		return 0;

 }





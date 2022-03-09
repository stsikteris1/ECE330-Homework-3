#include <iostream>
#include "heartRates.h"
using namespace std;

//Default 
HeartRates::HeartRates(){
	firstName = "N/A";
	lastName = "N/A";
	birthMonth = 0;
	birthDay = 0;
	birthYear = 0;
}

//Basic set & get(s)
void HeartRates::setFirstName(string fn){
	firstName = fn;
}
void HeartRates::setLastName(string ln){
	lastName = ln;
}
void HeartRates::setBirthMonth(int month){
	birthMonth = month;
}
void HeartRates::setBirthDay(int day){
	birthDay = day;
}
void HeartRates::setBirthYear(int year){
	birthYear = year;
}
string HeartRates::getFirstName() const
{
	return firstName;
}
string HeartRates::getLastName() const
{
	return lastName;
}
int HeartRates::getBirthMonth() const
{
	return birthMonth;
}
int HeartRates::getBirthDay() const
{
	return birthDay;
}
int HeartRates::getBirthYear() const
{
	return birthYear;
}

//Age Calculation

int HeartRates::getAge(){
	int age, month1, day1, year1;
	cout << "\nEnter Current Month (Numerical... Ex -> November = 11, etc.) : ";
	cin >> month1;
	cout << "\nEnter Current Day (Numercial) : ";
	cin >> day1;
	cout << "\nEnter Current Year : ";
	cin >> year1;

	//Need to calculate & make sure code can't return negative days, months, etc.
	if(getBirthMonth() > month1){
		age = year1 - getBirthYear() - 1;
	}
    if (getBirthMonth() < month1){
		age = year1 - getBirthYear();
	}
	if (getBirthMonth() == month1){
		if (getBirthDay() > day1 || getBirthDay() == day1){
			age = year1 - getBirthYear();
		}
		else{
			age = year1 - getBirthYear() - 1;
		}
	}
	return age;
}

int HeartRates::getMaxHeartRate(int age)
{
	int MaxHR = 220 - age;
	return MaxHR;
}
void HeartRates::getTargetHeartRate(int maxHR)
{
	cout << "\nTarget Heart Rate is between " << maxHR * 0.5 << " and " << maxHR * 0.85 << " BPM.\n";
}
void HeartRates::showHeartRates(int age) const
{
	int a = age;

	cout << "\nHello " << getFirstName() << " " << getLastName() << "\nYour Date of Birth is: " << "\n\tMonth: " << getBirthMonth() << "\n\tDay: " << getBirthDay() << "\n\tYear: " << getBirthYear() << "\n\tYou are " << a << " Years Old!";
	cout << "\nYour Max Heart Rate / Target Heart Rate is: " << endl;
}


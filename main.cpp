#include <iostream>
#include "heartRates.h"
using namespace std;
int main()
{
	//Setting Up
	string firstName, lastName;
	int d, m, y;
	HeartRates Patient1;
	//Info Stage
	cout << "What is your first name? : ";
	cin >> firstName;
	Patient1.setFirstName(firstName);
	cout << "What is your last name? : ";
	cin >> lastName;
	Patient1.setLastName(lastName);
	cout << "What Year were you born? : ";
	cin >> y;
	Patient1.setBirthYear(y);
	cout << "What Month were you born in? : ";
	cin >> m;
	Patient1.setBirthMonth(m);
	cout << "What Day were you born on? : ";
	cin >> d;
	Patient1.setBirthDay(d);
	int age = Patient1.getAge();
	int maxHR = Patient1.getMaxHeartRate(age);
	Patient1.showHeartRates(age);
	Patient1.getTargetHeartRate(maxHR);
	cout << "Your Max Heart Rate is: " << maxHR << endl;
	return 0;
}
	

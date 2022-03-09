#include <string>
class HeartRates
{
	public:
		explicit HeartRates();
		//First Name
		void setFirstName(std::string);
		std::string getFirstName() const;
		//Last Name
		void setLastName(std::string);
		std::string getLastName() const;
		//Date Of Birth
		void setBirthMonth(int);
		int getBirthMonth() const;
		void setBirthDay(int);
		int getBirthDay() const;
		void setBirthYear(int);
		int getBirthYear() const;
		//Age Calculator
		int getAge();
		//Max HR
		int getMaxHeartRate(int);
		//Target HR
		void getTargetHeartRate(int);
		// Show Heart Rate Calculations
		void showHeartRates(int) const;

	private:
		std::string firstName;
		std::string lastName;
		int birthMonth;
		int birthDay;
		int birthYear;
};

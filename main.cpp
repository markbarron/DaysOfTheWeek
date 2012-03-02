#include <iostream> 
#include <string>

using namespace std;

class DayOfTheWeek
{
	// These attributes are private by default
	string day;
	
public:
	// Default constructor
	DayOfTheWeek()
	{
		cout << "Current Status: Default Constructor being used." << endl;
		day = "Default Day";
	}// End of default constructor
	
	// Constructor
	DayOfTheWeek(string Day)
	{
		cout << "Current Status: Overloaded Constructor being used." << endl;
		day = Day;
	}// End of constructor
	
	void setDay(string Day)
	{
		day = Day;
	}// End of setDay
	
	void printDay()const
	{
		cout << day << endl;
	}// End of printDay
	
	string getDay()
	{
		return day;
	}// End of getDay
	
}; // End of class DayOfTheWeek

int main()
{
	// Remeber to put void main and take out the return
	// First instance of class DayOfTheWeek
	cout << "Here is an example of the first instance: " << endl;
	DayOfTheWeek firstInstance;
	cout << "The Default Constructor day attribute is: ";
	firstInstance.printDay();
	cout << endl << endl;
	cout << "Use the \"setDay\" method to set the day to \"Monday\": " << endl;
	firstInstance.setDay("Monday");
	cout << "The value of the firstInstance day attribute is now: " << firstInstance.getDay() << endl;
	cout << endl << endl;
	
	cout << "Here is an example of the second instance: " << endl;
	
	// Second instance of class DayOfTheWeek
	DayOfTheWeek secondInstance("Tuesday");
	cout << "The value of the secondInstance day attribute is now: " << secondInstance.getDay() << endl;
	cout << "The value of the day attribute is now: ";
	secondInstance.printDay();
	// system("pause");
	return 0;
} // End of main
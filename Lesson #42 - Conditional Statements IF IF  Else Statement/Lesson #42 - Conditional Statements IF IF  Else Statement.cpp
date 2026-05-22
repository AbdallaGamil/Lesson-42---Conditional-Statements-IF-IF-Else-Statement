#include <iostream>
using namespace std;
struct strDriverInfo
{
	int Age;
	bool driver_license;
};
void Read_Driver_Info(strDriverInfo& Info)
{
	cout << "\n---------------------------\n";
	cout << "please enter your Age?\n";
	cin >> Info.Age;
	cout << "Are you have a Driver license?\n";
	cin >> Info.driver_license;
}
void Print_Submission_result(strDriverInfo Info)
{
	if (Info.Age >= 21 && Info.driver_license == true)
	{
		cout << "\n----------------\n\"Hierd\"\n----------------\n";
	}
	else
	{
		cout << "\n----------------\n\"Rejected\"\n----------------\n";
	}
}
void Read_Drivers_App(strDriverInfo Person[])
{
	Read_Driver_Info(Person[0]);
	Read_Driver_Info(Person[1]);
}
void Print_Submissions_result(strDriverInfo Person[])
{
	Print_Submission_result(Person[0]);
	Print_Submission_result(Person[1]);
}
int main()
{
	strDriverInfo Person[2];
	Read_Drivers_App(Person);
	Print_Submissions_result(Person);


	return 0;
}
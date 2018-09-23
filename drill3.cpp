#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS 1
#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
	string first_name; 
	cin >> first_name; 
	
	cout << "Enter one of your friend's name:\n";
	string friend_name;
	cin >> friend_name;

	cout << "If your friend is a male, please type 'm', if female, type 'f'. \n";
	char friend_sex = 0;
	cin >> friend_sex;

	cout << "How old is your friend?\n";
	int age;
	cin >> age;
	
	cout << "Dear " << first_name <<  ",\n";
	cout << "How are you? I am fine. I miss you.\n";
	cout << "I hope you're doing well!\n";
	cout << "Have you seen " << friend_name << " lately?\n";
	

	if (friend_sex=='m')
	
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	
	else if (friend_sex == 'f')
	
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	
	
	if (age <= 0 || age >= 110)
	
		simple_error("you're kidding!");
	
	else cout << "I hear you just had a birthday and you are " << age << " years old.\n";
		
	if (age < 12)
		cout << "Next year you will be " << age+1 << ".\n";

	else if (age == 17)
		cout << "Next year you will be able to vote.\n";

	else if (age > 70)
		cout << "I hope you're enjoying retirement.\n";

	cout << "Yours sincerely, \n\n\n";
	cout << "Viktor \n";
	keep_window_open();
		return 0;
}
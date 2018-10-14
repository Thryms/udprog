#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS 1
#include "std_lib_facilities.h"

int main() {
	bool init = true;
	const double m_cm = 100, in_cm = 2.54, ft_in = 12;
	double small, large, total = 0.0, a;
	string unit;
	vector<double> values;

	cout << "Enter a number with an appropriate unit (such as 25m, 50in, 20cm, 5ft)\n";

	while (cin >> a >> unit) {

		cout << a << unit << "\n";
		if (unit == "m")
			a = a;
		else if (unit == "cm")
			a = a / m_cm;
		else if (unit == "in")
			a = in_cm * a / m_cm;
		else if (unit == "ft")
			a = ft_in * in_cm*a / m_cm;
		else {
			cout << "Invalid unit - try again\n";
			unit = "???";
		}
		values.push_back(a);
		total += a;
		if (init) {
			small = a;
			large = a;
			init = false;
		}
		else if (a < small) {
			cout << "The smallest so far\n";
			small = a;
		}
		else if (a > large) {
			cout << "The largest so far\n";
			large = a;
		}
	}
	cout << "Smallest: " << small << "m" ", largest: " << large << "m"
		", total: " << total << "m\n";
	sort(values.begin(), values.end());
	cout << "Values: \n";
	for (int i = 0; i < values.size(); ++i)
		cout << values[i] << "m \n";
	
	return 0;
}
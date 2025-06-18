#include <iostream>
using namespace std;
int main() {
	double ans = 0; double total_credits = 0;
	for (int i = 0; i < 20; i++) {
		string temp; double credits; string grade;
		cin >> temp >> credits >> grade;
		total_credits += credits;
		if (grade == "A+") ans += (credits * 4.5);
		else if (grade == "A0") ans += (credits * 4);
		else if (grade == "B+") ans += (credits * 3.5);
		else if (grade == "B0") ans += (credits * 3);
		else if (grade == "C+") ans += (credits * 2.5);
		else if (grade == "C0") ans += (credits * 2);
		else if (grade == "D+") ans += (credits * 1.5);
		else if (grade == "D0") ans += (credits * 1);
		else if (grade == "P") total_credits -= credits;
	}
	cout.precision(5);
	cout << ans / total_credits;
	return 0;
}
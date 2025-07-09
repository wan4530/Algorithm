#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n, n_3;
vector <char> str;
int cnt;
void erase(int n, int s){
	int s1, s2;
	if (n > 0){
		n--;
		int eraseNum = pow(3, n);
		for (int i = 0; i < eraseNum; i++)
			str[s + eraseNum + i] = ' ';
		s1 = s;
		s2 = s + 2 * eraseNum;
		erase(n, s1);
		erase(n, s2);
	}
}
int main(){
	while (cin >> n){
		n_3 = pow(3, n);
		for (int i = 0; i < n_3; i++)
			str.push_back('-');
		erase(n, 0);
		for (int i = 0; i < n_3; i++)
			cout << str[i];
		str.clear();
		cout << "\n";
	}
	return 0;
}
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
	sort(s.rbegin(), s.rend());
	return s;
}

int main() {
	cout<<solution("Zbcdefg");
}

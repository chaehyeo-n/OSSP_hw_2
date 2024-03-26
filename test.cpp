#include <iostream>
using namespace std;

int main()
{
	string name, number, team;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> number;
	cout << "팀 이름을 입력하세요: ";
	cin >> team;
	
	cout << endl << "<출력>" << endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << number << endl;
	cout << "팀 이름: " << team << endl;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string s;
	string s1;
	char name1[30];
	char name2[30];
	string s2;
	cin >>name1;
	cin >>name2;
	ifstream file1(name1);
	ofstream file2(name2);

//	file1.open(name1);
//	file2.open(name2);
	getline(file1, s, ' ');
	file2 << s << ' ';
	while (!file1.eof()){
		getline(file1, s1, ' ');
		if (s!=s1){
			file2 << s1 << ' ';
		s=s1;
		}
	}
	file1.close();
	file2.close();
	return 0;
}

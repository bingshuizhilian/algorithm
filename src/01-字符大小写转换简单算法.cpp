#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int, char**)
{
	string s = "BaSiC";

	cout << s << endl;

	//全部转换为小写
	for (auto &it : s)
		it |= 0x20;

	cout << s << endl;

	//全部转换为大写
	s = "BaSiC";
	for (auto &it : s)
		it &= ~0x20;

	cout << s << endl;

	//大小写全部翻转
	s = "BaSiC";
	for (auto &it : s)
		it ^= 0x20;

	cout << s << endl;

	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int, char**)
{
	string s = "BaSiC";

	cout << s << endl;

	//ȫ��ת��ΪСд
	for (auto &it : s)
		it |= 0x20;

	cout << s << endl;

	//ȫ��ת��Ϊ��д
	s = "BaSiC";
	for (auto &it : s)
		it &= ~0x20;

	cout << s << endl;

	//��Сдȫ����ת
	s = "BaSiC";
	for (auto &it : s)
		it ^= 0x20;

	cout << s << endl;

	return 0;
}
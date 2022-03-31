//���� ������� �����, ���� ������ ����������� ������� s0, ..., sn, ... .
//1. ϳ��������� ������� �������� ������� �� ������� � + �, � - �, � = � � ����������� s1, ..., sn.
//����� ������� � �������� ����� - ������������ ��������� ��� ����� char[]

#include <iostream>
using namespace std;
int Count(char* s, const char* cs)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strpbrk(s + pos, cs))
	{
		pos = t - s + 1;
		k++;
	}
	return k;
}


int main()
{
	char s[30] = "S1,...,Sn";
	char cs[] = "+""-""=";
	cout << Count(s, cs) << endl;
	return 0;
}
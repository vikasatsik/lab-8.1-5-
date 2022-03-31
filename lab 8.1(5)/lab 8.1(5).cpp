//ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s0, ..., sn, ... .
//1. ѕ≥драхувати к≥льк≥сть входжень кожного ≥з символ≥в У + Ф, У - Ф, У = Ф в посл≥довн≥сть s1, ..., sn.
//ѕошук символ≥в у л≥терному р€дку - стандартними функц≥€ми дл€ р€дк≥в char[]

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
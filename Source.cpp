#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	char* p;
	char s[200];
	int i = 0;
	ifstream f("plm.txt");
	ofstream g("clsidt.txt");
	while (f.getline(s, 200))
	{
		p = strtok(s, "(");
		g << p << " = " << i << "," << endl;
		i++;
	}
	f.close();
	g.close();

	return 0;
}

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
	ifstream f("<txt file with class ids>.txt");
	ofstream g("clsid.txt");
	while (f.getline(s, 200))//read every line in the char while true
	{
		p = strtok(s, "(");//get every character from the start to our delimiter "("
		g << p << " = " << i << "," << endl;
		i++;
	}
	f.close();
	g.close();

	return 0;
}

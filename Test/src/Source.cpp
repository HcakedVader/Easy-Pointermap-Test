#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleTitle(("Pointermap Test (Look for 'X' in CheatEngine)"));
	string start;
	int x = 5;
	int y = 5;
	do
	{
		if (GetAsyncKeyState(VK_RETURN))
		{
			while (1)
			{
				x++;
				cout << x << endl;
				getchar();
			}
		}
	} while (x >= 0);
	return 0;
}
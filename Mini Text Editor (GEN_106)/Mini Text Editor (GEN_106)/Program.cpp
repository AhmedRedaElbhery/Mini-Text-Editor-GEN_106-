#include "Program.h"
#include <iostream>
using namespace std;

file::file()
{
	size = 5;
	element = 0;
	arr = new string[size];
}

void file::AddLine(string l)
{
	if (element == size)
	{
		Expand();
	}
	else
	{
		arr[element] = l;
		element++;
	}
}

void file::InsertLine(int i, string l)
{
	if (element = size)
	{
		Expand();
	}
	else
	{
		for (int g = element; g > i; g--)
		{
			arr[g] = arr[g - 1];
		}
		element++;
	}
}

string file::GetLineText(int i)
{
	return arr[i];
}

void file::DeleteLine()
{
	int i;
	cout << "please enter number : " << endl;
	cin >> i;
	if (element != 0)
	{
		if (i >= 1 && i <= size)
		{
			for (int g = i; g <= element - 1; g++)
			{
				arr[g] = arr[g + 1];
			}
			element--;
			cout << "The line is deleted";

		}
		else
		{
			cout << "line number out of range";
		}
	}
	else
	cout << "Text File is empty";
}

void file::UpdateLine(int i, string l)
{
	cin >> l;
	arr[i] = l;
}

void file::FindAll()
{
}

void file::Findandreplace(string s1, string s2)
{
}

void file::Show()
{

}

void file::Expand()
{
	string* tmp = new string[size * 2];
	for (int i = 0 ; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	size = size * 2;
	delete arr;
	arr = tmp;
}

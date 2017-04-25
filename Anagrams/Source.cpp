#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <ctype.h>

using namespace std;

int main(int argc, char* argv[])
{
	//open file
	if (argc < 2)
	{
		cout << " First argument must be a file name." << endl;
	}
	
	else
	{
		ifstream f(argc[1]);

		if (!f)
		{
			cout << "failed to open: " << argv[1] << endl;
		}

		else
		{
			string s;
			while (getline(f, s))
			{
				unordered_map<char, int> m;
				for (size_t i = 0; i < s.size(); i++)
				{
					char c = s[i];
					//process if letter or question mark
					if (isalpha(s[i]) || s[i] == '?')
					{
						//this is a good character or a ?
						if (c == '?')
						{
							delta = -1;
							continue;
						}
						//now we know it is a character --> make sure it is lower case
						{
							c = tolower(c);
							m[c] += delta;
						}
						
					}
				}
			}
			f.close();
		}
	}
	
#if defined(WIN 32)
	system("pause");
#endif
	return 0;
	
	//
	//string s;
	//ifstream f;
	//f.open("C:\Users\Kai Cromwell\Documents\Visual Studio 2013\Projects\Anagrams\Anagrams.docx");

	//if (f.is_open())
	//{
	//	while (getline(f, s))
	//		cout << s << endl;
	//}
	//
	////for every line
	//	//for every character in line
	//		//skip if not a letter
	//		//make lower case

	//#if defined(WIN32)
	//	system("pause");
	//#endif
	//	return 0;
}
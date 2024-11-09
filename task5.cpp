#include<iostream>
using namespace std;
main()
{
bool result;
string input[5];
cout << "Enter 4 string values, each on single line: ";
for(int i=0; i<4; i++)
{
cin >> input[i];
}
if(input[0] == input[1] && input[1] == input[2] && input[2] == input[3] && input[3] == input[0])
{
	result = true;
}
else
{
	result = false;
}

cout << result;
}

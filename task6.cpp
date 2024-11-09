#include<iostream>
using namespace std;
main()
{
	int arr[3];
	cout << "Enter a 3 digit array: ";
	for(int i=0; i<3; i++)
	cin >> arr[i];
	int num;
	cout << "Enter number of times even-odd transformation need to be done: ";
	cin >> num;
	for(int idx=0; idx<num; idx++)
	{
	   for(int x=0; x<3; x++)
           {
	if(arr[idx] % 2 == 0)
	{
	 arr[idx]-=2;
	}
	else
	{
	arr[idx]+=2;
	}
            }
        }	
	   for(int j=0;j<3;j++)
           {
             cout << arr[j] << ",";
           }
}
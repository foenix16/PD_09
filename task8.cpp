#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the number of colors: ";
    cin >> size;
    string color[size];
    string previous;
    int count = 0;
    cout << "Enter the colors: ";
    for(int i=0 ; i<size; i++)
    {
       cin >> color[i];
      
       if(previous != color[i])
       {
          count ++;
       }
       previous = color[i];
    }
    int totalTime= (size*2) + (count - 1);
    cout << "The Total Time is: " << totalTime;
}

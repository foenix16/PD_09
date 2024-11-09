#include<iostream>
using namespace std;
main()
{
string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
int price=500;
string name;
cout << "Enter movie name : ";
cin >> name;
int count;
for(int i=0; i<5; i++)
{
    if(name==movies[i])
    { 
      count == i;
      break;
    }
}

cout << count << endl;
float discount;
if(count % 2 != 0)
{
discount= price*0.95;
}
else if(count % 2 == 0)
{
discount = price*0.90;
}

cout << "The discounted price is: "<< discount;
} 

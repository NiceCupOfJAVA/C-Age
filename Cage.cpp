#include <iostream>
using namespace std; 

int main()
{
    int age; //Current age
    int year; //Current year
    int num; //Number of years advanced or reversed
  
    cout << "How old are you? ";
    cin >> age; //User puts in current age
    cout << "What is the year? ";
    cin >> year; //User puts in current year
    cout << "How far would you like to advance or reverse time? ";
    cin >> num; //User puts in number of years that will be advanced, can use a negative (-) to reverse time too
   { 
    if (num > 0) // If time is advanced
        cout << "Cool! You'll be " << age+num << " in the year " << year+num<< "!" << endl;
    else if (num == -age) //If time reversed is equal to current age
        cout << "You where born in " << year-age << "!" << endl;
    else if (num <0) // And If time is reversed
        cout << "You where " << age+num << " years from being born in " << year+num<< "!" << endl;
    else 
       cout << "Hmmm. Somethings wrong here."; //Just in case I screw something up, thats what else statments are for right?
   }
    cout << "(" << num << " years.)"; //Outputs the Number of Years Advanced or Devanced
    return 0;
}

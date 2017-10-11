#include <iostream>
using namespace std;

int main()
{
    int age;
    int year;
    int num;
    
    cout << "How old are you? ";
    cin >> age;
    cout << "What is the year? ";
    cin >> year;
    cout << "How far would you like to advance time? ";
    cin >> num;
   { 
    if (num > 0)
        cout << "Cool! You'll be " << age+num << " in the year " << year+num<< "!" << endl;
    else if (num == -age)
        cout << "You where born in " << year-age << "!" << endl;
    else if (num <0)
        cout << "You where " << age+num << " years from being born in " << year+num<< "!" << endl;
    else 
       cout << "Hmmm. Somethings wrong here.";
   }
    cout << "(" << num << " years.)";
    return 0;
}

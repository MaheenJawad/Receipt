#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() 
{
  string item1, item2, item3, item4;
  double price1, price2, price3, price4;
  double total;

  
  cout << "Enter names of 4 one-word items to purchase: ";
  cin  >> item1 >> item2 >> item3 >> item4;
  
  cout << "Enter their prices in US Dollars (<= 1,000): ";
  cin >> price1;
  cin >> price2;
  cin >> price3;
  cin >> price4;

  total = price1 + price2 + price3 + price4;

  cout << "+----------------------+-------------------+" << endl;
  cout << "|                   Receipt                |" << endl;
  cout << "+----------------------+-------------------+" << endl;
  cout << "|" << setw(22) << left << item1 << "|$" << setw(18) << right << fixed << setprecision(2) << price1 << "|" << endl;
  cout << "|" << setw(22) << left << item2 << "|$" << setw(18) << right << fixed << setprecision(2) << price2 << "|" << endl;
  cout << "|" << setw(22) << left << item3 << "|$" << setw(18) << right << fixed << setprecision(2) << price3 << "|" << endl;
  cout << "|" << setw(22) << left << item4 << "|$" << setw(18) << right << fixed << setprecision(2) << price4 << "|" << endl;


  cout << "+----------------------+-------------------+" << endl;
  cout << "|Total:  $" << setw(33) << total << "|" << endl;
  cout << "+----------------------+-------------------+" << endl;
}

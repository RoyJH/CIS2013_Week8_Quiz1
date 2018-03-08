#include <iostream>
#include <cmath>

using namespace std;

//int quarter = 25;
//int dime = 10;
//int nickel = 5;
//int penny = 1;
int total (int q, int d, int n, int p, int cents);
int cents;
int q;
int d;
int n;
int p;

int main (){

cout << "Enter an amount of cents: ";
cin >> cents;
cout << endl;
total(q, d, n, p);
cout << "The total amount of coins is:"<<endl;
cout << q << " Quarters\n";
cout << d << " Dimes\n";
cout << n << " Nickels\n";
cout << p << " Pennies\n";
return 0;
}

int total(int q, int d, int n, int p, int cents){
if (cents >= 25){
 q=cents/25;
 cents = cents%25;
 return q;
}
 else if (cents >= 10) {
  d=cents/10;
  cents = cents%10;
  return d;
 }
else if (cents >= 5) {
  d=cents/5;
  cents = cents%5;
  return n;
 }
 else if (cents >= 1) {
  d=cents/1;
  cents = cents%1;
  return p;
 }
return q, d, n, p;
}
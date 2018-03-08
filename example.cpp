#include <iostream>
using namespace std;

int findQuarters (int x) {
	return (x/25);
}
int findDimes (int x) {
	return (x/10);
}
int findNickels(int x) {
	return (x/5);
}

int main (){
	int change =0;
	
	cout << "Enter the amount of change you want: ";
	cin >> change;
	
	cout << "You would have " << findQuarters(change) << "quarter(s)" << endl;
	cout << "You would have " << findDimes(change) << "dime(s)" << endl;
	cout << "You would have " << findNickels(change) << "nickels(s)" << endl;
	cout << "and " << (((change %25)%10)%5) << "penny(s)" << endl;
	return 0;
}
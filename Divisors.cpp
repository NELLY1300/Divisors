

#include <iostream>
#include <vector>
using namespace std;



void printdivisors(int n) {
	vector<int> divisors;
	for (int i = 1; i<= n; ++i){
		if (n % i == 0) {
			divisors.push_back(i);
		}
	}
	
	
	
	for (int i = divisors.size()-1; i >= 0; --i){
		cout <<divisors[i]<< endl;
	}
}

/*
void printdivisors(int n) {
	cout << n <<endl;
	
	for  (int i = n / 2; i>=1; i--){
		if (n % i == 0) {
			cout  << i << endl;
		}
	}
}


*/





int main() {
	cout << "This program is designed to exhibit the postive divisors of positive integers supplied by you." <<endl;
	cout << "The program will repeatedly prompt you to enter apositve integer." <<endl;
	cout << "Each time you enter apositive integer, the porgram will print all adivisors of your integer in column and in decreasing order." <<endl;
	int n;
		if (true) {
			
			cout  <<"please enter apositive integer: ";
			cin  >> n;
}
	
				while (n <= 0)  {
						cout  << n << "is not apositive integer. " <<endl;
						cout  <<"please enter apositive integer: ";
						cin  >>n;
				}



for  (int i = n; i > 0; i--){
	if (n % i == 0){cout  <<i <<endl;
	}
}

char choice;
cout  <<"Would you like to see the divisors of another integer (Y/N)? ";
cin  >>choice;

	while (choice != 'Y' && choice != 'y' &&choice != 'N' && choice != 'n'){
		cout   <<"please respond with Y (or y) for yes and N (for n) for no." <<endl;
		cout   <<"would you like to see the adivisors of another integer (Y/N)? " <<endl;
		cin  >> choice;
	}
	
	if  (choice == 'N' || choice  == 'n'){
	
	
	cout  <<"Thanks you for using the program! "  <<endl;
	
	
}
	if (choice == 'Y'  || choice  == 'y'){
		cout <<"please enter apositive integer: ";
		cin>>n;
		
		
		while (n <= 0)  {
						cout  << n << "is not apositive integer. " <<endl;
						cout  <<"please enter apositive integer: ";
						cin  >>n;
}


	}
						
	
	

	
	
	
			return 0;




}






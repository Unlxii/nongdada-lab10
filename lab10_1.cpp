#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double a,b,c;
	cout << "Enter initial loan: ";
	cin >> a;
	cout << "Enter interest rate per year (%): ";
	cin >> b;
	cout << "Enter amount you can pay per year: ";
	cin >> c;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	int EndOfYear = 1;
	double sum ;
	do{
	cout << setw(13) << left << EndOfYear ;
	cout << setw(13) << left << a ;
	double Interest =a*(b/100);
	cout << setw(13) << left << Interest ;
	double total = a + Interest;
	cout << setw(13) << left << total ;
	if(total > c){
		cout << setw(13) << left << c ;
	}else{
		c = total;
		cout << setw(13) << left << c ;
	}
	double NewBalance = total-c;
	cout << setw(13) << left << NewBalance ;
	a = NewBalance;
	sum = NewBalance;
	cout << "\n";	
	EndOfYear ++;
	}while(sum>0);
	return 0;
}

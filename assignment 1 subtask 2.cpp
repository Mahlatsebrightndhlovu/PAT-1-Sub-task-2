#include <iostream>
using namespace std;

int main(){
	int temp1, temp2, temp3;
	
	cout<<"Enter the first temperature reading:";
	cin>> temp1;
	
	cout<<"Enter the second temperature reading:";
	cin>> temp2;
	
	if(temp2 - temp1 > 50){
		cout<<"Reduce Fryer heat before taking third reading.\n";
	}
	if(temp2 - temp1 <10){
		cout<<"Increase the Fryer heat before taking third reading.\n";
	}
	cout<<"Enter the third temperature reading:";
	cin>> temp3;
	
	if(temp3 >= 150 && temp3 <= 190){
		cout<<"You may start Frying the Mangwinyas.\n";
	} else {
		cout<<"Oil is not ready for frying!\n";
	}
	return 0;
}
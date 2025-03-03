#include <iostream>
#include <bitset>
using namespace std;

void decimalToBinary(int decimal){
	if(decimal <0) {
		cout<<"Please enter a positive number!"<< endl;
		return;
	}
	cout<<"Binary representation:"<<
	bitset<16>(decimal)<< endl;
}

void binaryToDecimal(string binary){
	int decimal = stoi(binary, nullptr, 2);
	cout<<"Decimal representation:"<< decimal << endl;
}

int main(){
	int choice;
	cout<<"Conversion Menu:\n";
	cout<<"1. Decimal to Binary\n";
	cout<<"2. Binary to Decimal\n";
	cout<<"Enter your choice (1 or 2):";
	cin>>choice;
	
	if(choice == 1){
		int decimal;
		cout<<"Enter a decimal number:";
		cin>>decimal;
		decimalToBinary(decimal);
	}
	else if(choice == 2){
		string binary;
		cout<<"Enter a binary number:";
		cin>>binary;
		binaryToDecimal(binary);
	}
	else{
		cout<<"Invalid choice! please enter 1 or 2."<< endl;
	}
	return 0;
}
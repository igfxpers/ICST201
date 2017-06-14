#include<iostream>

using namespace std;

//function prototypes
void Switch(int &v1, int &v2);
double getArrAve(int array[10]);
void choices(signed int x);

int main(){
//Review on functions (call by value)
	LOOP: signed int input;
	
	char c1;
	
	cout << "Input: ";
	cin>> input;
	
	choices(input);
	
	cout << "Retry(Y/N)? ";
	cin >> c1;
	
	if (c1 == 'Y' || c1 == 'y')
		goto LOOP;
// review on functions (call by referrence)	

	int varPassRef1, varPassRef2;
		cout << "\n\n\nInputfor varPassRef 1 and 2: ";
	cin >> varPassRef1 >> varPassRef2;
		cout << "\nValues: " << varPassRef1 << " " << varPassRef2 << endl;
	//function call
	Switch(varPassRef1,varPassRef2);
	//output
		cout << "\nvarPassRef1:  " << varPassRef1 << "\nvarPassRef2: " << varPassRef2 << endl << endl;
// review on functions(array parameters)
	
	int array[10]; double average;
	//automation of inputs
	for(int counter = 0; counter < 10; counter++)
		array[counter] = counter + 1;
	// average will recieve what the function returns
	average = getArrAve(array);
	//output of array and the value of average
	cout <<  "Array elements: ";
	for(int counter = 0; counter < 10; counter++)
		cout << array[counter] << " ";
	cout << "\n\nAverage: " << average << endl << endl; 
	
// review on Arrays (one dimensional)

	char CharArray[] = {'a','b','c','d','e',};
	//output the elements of the array
	for(int c = 0;c < 5; c++)
		cout << CharArray[c] << " ";
	cout << endl;
// review on Arrays (two dimensional)
	int Array2D[5][5];
	//inserting values to the array
	for(int row = 0; row < 5; row++)
		for(int col = 0; col < 5; col++)
			Array2D[row][col] = ((row + 1) * (col * 5));
	//output the array
	for(int row = 0; row < 5; row++){
		for(int col = 0; col < 5; col++)
			cout << Array2D[row][col] << " ";
		cout << endl;
	}

// review on pointers
	
	//declaration of pointer
	string * Pointer;
	string A = "Hello World!";
	//output the address of the variable "A"
	cout << endl << &A << endl <<endl;
	//assigning the address of A to Pointer
	Pointer = &A;
	//output the address of A and the address stored in the pointer
	cout << &A  << " " << Pointer<< endl <<endl;
	//accessing the value of A through pointer
	cout << *Pointer << endl << endl;
	



	return 0;
}

void Switch(int &v1, int &v2){
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}

double getArrAve(int array[10]){
	double avg, sum = 0;
	for(int c = 0; c < 10; c++)
		sum = sum + array[c];
	//cout << sum <<endl;
	avg = sum / 10;
	
	return avg;
}

void choices(signed int x){
	
		if(x == 0)
			cout << "Enrollment\n";
		else if(x > 0)
			cout << "Classes Begin\n";
		else if (x < 0)
			cout << "Submission of Requirements\n";	
}

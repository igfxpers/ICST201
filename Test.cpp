
#include<iostream>
#include <cstdlib>

using namespace std;

#include "List.h"

int main(){
	//Test class constructor
	List intList;
	cout << "Constructing intList" << endl;
	
	//Test empty and output of empty list
	if(intList.empty())
		cout << "Empty List: \n" << intList << endl;
	
	//Test for Insert
	for(int i= 0; i < 9; i++){
		cout << "Inserting " << i << " at position " << i/2 << endl;
		intList.insert(i, i/2);		//insert i at position i/2
		//test output
		cout << intList << endl;
	}
	
	cout << "List Empty? " <<(intList.empty() ? "yes":"no") << endl;
	cout << "\nTry to insert at pos -1" << endl;
	intList.insert(0,-1);
	cout << "\nTry to insert at pos 10" << endl;
	intList.insert(0,10);
	
	//test erase()
	int index;
	
	cout << endl;
	while(!intList.empty()){
		cout << "Give an Index to remove: ";
		cin >> index;
		intList.erase(index);
		cout << intList << endl;
	}
	
	cout << "List empty" << endl;
	
	cout << "\nInserting "<< CAPACITY << " intigers\n";
	for(int i = 0; i < CAPACITY; i++)
		intList.insert(i,i);
	cout << "Attempting to insert one or more integer:\n";
	intList.insert(0, -1);
	
	return 0;
	
}

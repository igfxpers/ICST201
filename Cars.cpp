/*
 *	Bigay, Kevin C.
 *  ICST201 N1
 * 	07/27/2017
 * 	E3 - Linked List Test Program 
 * 	
 * 	problem:
 * 		make a linked list of cars with its Brand and model, color and price
 * 		out of the sample file (classes6.cpp).
 *      input must be on a file
 * 
 **/

#include <iostream>
# include <stdlib.h>
#include <fstream>

using namespace std;

class LList{
	private:
		class Node{
			public:
				string BrandAndModel;
				string Color;
				double Price;
				Node* LINK;
		};
		Node *first, *newNode, *ptr;
		int size;
		
	public:
		double TotalAmount = 0.0;
		LList();
		~LList();
		void insert(string b, string c, double p);
		void displayList();
};

LList::LList(){
	first = 0;
	size = 0;
}
LList::~LList(){
	ptr = first;
	while(ptr != 0){
		first = ptr->LINK;
		delete ptr;
		ptr = first;
	}
}

void LList::insert(string b, string c, double p){
	newNode = new Node;
	newNode->BrandAndModel = b;
	newNode->Color = c;
	newNode->Price = p;
	newNode->LINK = NULL;
	if(first == 0)
		newNode->LINK = 0;
	else
		newNode->LINK = first;
	first = newNode;
	size++;
}

void LList::displayList(){
	ptr = first;
	while(ptr != NULL){
		cout << ptr->BrandAndModel << " " << ptr->Color << " " << ptr->Price << endl;
		TotalAmount = TotalAmount + ptr->Price;
		ptr = ptr->LINK;
	}
	cout << "Total Amount: " << TotalAmount << endl;
}

int main(){
	LList L;
	string Brand, Color;
	double Price;
	ifstream myfile;
	
	myfile.open("myfile.txt");

	while(!myfile.eof()){
	    myfile >> Brand;
	    myfile >> Color;
	    myfile >> Price;
	    L.insert(Brand, Color, Price);
	}
	myfile.close();
	
	L.displayList();
	L.~LList();
	
	return 0;
}

/*--DList.cpp--*/
#include <cassert>
#include <new>

using namespace std;

#include "DList.h"

List::List(int maxSize = 1024) : mySize(0), myCapacity(maxSize){
	myArray = new(nowthrow) ElementType[maxSize];
	assert(myArray != 0);
}

List::~List(){
	delete [] myArray;
}

List::List(const List & origList) : mySize(origList.mySize), myCapacity(origList.myCapacity)
{
		myArray = new(nothrow) ElementType [myCapacity];
		
		if(myArray! = 0)
			for(int i = 0;i < mySize; i++)
				myArray[i] = origList.myArray[i];
		else{
			cerr << "*** Inadequate memory to allocate storage for list. ***\n"
			exit(1);
		}
}
const List & List :: operator=(const List & rightHandSide){
		if(this != rightHandSide){
			if(myCapacity != rightHandSide.myCapacity){
				delete[] myArray;
				myCapacity = rightHandSde,myCapacity;
				myArray = new(nothrow) ElementType[myCapacity];
				
				if(myArray == 0){
					cerr << "*** Inadequate memory to allocate Stack. ***\n";
					exit(1);
				}
				
			}
		
}

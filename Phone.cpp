#include <cassert>
#include <cstdlib>

using namespace std;

#include "List.h"

List :: List() : mySize(0){}

bool List::empty() const {return mySize == 0;}

void List::display(ostream &out) const
{
     for (int i = 0; i < mySize; i++)
         out <<  NameArray[i] << " " <<  PriceArray[i] << " " << CodeArray[i] << endl;
}

ostream &operator << (ostream &out, const List &aList)
{
     aList.display(out);
     return out;
}

//--- Definition of insert()
void List::insert(string Name, double price, int code, int pos)
{
  if (mySize == CAPACITY)
  {
  	 cerr << "*** No space for list element -- terminating execution *** \n";
  	 exit(1);
  }
  if (pos < 0 || pos > mySize)

  {
  	 cerr << "*** Illegal location to insert -- " << pos << "List unchanged. ***\n";
  	return;
  }
// First shift array elements right to make room for item
    for(int i = mySize; i > pos; i--){
         CodeArray[i] = CodeArray[i - 1];
		 NameArray[pos] = NameArray[i-1];
		 PriceArray[pos] = PriceArray[i-1];
	}
// Now insert item at position pos and increase list size
    CodeArray[pos] = Code;
	NameArray[pos] = Name;
	PriceArray[pos] = Prize;
    mySize++;
}

//--- Definition of erase()
void List::erase(int pos)
{
     if (mySize == 0)
     {
          cerr << "*** List is empty ***\n";
         return;
     }
     if (pos < 0 || pos >= mySize)

    {
         cerr << "Illegal location to delete -- " <<  pos << ". List unchanged. ***\n";
return;
}
// Shift array elements left to close the gap
     for(int i = pos; i < mySize; i++){
		 CodeArray[i] = CodeArray[i + 1];
		 NameArray[i] = NameArray[i + 1];
		 PriceArray[i] = PriceArray[i + 1];
}
// Decrease list size
      mySize--;
}

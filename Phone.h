#include <iostream>
#ifndef PHONE
#define PHONE

const int CAPACITY = 1024;



class List
{
	public:
		List();
		bool empty() const;
		void insert(string Name, double price, int code, int pos);
		void erase(int pos);
		void display(ostream &out) const;

	private:

		int mySize;

		string Name;
		double Price;
		int Code;

		int CodeArray[CAPACITY];
		double PriceArray[CAPACITY];
		String NameArray[CAPACITY];

};

ostream &operator << (ostream &out, const List &aList);
#endif


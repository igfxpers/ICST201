/*
 * Bigay, Kevin C. 
 * ICST201 - N1
 * Quiz 1
 * 27 June 2017
 */


#include<iostream>

using namespace std;

 void dispArr(int Array[10]){
	 int sum = 0;
	 for (int counter = 9; counter >= 0; counter--){
		sum = sum + Array[counter];
		cout << sum << " " << Array[counter] << endl;
	 }
}
int main(){
	int Array[10] = {1,2,3,4,5,6,7,8,9,10};
	dispArr(Array);
	
		return 0;
}

// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

//Ryan Parziale
//COSC2030
//Lab1
//9-18-2017

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cow list size : " << cows.size() << endl;
	cout << "cow list sum : " << cows.sum() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size : " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size : " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size : " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size : " << pigs.size() << endl;
	cout << "pigs list sum : " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size : " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size : " << pigs.size() << endl;
	cout << "pigs list sum : " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "cows list size : " << cows.size() << endl;
	cout << "cows list sum : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses list size : " << horses.size() << endl;
	cout << "horses list sum : " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "pigs list size : " << pigs.size() << endl;
	cout << "pigs list sum : " << pigs.sum() << endl << endl;

	List goats;
	cout << "goats list  :  " << goats << endl;
	cout << "goats list size : " << goats.size() << endl;
	cout << "goats list sum : " << goats.sum() << endl << endl;

	goats.insertAsLast(1.23);
	cout << "goats list  :  " << goats << endl;
	cout << "goats list size : " << goats.size() << endl;
	cout << "goats list sum : " << goats.sum() << endl << endl;

	goats.insertAsLast(5.5);
	goats.insertAsLast(99.9);
	cout << "goats list  :  " << goats << endl;
	cout << "goats list size : " << goats.size() << endl;
	cout << "goats list sum : " << goats.sum() << endl << endl;


	cout << "End of code" << endl;

	return 0;
}

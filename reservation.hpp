#pragma once

#include <iostream>
#include <string>

using namespace std;

class Reservations;

class Reservation {
	private:
		int table = 0;
		int qty = 0;
		string name = "";
		string dni = "";
		string date = "";
		Reservation* next = nullptr;
		
		Reservation(int table, int qty, string name, string dni, string date);
	
	friend class Reservations;
};

class Reservations {
	typedef Reservation* ptr;
	
	private:
		Reservation* first;
		
};

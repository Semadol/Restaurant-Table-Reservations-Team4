#pragma once

#include "reservation.hpp"

class Application {
	private:
		int qtyTables = 0;
	
	public:
		Application(int qty);
		void setQtyTables (int qty);
		int getQtyTables();
		void configQtyTables();
};

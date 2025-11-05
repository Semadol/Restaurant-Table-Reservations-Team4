#pragma once

#include <iostream>
#include <string>

#include "application.hpp"


class CmdInterface {
	private:
		Application app;
		void displayMenu() const;
		void processChoice(int choice);
		void clearScreen() const;
		
	public:
		void run ();
		CmdInterface();
};

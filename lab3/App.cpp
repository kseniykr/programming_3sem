#include "App.h"

void App::start(){

	List list;

	list.getListFromFile(const_cast<char*>("Date.txt"));

	int key = -1;
	do {

		cout << "***MENU***" << endl;
		cout << "1) Show all dates\n";
		cout << "2) Show Date - Next Date\n";
		cout << "3) Show system date and time\n";
		cout << "0) Close the program" << endl << endl;

		cout << "Insert your choice: "; cin >> key;

		switch (key)
		{
		case 1: {

			list.listPrint();

			break;
		}
		
		case 2: {

			list.listPrintSort();

			break;
		}

		case 3: {
			datetime sysTime;
			sysTime.showSysDate();
			break;
		}

		default:

			if (key != 0) cout << "Error! Number not found. Try again!" << endl;

			break;
		}

	} while (key != 0);

}

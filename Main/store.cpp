#include <iostream>
using namespace std;

bool idle_status() {
	bool status = false;
	string key;
	
	cout << "Status : Idle" << endl;
	cout << "Input \'c\' to continue : ";
	cin >> key;
	if (key == "c") {
		status = true;
	}
	
	return status;
}

//----------------------------------------------------------------------------------

void main_menu_interface() {
	cout << "-----------------------------------------------" << endl;
	cout << "WELCOME TO STORE SYSTEM" << endl;
	cout << "1. View storage" << endl;
	cout << "2. Register item" << endl;
	cout << "3. Modify item/data" << endl;
	cout << "4. Search item/data" << endl;
	cout << "5. Program Informations" << endl;
	cout << "6. Exit" << endl;
	cout << "-----------------------------------------------" << endl;
}

//-----------------------------------------------------------------------------------

int view_storage(string regular[1000], string boxes[1000]) {
	regular[0] = "hello";
	cout << regular;
}

int main() {
	bool main_operations = true;
	
	// store declarations
	char regular[1000] = {};
	char boxes[1000] = {};
	int regular_id[1000] = {};
	int boxes_id[1000] = {};
	int regular_value[1000] = {};
	int boxes_value[1000] = {};
	
	while (main_operations == true) {
		bool continue_operations = idle_status();
		while (continue_operations == false) {
			continue_operations = idle_status();
		}
		main_menu_interface();
		cout << "Enter key(1-6): ";
		int key_main;
		cin >> key_main;
		
		if (key_main == 1) {
			view_storage(regular, boxes);
		}
		
		 
	}
	return 0;
}

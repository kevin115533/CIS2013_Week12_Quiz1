#include <iostream>
#include <string>
using namespace std;

class house {
private:
	string color;
	int houseVal;
	int year = 0 , yearVal = 0;
	int carPorts = 0, portVal = 0 ;
	int windows = 0, windVal = 0;
	int doors = 0, doorVal = 0;
public:
	void setColor(string x) {
		color = x;
	}
	void setYear(int x) {
		year = x;
		yearVal = 1000 * (x - 2018);
	}
	void setPorts(int x) {
		carPorts = x;
		portVal = (x * 20000);
	}
	void setWindows(int x) {
		windows = x;
		windVal = (x * 500);
	}
	void setDoors(int x) {
		doors = x;
		doorVal = (x * 500);
	}
	
	void printVal() {
		houseVal = (150000 + yearVal + portVal + windVal + doorVal);
		cout << "Your " << color << " house is valued at " << houseVal << endl;

	}

};

int main() {
	int option;
	bool keepGoing = true;
	string uColor;
	int uYear, uPorts, uWindows, uDoors;

	house userHouse;

	cout << "Lets make your house" << endl;

	while(keepGoing ==true){

		cout << "Pick the option by selecting option number" << endl;
		cout << "1. Color" << endl <<  "2. Year" << endl << "3. Number of car ports" << endl << "4. Windows" << endl << "5. Doors" <<
			 endl << "6. See value of your custom home" << endl;
		cin >> option;

		switch (option) {
			case(1): {
				cout << "What color do you want your house to be? ";
				cin.ignore();
				getline(cin, uColor);
				userHouse.setColor(uColor);
				break;
			}
			case(2): {
				cout << "What year was your house built? ";
				cin >> uYear;
				userHouse.setYear(uYear);
				break;
			}
			case(3): {
				cout << "How many car ports does your house have? ";
				cin >> uPorts;
				userHouse.setPorts(uPorts);
				break;
			}
			case(4): {
				cout << "How many windows does your house have? ";
				cin >> uWindows;
				userHouse.setWindows(uWindows);
				break;
			}
			case(5): {
				cout << "How many doors does your house have? ";
				cin >> uDoors;
				userHouse.setDoors(uDoors);
				break;
			}
			case(6): {
				userHouse.printVal();
				break;
			}
		}
	}
	
	return 0;
}

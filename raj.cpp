#include <iostream>
#include <string>
using namespace std;

class Order {
private:
    int tableNumber;
    string serverName;
    int numPatrons;
    static double tableMinimumCharge;

public:
    void setTableNumber(int number) {
        tableNumber = number;
    }

    void setServerName(const string& name) {
        serverName = name;
    }

    void setNumPatrons(int num) {
        numPatrons = num;
    }

    void displayOrderDetails() {
        cout << "Order Details:" << endl;
        cout << "Table Number: " << tableNumber << endl;
        cout << "Server Name: " << serverName << endl;
        cout << "Number of Patrons: " << numPatrons << endl;
        cout << "Table Minimum Charge: $" << tableMinimumCharge << endl;
    }

    static void displayTableMinimumCharge() {
        cout << "Table Minimum Charge: $" << tableMinimumCharge << endl;
    }

    void takeOrderInput() {
        cout << "Enter table number: ";
        cin >> tableNumber;
        
        cout << "Enter server name: ";
        cin >> serverName;
        
        cout << "Enter number of patrons: ";
        cin >> numPatrons;
    }
};

double Order::tableMinimumCharge = 4.75;

int main() {
    Order order1;
    cout << "For Order 1:" << endl;
    order1.takeOrderInput();
    order1.displayOrderDetails();

    Order order2;
    cout << "\nFor Order 2:" << endl;
    order2.takeOrderInput();
    order2.displayOrderDetails();

    return 0;
}

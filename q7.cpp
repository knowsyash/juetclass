#include <iostream>
using namespace std;

class Shirt {
public:
    int collarSize;   // Public data member to store collar size
    int sleeveLength; // Public data member to store sleeve length
    
    // Member function declaration
    void displayClothingFacts();
};

class Pants {
public:
    int waistSize; // Public data member to store waist size
    int inSeam;    // Public data member to store inseam
    
    // Member function declaration
    void displayClothingFacts();
};

// Definition of displayClothingFacts function for Shirt class
void Shirt::displayClothingFacts() {
    cout << "Shirt Details:" << endl;
    cout << "Collar Size: " << collarSize << endl;
    cout << "Sleeve Length: " << sleeveLength << endl;
}

// Definition of displayClothingFacts function for Pants class
void Pants::displayClothingFacts() {
    cout << "Pants Details:" << endl;
    cout << "Waist Size: " << waistSize << endl;
    cout << "Inseam: " << inSeam << endl;
}

int main() {
    // Declare a Shirt object and assign values
    Shirt shirtObj;
    cout << "Enter collar size for the shirt: ";
    cin >> shirtObj.collarSize;
    cout << "Enter sleeve length for the shirt: ";
    cin >> shirtObj.sleeveLength;

    // Declare a Pants object and assign values
    Pants pantsObj;
    cout << "Enter waist size for the pants: ";
    cin >> pantsObj.waistSize;
    cout << "Enter inseam for the pants: ";
    cin >> pantsObj.inSeam;

    // Call displayClothingFacts function for Shirt object
    shirtObj.displayClothingFacts();

    // Call displayClothingFacts function for Pants object
    pantsObj.displayClothingFacts();

    return 0;
}

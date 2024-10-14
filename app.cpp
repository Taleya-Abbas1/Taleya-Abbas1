#include <iostream>
#include <iomanip> // For formatted table display
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "=============================" << endl;
    cout << " Business Application Menu " << endl;
    cout << "=============================" << endl;
    cout << "1. Input Data" << endl;
    cout << "2. Perform Calculation" << endl;
    cout << "3. Display Data" << endl;
    cout << "4. Exit" << endl;
    cout << "=============================" << endl;
    cout << "Choose an option: ";
}

int main() {
    // Variables to store data for three entities
    string entityName1, entityName2, entityName3;
    float value1, value2, value3;
    float total, average;
    bool dataEntered = false; // To ensure data is entered before calculations

    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                // Input data for three entities
                cout << "\nEnter the name of Entity 1: ";
                cin >> entityName1;
                cout << "Enter value for " << entityName1 << ": ";
                cin >> value1;

                cout << "\nEnter the name of Entity 2: ";
                cin >> entityName2;
                cout << "Enter value for " << entityName2 << ": ";
                cin >> value2;

                cout << "\nEnter the name of Entity 3: ";
                cin >> entityName3;
                cout << "Enter value for " << entityName3 << ": ";
                cin >> value3;

                dataEntered = true;  // Mark that data has been entered
                cout << "\nData has been successfully entered!\n" << endl;
                break;
            }
            case 2: {
                if (!dataEntered) {
                    cout << "\nPlease enter data first!\n" << endl;
                } else {
                    // Perform calculation
                    total = value1 + value2 + value3;
                    average = total / 3;
                    cout << "\nCalculation performed successfully!\n" << endl;
                }
                break;
            }
            case 3: {
                if (!dataEntered) {
                    cout << "\nPlease enter data first!\n" << endl;
                } else {
                    // Display the data in tabular form
                    cout << "\n===============================================" << endl;
                    cout << setw(15) << "Entity" << setw(15) << "Value" << endl;
                    cout << "-----------------------------------------------" << endl;
                    cout << setw(15) << entityName1 << setw(15) << value1 << endl;
                    cout << setw(15) << entityName2 << setw(15) << value2 << endl;
                    cout << setw(15) << entityName3 << setw(15) << value3 << endl;
                    cout << "-----------------------------------------------" << endl;
                    cout << setw(15) << "Total" << setw(15) << total << endl;
                    cout << setw(15) << "Average" << setw(15) << average << endl;
                    cout << "===============================================\n" << endl;
                }
                break;
            }
            case 4: {
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            }
            default: {
                cout << "Invalid option! Please try again." << endl;
                break;
            }
        }
    } while (choice != 4);

    return 0;
}
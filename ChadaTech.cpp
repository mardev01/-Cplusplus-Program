/*
 * ChadaTech.cpp
 *
 * Date: 11/17/2024
 * Author: Marwan Alrifaie
 */

#include "Clocks_Header.h"

void displayClocks(const Clock12& c12, const Clock24& c24) {
    // Adjusted borders to have equal length
cout << "*************************\t\t*************************" << endl; // top border of the clock display

    cout << "*     12-Hour Clock     *\t\t*     24-Hour Clock     *" << endl; // title for both clocks display with space with spacing for alignment

    // 12-hour clock time display with AM/PM
    cout << "*      " << setw(2) << setfill('0') << c12.hours << ":"
        << setw(2) << setfill('0') << c12.minutes << ":"
        << setw(2) << setfill('0') << c12.seconds << " " << c12.meridian
        << "      *\t\t" // space to align with the rest of the 12-hour clock display

        // 24-hour clock time display
        << "*       " << setw(2) << setfill('0') << c24.hours << ":"
        << setw(2) << setfill('0') << c24.minutes << ":"
        << setw(2) << setfill('0') << c24.seconds << "        *" << endl; // space to align with rest of the 24 hour clock display
cout << "*************************\t\t*************************" << endl; // bottom border of the clock display
}


// Function to display menu
void displayMenu() {
    cout << "\n*************************" << endl; // top border of the menu

    cout << "* 1 - Add One Hour\t*" << endl; // menu option to add 1 hour to both clocks  
    cout << "* 2 - Add One Minute\t*" << endl; // option to add 1 minute to both clocks
    cout << "* 3 - Add One Second\t*" << endl; // option to add 1 second to both clocks
    cout << "* 4 - Exit Program\t*" << endl; // option to exit the program

    cout << "*************************" << endl; // bottom border of the menu
}

int main() {
    Clock12 clock12;  // Initialize 12-hour clock object
    Clock24 clock24;  // Initialize 24-hour clock object

    int userSelection = 0;  // Variable to store user menu selection

    while (userSelection != 4) {  // Continue until the user selects '4' to exit
        system("CLS");  // Clear the console screen
        displayClocks(clock12, clock24);  // Display both clocks
        displayMenu();  // Show menu options
        cin >> userSelection;  // read user's menu selection

        switch (userSelection) {
        case 1:  // Add one hour to both clocks
            clock12.addHour();
            clock24.addHour();
            break;
        case 2:  // Add one minute to both clocks
            clock12.addMinute();
            clock24.addMinute();
            break;
        case 3:  // Add one second to both clocks
            clock12.addSeconds();
            clock24.addSeconds();
            break;
        case 4:  // Exit the program
            cout << "Exiting Program\n";
            break;
        default:  // Handle invalid inputs
            cout << "Invalid option. please try again.\n";
        }
    }

    return 0;  // End of program
}

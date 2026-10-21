/*
*CS 210 - Project 3 - Corner Grocer
*Written By: Alex Cochrane
*Written On: 17OCT2026
*Purpose: Multi-Option menu for frequency, histogram, and item tracking
*/
#include <iostream>
#include "GroceryTracker.h"
using namespace std;


//Menu Options
void displayMenu() { //function for menu printing
    cout << "=========Corner Grocer Item Tracker Menu=========" << endl;
    cout << "1) Look Up Item Frequency" << endl;
    cout << "2) Print Frequency List Per Item" << endl;
    cout << "3) Print Item Frequceny As Histrogram" << endl;
    cout << "4) Exit" << endl;
    cout << "=================================================" << endl;
}

int main() {
    GroceryTracker tracker;
    int choice = 0; //menu choice
    do {//Do-While loop so that the menu is always displayed at least once
        displayMenu();
        if (!(cin >> choice)) {
            cout << "Invalid choice, Please choose a number from 1-4." << endl;
            cin.clear();
            cin.ignore();
            continue; //returns to start of loop
        }
        switch (choice) { //switch to handle user input per choice
            case 1:
                tracker.findItemCount();
                break;
            case 2:
                tracker.printFrequency();
                break;
            case 3:
                tracker.printHistrogram();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << endl << "Invalid choice, Please choose a number from 1-4." << endl;
        }

    } while (choice != 4);//exit criteria

    return 0;
}

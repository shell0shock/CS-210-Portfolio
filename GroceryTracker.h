/*
*CS 210 - Project 3 - Corner Grocer
*Written By: Alex Cochrane
*Written On: 17OCT2026
*Purpose: Multi-Option menu for frequency, histogram, and item tracking
*/


#ifndef PROJECT3_GROCERYTRACKER_H
#define PROJECT3_GROCERYTRACKER_H

#include <iostream>
#include <map>
using namespace std;

class GroceryTracker {
    public:
        GroceryTracker(); //default constructor
        void findItemCount();//function for menu option 1
        void printFrequency() const; //function for menu option 2
        void printHistrogram(); //function for menu option 3
    private:
        map<string, int> frequencies; //map for tying the item occurence and words together
        const string inputFile = "CS210_Project_Three_Input_File.txt"; //constant so it's unchanged, filename for input file
        const string backupFile = "frequency.dat"; //backup file to store outputs, requested format as .dat
        void loadInputFile(); // loads file with a Input stream in out .cpp file
        void createBackupfile(); //creates backup file frequency.dat

};
#endif //PROJECT3_GROCERYTRACKER_H

/*
*CS 210 - Project 3 - Corner Grocer
*Written By: Alex Cochrane
*Written On: 17OCT2026
*Purpose: Multi-Option menu for frequency, histogram, and item tracking
*/

#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>

//GroceryTracker constructor, loads the data and creates output backup file
GroceryTracker::GroceryTracker() {
    loadInputFile();
    createBackupfile();
}

void GroceryTracker::loadInputFile() {
    ifstream inFile(inputFile); //creates file stream for reading input file
    if (!inFile.is_open()) {//if unable to open file
        cout << "Unable to open input file, please check directory and spelling." << endl;
        return;
    }
    string item; //item read from input file
    while(inFile >> item) {
        frequencies[item]++; //adds item read from file to map
    }
    inFile.close(); //close input file
}

void GroceryTracker::createBackupfile(){ //Backup file creation
    ofstream outputFile(backupFile); //output file stream
    if(!outputFile.is_open()) {//couldn't open output file
        cout << "Please check permissions, unable to make backup file." << endl;
        return;
    }
    for(map<string, int>::const_iterator item = frequencies.begin(); item != frequencies.end(); ++item) {
        outputFile << item->first << " " << item->second << endl; //iterates through input file and uses map to output to backup
    }
    outputFile.close(); //close backup.dat
}

//Menu 1 - item Frequency
void GroceryTracker::findItemCount() {
    string itemToFind;
    cout << endl << "=========SEARCH=========" << endl;
    cout << endl << "Please enter the name of the desired item to find, note it IS case sensitive." << endl;
    cin >> itemToFind;

    if(frequencies.count(itemToFind) > 0) { //count > 0 -> Item exists
        cout << endl << itemToFind << " appears " << frequencies.at(itemToFind) << " times in the file." << endl;
    }
    else {
        cout << endl << "Item " << itemToFind << " not found, please check your spelling." << endl;
    }
}


//Menu 2 - Print Items & Frequencies
void GroceryTracker::printFrequency() const {
    cout << endl << "=========FREQUENCY=========" << endl;
    for (auto item = frequencies.begin(); item != frequencies.end(); ++item) { //loops through ech item of the map, from start until end
        cout << left << setw(15) << item->first << " " << item->second  << endl; //prints formatted, "Item Number"
    }
}

//Menu 3 - Histogram
void GroceryTracker::printHistrogram() {
    cout << endl << "=========HISTOROGRAM=========" << endl;
    for (auto item = frequencies.begin(); item != frequencies.end(); ++item) {
        cout << left << setw(15) << item->first << " "; //keeps format uniform
        for (int i = 0; i < item->second; i++) {
            cout << "*";
        }
    cout << endl;
    }
}


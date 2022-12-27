//
// Created by mteno on 22.12.2022.
//

#include "CardCollectoin.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;


// add on flashcard to cvs
void CardCollectoin::addFlashcardToCSV(const Flashcard &flashcard) {

    ofstream outfile;

    outfile.open("FlashcardCollection.csv", ios_base::app);

    outfile << flashcard.getGerWord() << "," << flashcard.getEngWord() << "," << flashcard.getNumber() << endl;

}

// Constructor testing for existing csv and if needed to add header
CardCollectoin::CardCollectoin() {
    ifstream testfile("FlashcardCollection.csv");

    if (!testfile.good()) {
        ofstream creatHeaderInFile("FlashcardCollection.csv");
        creatHeaderInFile << "German,English,Counter" << endl;
    }

}

void CardCollectoin::loadFlashcards() {
    ifstream csv("FlashcardCollection.csv");
    if (!csv.is_open()) {
        cout << "Error file couldn't opened";
        return;
    }
    string line;

    // this term takes the headline
    getline(csv, line);

    while (getline(csv, line)) {
        stringstream ss(line);
        string ger;
        string eng;
        string stringnumber;
        int number;
        getline(ss, ger, ',');
        getline(ss, eng, ',');
        getline(ss, stringnumber, ',');

        number = stoi(stringnumber);
        collection.push_back(Flashcard(ger, eng, number));
    }
}


std::ostream &operator<<(ostream &out, const CardCollectoin &obj) {

    out << left << setw(15) << "German" << left << setw(15) << "English" << left << setw(15) << "Counter" << endl;



    for (Flashcard card: obj.collection) {
        out << left <<  setw(15) << card.getGerWord() << left << setw(15) << card.getEngWord() << left << setw(15) << card.getNumber() << endl;
    }
    return out;
}



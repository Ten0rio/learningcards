//
// Created by mteno on 19.12.2022.
//

#ifndef LEARNINGCARDS_FLASHCARD_H
#define LEARNINGCARDS_FLASHCARD_H

#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>


using namespace std;


class Flashcard {

    //todo:
    // only save one Flashcard to csv file
    // void saveFlashcardsToCSV(const std::vector<Flashcard> &flashcards, const std::string &filename);


public:
    Flashcard();

    Flashcard(const string &english, const string &german);

    string getEngWord();

    string getGerWord();

    void setEngWord();

    void setGerWord();


private:
    //data structure for a flashcard
    struct Card {
        string english;
        string german;
    };


    //TODO:
    // write to csv
    // read/load  from csv
    // delete from csv





};


#endif //LEARNINGCARDS_FLASHCARD_H

//
// Created by mteno on 22.12.2022.
//

#ifndef LEARNINGCARDS_CARDCOLLECTOIN_H
#define LEARNINGCARDS_CARDCOLLECTOIN_H

#include "Flashcard.h"


using namespace std;


class CardCollectoin {


    //TODO:

    // delete from csv




public:
    // todo
    //   implement a constructor that load they are already in the csv

    // empty constructor which initialises a cvs file if not already exist one
    CardCollectoin();

    // only save one Flashcard to csv file
    static void addFlashcardToCSV(const Flashcard& flashcard);

    // read/load from csv
    void loadFlashcards();

    // override of << operator
    friend std::ostream &operator<<(std::ostream &out, const CardCollectoin &obj);



private:



    vector<Flashcard> collection;






};


#endif //LEARNINGCARDS_CARDCOLLECTOIN_H

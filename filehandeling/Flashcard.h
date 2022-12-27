//
// Created by mteno on 19.12.2022.
//

#ifndef LEARNINGCARDS_FLASHCARD_H
#define LEARNINGCARDS_FLASHCARD_H

#include <stdlib.h>
#include <utility>
#include <vector>
#include <string>
#include <fstream>


using namespace std;


class Flashcard {


public:
    Flashcard();

    Flashcard(const string &english, const string &german);

    Flashcard(const string &english, const string &german, const int &count);

    string getEngWord() const;

    void setEngWord(string english);

    string getGerWord() const;

    void setGerWord(string german);

    void setNumber(int number);

    int getNumber() const;

    friend std::ostream &operator<<(std::ostream &out, const Flashcard &obj);


private:
    //data structure for a flashcard
    struct Card {
        string english;
        string german;
        int counter;


        Card(string eng, string ger) : english(eng), german(ger), counter(0) {};
        Card(string eng, string ger, int count) : english(eng), german(ger), counter(count) {};
    };

    Card card;

};


#endif //LEARNINGCARDS_FLASHCARD_H

//
// Created by mteno on 19.12.2022.
//

#include "Flashcard.h"

#include <utility>

// two constructors
// if nothing passes in
Flashcard::Flashcard() : card("", "") {}
// if something passes in
Flashcard::Flashcard(const string &english, const string &german) : card(english, german) {}
// for loading existing
Flashcard::Flashcard(const string &english, const string &german, const int &count): card(english,german, count) {}






// getter and setter
string Flashcard::getEngWord() const {
    return card.english;
}

void Flashcard::setEngWord(string english) {
    // TODO:
    //  research what does std::move
    card.english = std::move(english);

}

string Flashcard::getGerWord() const {
    return card.german;
}

void Flashcard::setGerWord(string german) {
    card.german = std::move(german);
}

std::ostream &operator<<(ostream &out, const Flashcard &obj) {
    out << "English = " << obj.getEngWord() << ", German = " << obj.getGerWord();
    return out;
}

void Flashcard::setNumber(int number) {
    card.counter = number;
}

int Flashcard::getNumber() const {
    return card.counter;
}










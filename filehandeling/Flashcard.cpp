//
// Created by mteno on 19.12.2022.
//

#include "Flashcard.h"




Flashcard::Flashcard(): {
    Card card;
    card.german = "";
    card.english = "";

}

Flashcard::Flashcard(const string& english, const string& german) {
    Card card;
    card.german = german;
    card.english = english;

}



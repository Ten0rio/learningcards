#include <iostream>

#include "filehandeling/Flashcard.h"
#include "filehandeling/CardCollectoin.h"


using namespace std;

int main() {

    Flashcard flashcard;
    flashcard.setEngWord("you");
    flashcard.setGerWord("du");

   CardCollectoin coll;

//    coll.addFlashcardToCSV(flashcard);

    coll.loadFlashcards();

    cout << coll ;



    return 0;
}


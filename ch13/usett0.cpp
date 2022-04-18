//
// Created by Xuechao Qin on 4/18/2022.
//

#include "iostream"
#include "tabletenn0.h"

int main(void) {
    using std::cout;
    TableTennisPlayer player1("Chunk", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    player2.Name();
    if (player2.HasTable())
        cout << ": has a table";
    else
        cout << ": hasn't a table.\n";
}

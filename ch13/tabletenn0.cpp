//
// Created by Xuechao Qin on 4/18/2022.
//

#include <iostream>
#include "tabletenn0.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ft) : firstname(fn), lastname(ln),
                                                                                    hasTable(ft) {}

void TableTennisPlayer::Name() const {
    std::cout << lastname << ", " << firstname;
}

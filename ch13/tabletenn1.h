//
// Created by Xuechao Qin on 4/18/2022.
//

#ifndef CPP_LEARNING_TABLETENN1_H
#define CPP_LEARNING_TABLETENN1_H

#include "string"
#include "tabletenn0.h"

using std::string;

// simple derived class
class RatedPlayer : public TableTennisPlayer {
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);

    RatedPlayer(unsigned int r, const TableTennisPlayer &tp);

    unsigned int Rating() const { return rating; }

    void ResetRatingg(unsigned int r) { rating = r; }

};

#endif //CPP_LEARNING_TABLETENN1_H

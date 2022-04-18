//
// Created by Xuechao Qin on 4/18/2022.
//

#ifndef CPP_LEARNING_TABLETENN0_H
#define CPP_LEARNING_TABLETENN0_H

#include "string"

using std::string;

// simple base class
class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ft = false);

    void Name() const;

    bool HasTable() const { return hasTable; };

    void ResetTable(bool v) { hasTable = v; };
};

#endif //CPP_LEARNING_TABLETENN0_H

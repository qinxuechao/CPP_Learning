//
// Created by Xuechao Qin on 4/19/2022.
//

#ifndef CPP_LEARNING_WORKER0_H
#define CPP_LEARNING_WORKER0_H

#include "string"

// an abstract base class
class Worker {
private:
    std::string fullname;
    long id;
public:
    Worker() : fullname("no one"), id(0L) {}

    Worker(const std::string &s, long n) : fullname(s), id(n) {}

    virtual ~Worker() = 0;  // pure virtual destructor

    virtual void Set();

    virtual void Show() const;
};

class Waiter : public Worker {
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}

    Waiter(const std::string &s, long n, int p = 0) : Worker(s, n), panache(p) {}

    Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(0) {}

    void Set();

    void Show() const;
};

class Singer : public Worker {
protected:
    enum {
        other, alto, contralto, soprano, bass, baritone, tenor
    };
    enum {
        Vtypes = 7
    };
private:
    static char *pv[Vtypes]; // string equivs of voice types
    int voice;
public:
    Singer() : Worker(), voice(other) {}

    Singer(const std::string &s, long n, int v = other) : Worker(s, n), voice(v) {}

    Singer(const Worker &wk, int v = other) : Worker(wk), voice(v) {}

    void Set();

    void Show() const;
};

#endif //CPP_LEARNING_WORKER0_H

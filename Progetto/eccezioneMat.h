//
// Created by Admin on 28/10/18.
//

#ifndef PROGETTO_ECCEZIONEMAT_H
#define PROGETTO_ECCEZIONEMAT_H

#include <stdexcept>
#include <string>

class eccezioneMat : public std::exception {

public:
    explicit eccezioneMat(const std::string& s= " "): s(s) {};
    virtual ~eccezioneMat() noexcept {};
    virtual const char *what() const noexcept override {
        return s.c_str();
    };

private:
    std::string s;
};

#endif //PROGETTO_ECCEZIONEMAT_H

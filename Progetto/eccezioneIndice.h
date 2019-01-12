//
// Created by Admin on 28/10/18.
//

#ifndef PROGETTO_ECCEZIONEINDICE_H
#define PROGETTO_ECCEZIONEINDICE_H

#include <stdexcept>
#include <string>

class eccezioneIndice : public std::exception {

public:
    explicit eccezioneIndice(const std::string& s= " "): s(s) {};
    virtual ~eccezioneIndice() noexcept {};
    virtual const char *what() const noexcept override {
        return s.c_str();
    };

private:
    std::string s;
};







#endif //PROGETTO_ECCEZIONEINDICE_H

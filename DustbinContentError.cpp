#include "DustbinContentError.h"

struct DustbinContentErr : public std::exception {
    const char* what() const throw () {
        return "C++ Exception";
    }
};
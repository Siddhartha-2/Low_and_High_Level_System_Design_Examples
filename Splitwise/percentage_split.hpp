#pragma once

#include <iostream>
#include <string>
#include "user.hpp"
#include "split.hpp"

using namespace std;

class PercentSplit : public Split{
    private:
    int percentage;
    
    public:
    PercentSplit(User *user, int percentage);

    int getPercentage();

};

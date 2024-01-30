#pragma once

#include <iostream>
#include <string>
#include "user.hpp"
#include "split.hpp"

using namespace std;

class ExactSplit : public Split{

    public:
    ExactSplit(User *user, double amount);

};

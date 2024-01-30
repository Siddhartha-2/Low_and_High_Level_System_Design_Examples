#pragma once

#include <iostream>
#include <string>

using namespace std;

class User{
    private:
    string userId, name, mobileNum;

    public:
    User(string userId, string name, string mobileNum);

    string getUserId();

    string getName();

    string getMobileNum();

};

#pragma once

#include <iostream>
#include <string>
#include <list>
#include "user.hpp"
#include "split.hpp"
#include "expense.hpp"

using namespace std;

class ExactExpense : public Expense{

    public:
    ExactExpense(User *paidBy, double amount, list<Split*> splits);

    bool validate();

};

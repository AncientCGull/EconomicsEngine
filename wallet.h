#ifndef WALLET_H
#define WALLET_H

#include <list>

#include "stock.h"
#include "bond.h"

class Wallet
{
    std::list<Paper> paperList;
    std::string name;
};

#endif

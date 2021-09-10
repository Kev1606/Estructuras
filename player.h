#ifndef _PLAYER_
#define _PLAYER_ 1

#include <iostream>
#include <cstring>

using namespace std;

struct player
{
    int id;
    string name;
    player* next = nullptr;
};
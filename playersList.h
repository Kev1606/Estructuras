#ifndef _LISTPLAYERS_

#define _LISTPLAYERS_ 1 

#include "player.h"
#include <iostream>
#include <cstring>

using namespace std;

struct playersList {
    int size = 0;
    player* start = nullptr;
    player* end = nullptr;

    bool isEmpty() {
        return size == 0;
    }

    int getQuantify() {
        return size;
    }

    bool addPlayer(int pNumber, string pName) {
        player* newValue = new player;
        newValue->id = pNumber;
        newValue->name = pName;
        newValue->next = nullptr;

        if (start == nullptr) {
            start = newValue;
        } else {
            player* aux = start;
            while (aux->next != nullptr) {
                aux = aux->next;
            }
            aux->next = newValue;
        }
        size++;
        return true;
    }

    bool removePlayer(int pNumber) {
        if (start != nullptr) {
            player* aux = start;
            if (start->id == pNumber) {
                start = start->next;
                delete aux;
                size --;
                return true;
            } else {
                while (aux->next != nullptr && aux->next->id != pNumber) {
                    aux = aux->next;
                }
                if (aux->next->id == pNumber) {
                    player* toEliminate = aux->next;
                    aux->next = toEliminate->next;
                    delete toEliminate;
                    size --;
                    return true;
                }
            }
        }
        return false;
    }

    int insertPlayer(int pNumber, string pName, int pPosition) {
        player* newValue = new player;
        newValue->id = pNumber;
        newValue->name = pName;
        newValue->next = nullptr;
        int newPosition = 0;

        if(pPosition>=size)
            return addPlayer(pNumber, pName);

        if (size==0){
            start = newValue;
            end = newValue;
        }else if (pPosition == 0) {
            newValue->next = start;
            start = newValue;
        } else {
            int actualPosition = 1;
            player* pointerPosition = nullptr;
            player* pointerBehind = nullptr;

            if (pPosition>=size) {
                pointerBehind = end;
                end = newValue;
                actualPosition = size;
            } else {
                pointerPosition = start->next;
                pointerBehind = start;
            }
            while (actualPosition<pPosition && pointerPosition != nullptr) {
                pointerBehind = pointerPosition;
                pointerPosition = pointerPosition->next;
                actualPosition++;
        }

        pointerBehind->next = newValue;
        newValue->next = pointerPosition;
        newPosition = actualPosition;
    }
    size++;
    return newPosition;
    }

    void listPlayers() {
        for (player* printPlayer = start; printPlayer != nullptr; printPlayer = printPlayer->next) {
            cout << "Numero: " << printPlayer->id << "  Nombre: " << printPlayer->name << endl;
        }
    }
};

#endif
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
        //retorna true en caso de estar vacía 
        return size == 0;
    }

    int getQuantify() {
        //retorna la cantidad de elementos existentes en la lista
        return size;
    }

    bool addPlayer(int pNumber, string pName) {
        //agrega un nuevo jugador al final de la lista, 
        //retorna true si logró agregarlo sin errores
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
        //busca un jugador con ese número y lo remueve de la lista, 
        //retorna true si efectivamente lo encontró y lo removió
        if (start != nullptr) {
            player* aux = start;
            if (start->id == pNumber) {
                start = start->next;
                delete aux;
                size -= 1;
                return true;
            } else {
                while (aux->next != nullptr && aux->next->id != pNumber) {
                    aux = aux->next;
                }
                if (aux->next->id == pNumber) {
                    player* toEliminate = aux->next;
                    aux->next = toEliminate->next;
                    delete toEliminate;
                    size -= 1;
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
        //procede a imprimir la lista de jugadores
        for (player* i = start; i != nullptr; i = i->next) {
            cout << "Numero: " << i->id << "  Nombre: " << i->name << endl;
        }
    }
};

#endif
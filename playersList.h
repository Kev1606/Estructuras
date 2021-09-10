#ifndef _PLAYERS_
#define _PLAYERS_

#include <stdlib.h>
#include "player.h"

#include <iostream>
#include <cstring>

using namespace std;

struct playersList
{
    int size;
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
        player* newValue = (player*)malloc(sizeof(struct player));
        newValue->id = pNumber;
        newValue->name = pName;
        
        if (size == 0) {
            start = newValue;
            end = newValue;  // end = start;
        } else {
            // agregar al final de la lista
            end->next = newValue; // esto es equivalente a  (*end).next = &newvalue;            
            end = newValue;            
        }
        size++;
        return true;
    }

    bool removePlayer(int pNumber) {
        //busca un jugador con ese número y lo remueve de la lista, 
        //retorna true si efectivamente lo encontró y lo removió
        return false;
    }

    void insertPlayer(int pNumber, string pName, int pPosition) {
        //inserta un nuevo jugador en una posición específica de la lista, siendo el primer elemento la posición 0. 
        //Si la posición no existe se agrega al final.  
    }

    void listPlayers() {
        //procede a imprimir la lista de jugadores
    }
};

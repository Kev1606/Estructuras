#include "playersList.h"
#include "player.h"
#include <iostream>
#include <cstring>

using namespace std;

void insertionSort(playersList* pListaJugadores) {
    int counter = 0;
    player* j = new player;
    player* aux = new player;
    player* temp = new player;
    player* pos = new player;

    for (player* i = pListaJugadores->start; i != nullptr; i = i->next) 
    {
        j = i;
        aux->name = i->name;
        aux->id = i->id;
        temp->id = aux->id;
        temp->name = aux->name;
        pos->name = i->next->name;
        pos->id = i->next->id;

        while ( j != nullptr && ((pos->name).compare(aux->name)) < 0)
        {   
            pListaJugadores->removePlayer(pos->id);
            pListaJugadores->insertPlayer(pos->id, pos->name,counter);
            aux->name = j->name;
            aux->id = j->id;

            pos->id = j->id;
            pos->name = j->name;
        }
        pListaJugadores->insertPlayer(temp->id, temp->name, counter+1);
        pListaJugadores->removePlayer(temp->id);
        pos->id = i->id;
        pos->name = i->name;
    }
    for (player* i = pListaJugadores->start; i != nullptr; i = i->next) {
        cout << "Numero: " << i->id << "  Nombre: " << i->name << endl;
    }
}
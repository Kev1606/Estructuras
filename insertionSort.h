#include "playersList.h"
#include "player.h"
#include <iostream>
#include <cstring>

using namespace std;

void insertionSort(playersList* pListPlayers) {
    int counter = 0;
    player* auxForActualPosition = new player;
    player* aux = new player;
    player* temporal = new player;
    player* subsequent = new player;

    for (player* actualPosition = pListPlayers->start; actualPosition != nullptr; actualPosition = actualPosition->next) 
    {
        auxForActualPosition = actualPosition;
        aux->name = actualPosition->name;
        aux->id = actualPosition->id;
        temporal->id = aux->id;
        temporal->name = aux->name;
        subsequent->name = actualPosition->next->name;
        subsequent->id = actualPosition->next->id;

        while ( j != nullptr && ((subsequent->name).compare(aux->name)) < 0)
        {   
            pListPlayers->removePlayer(subsequent->id);
            pListPlayers->insertPlayer(subsequent->id, subsequent->name,counter);
            aux->name = auxForActualPosition->name;
            aux->id = auxForActualPosition->id;

            subsequent->id = auxForActualPosition->id;
            subsequent->name = auxForActualPosition->name;
        }
        pListPlayers->insertPlayer(temporal->id, temporal->name, counter+1);
        pListPlayers->removePlayer(temporal->id);
        subsequent->id = actualPosition->id;
        subsequent->name = actualPosition->name;
    }
    for (player* actualPosition = pListPlayers->start; actualPosition != nullptr; actualPosition = actualPosition->next) {
        cout << "Number: " << actualPosition->id << "  Name of Player: " << actualPosition->name << endl;
    }
}

#include <iostream>
#include "playersList.h"
#include <stdio.h>
#include "player.h"
#include "selectionSort.h"
//#include "insertionSort.h"

using namespace std;

int main() {
    int arraySize = 5;
    float array[arraySize] = {3,8,5,9,1};
    //selectionSort(arraySize,array);

    playersList listaPlayers;

    listaPlayers.addPlayer(10, "Mess");
    listaPlayers.addPlayer(11,"Di Maria");
    listaPlayers.addPlayer(7, "Mbappe");
    
    cout << listaPlayers.isEmpty() << "  " << listaPlayers.getQuantify() << endl;


/*     int positionInsert = listaPlayers.insertPlayer(8, "Iniesta", 1);
    cout << positionInsert << endl;

    player* recorrido = listaPlayers.start;
    while (recorrido!=nullptr) {
        cout << recorrido->id << "  " << recorrido->name << endl;
        recorrido = recorrido->next;
    } */

}
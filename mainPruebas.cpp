
#include <iostream>
#include "playersList.h"
#include <stdio.h>
#include "player.h"
#include "selectionSort.h"
//#include "insertionSort.h"

using namespace std;

int main() 
{
    int arraySize = 5;
    float array[arraySize] = {3,8,5,9,1};
    selectionSort(arraySize,array);

    playersList listaPlayers;

    listaPlayers.addPlayer(10, "Messi");
    listaPlayers.addPlayer(11,"Di Maria");
    listaPlayers.addPlayer(7, "Mbappe");


    cout << listaPlayers.insertPlayer(7, "Ronaldo", 0) << endl;
    cout << listaPlayers.isEmpty() << "  " << listaPlayers.getQuantify() << endl;
    listaPlayers.listPlayers();
    cout << listaPlayers.removePlayer(10) << endl;
    listaPlayers.listPlayers();

    int positionInsert = listaPlayers.insertPlayer(8, "Iniesta", 8);
    cout << positionInsert << endl;
    cout << listaPlayers.getQuantify() << endl;
    listaPlayers.listPlayers();

    //insertionSort(listaPlayers.getQuantify(),listaPlayers);

}
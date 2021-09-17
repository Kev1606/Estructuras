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
    float array[arraySize] = {3.2,8.3,5.6,9.8,1.2};
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
    listaPlayers.removePlayer(7);
    listaPlayers.listPlayers();


    //insertionSort(&listaPlayers);

}
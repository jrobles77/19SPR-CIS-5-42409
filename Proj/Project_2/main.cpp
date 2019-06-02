/* 
 * File:   main.cpp
 * Author: Robles, Joaquin
 * Created on May 26th, 2019, 11:30 AM
 * Purpose:  Poker Game
 */
 
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

void shuffle(int [], int);
void prntTbl(int&,int&,int&,int [],int [],int [],int [],int [],int []);
void prompt(int&,int&,int&,int [],int [],int [],int [],int [],int []);
void NewG(int&,int&,int&,int [],int [],int [],int [],int [],int []);
int Load(int&,int&,int&);
int Save(int&,int&);
void prtSv(int,int);
void Deal(int [],int ,int ,int [],int [],int [],int [],int [],int []);
void bublSrt(int [],int);
bool linSrch(int [],int,int,int&);
bool binSrch(int [],int,int,int&);
string Cards(string,int [],int [],int [],int [],int [],int []);

int main() {
    const int SIZE = 52,
              CARDS = 7,
              cCARDS = 5,
              Rank = 13,
              Suit = 4;
    int Chips,
        Seat,    
        Stage,    //Stage of dealing
        Deck[SIZE],   
        Seat1[CARDS],
        Seat2[CARDS],
        Seat3[CARDS],
        Seat4[CARDS],
        Seat5[CARDS],
        Comm[cCARDS];
    bool Play = true;
    char Option;
    prompt(Chips,Seat,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);
    while(Play == true){
        Deal(Deck,SIZE,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);
        Stage = 2;
        prntTbl(Chips,Seat,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);
        Deal(Deck,SIZE,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);
        Stage = 3;
        prntTbl(Chips,Seat,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);
        Deal(Deck,SIZE,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);
        Stage = 4;
        prntTbl(Chips,Seat,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);
        cout << endl;
        cout << "Do you want to play another round? (y/n)" << endl;
        cin.get(Option);
        if(Option == 'n' || Option == 'N'){
            Play = false;
        }
    }
    Option = 'x';
    cout << "Would you like to save your current game? (y/n)" << endl;
        cin.get(Option);
        if(Option == 'y' || Option == 'Y'){
            Save(Chips,Seat);
        }
	return 0;
}
void prompt(int& Chips,int& Seat,int& Stage,int Seat1[],int Seat2[],int Seat3[],int Seat4[],int Seat5[],int Comm[]){
    char choice,Prob = 2;
    do{
        cout << "1. New Game" << endl;
        cout << "2. Load Game" << endl;
        cout << "3. Exit Game" << endl;
        cout << endl;
        cin >> choice;
        cout << endl;
        switch(choice){
            case '1':NewG(Chips,Seat,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);break;
            case '2':Load(Chips,Seat,Stage);break;
        }
    }while(choice<=Prob);
}    
void shuffle(int Deck[],int SIZE){
    srand(time(NULL));
    int y = 0;    
    for(int x = 0;x < SIZE; x++){
        Deck[x] = x + 1;
    }
    for(int x = SIZE;y < x; x--){
        int z = rand() % x;
        int temp = Deck[x - 1];
        Deck[x - 1] = Deck[z];
        Deck[z] = temp;
    }
}
void prntTbl(int& Chips,int& Seat,int& Stage,int Seat1[],int Seat2[],int Seat3[],int Seat4[],int Seat5[],int Comm[]){
    string Cards,CCards;
	cout << "       __________________Dealer__________________       " << endl;
	cout << "      |                                          |      " << endl;
	cout << "      |                [][][][][]                |      " << endl;
	cout << "      |                                          |      " << endl;
	cout << "      |                                          |      " << endl;
	cout << "Seat 5| [][]                                [][] |Seat 1" << endl;
	cout << "      |                                          |      " << endl;
	cout << "      |                                          |      " << endl;
	cout << "      |    [][]           [][]           [][]    |      " << endl;
	cout << "      |__________________________________________|      " << endl;
	cout << "      |___Seat 4_________Seat 3_________Seat 2___|      " << endl;
	cout << endl;
        if(Stage > 2){
	    cout << "Community cards: " << CCards << endl;
        }
	if(Stage > 1){
	    cout << "Your cards: " << Cards << endl;
	    cout << "Chips: " << Chips << endl;
	}    
}
void NewG(int& Chips,int& Seat,int& Stage,int Seat1[],int Seat2[],int Seat3[],int Seat4[],int Seat5[],int Comm[]){
    Chips = 100;
    Stage = 1;
    cout << "Please pick a seat to begin the game (1-5):" << endl;
    prntTbl(Chips,Seat,Stage,Seat1,Seat2,Seat3,Seat4,Seat5,Comm);
    cin >> Seat;
    while(Seat > 5){
        cout << "Please pick a Seat from 1 to 5" << endl;
        cin >> Seat;
    }
    cout << endl;
    Stage = 1;
}
int Load(int& Chips,int& Seat, int& Stage){
    fstream Save;
    int Scho1;
    cout << "Which would you like to load? (1-3)" << endl; 
    prtSv(Chips,Seat);
    cin >> Scho1;
    if(Scho1 == 1){
        Save.open("Save 1.txt");
        Save >> Chips;
        Save >> Seat;
        Save.close();
    }
    else if(Scho1 == 2){
        Save.open("Save 2.txt");
        Save >> Chips;
        Save >> Seat;
        Save.close();
    }
    else if(Scho1 == 3){
        Save.open("Save 3.txt");
        Save >> Chips;
        Save >> Seat;
        Save.close();    
    }
    Stage = 1;
}
int Save(int& Chips,int& Seat){
    fstream Save;
    int Scho2;    
    cout << "Which would you like to overwrite? (1-3)" << endl;
    prtSv(Chips,Seat);
    cin >> Scho2;
    if(Scho2 == 1){
        Save.open("Save 1.txt");
        Save << Chips << endl;
        Save << Seat << endl;
        Save.close();
    }
    else if(Scho2 == 2){
        Save.open("Save 2.txt");
        Save << Chips << endl;
        Save << Seat << endl;
        Save.close();
    }
    else if(Scho2 == 3){
        Save.open("Save 3.txt");
        Save << Chips << endl;
        Save << Seat << endl;
        Save.close();    
    }
    
}
void prtSv(int Chips,int Seat){
    fstream Save;
    Save.open("Save 1.txt");
    Save >> Chips;
    Save >> Seat;
    cout << "Save 1: Chips: " << Chips << " Seat: " << Seat << endl;
    Save.close();
    Save.open("Save 2.txt");
    Save >> Chips;
    Save >> Seat;
    cout << "Save 2: Chips: " << Chips << " Seat: " << Seat << endl;
    Save.close();
    Save.open("Save 3.txt");
    Save >> Chips;
    Save >> Seat;
    cout << "Save 3: Chips: " << Chips << " Seat: " << Seat << endl;
    Save.close();    
}
void Deal(int Deck[],int SIZE,int Stage,int Seat1[],int Seat2[],int Seat3[],int Seat4[],int Seat5[],int Comm[]){
    if(Stage == 1){
        shuffle(Deck,SIZE);
        for(int x = 0; x < 6;x++){
            Seat1[x] = Deck[(x * 4) + x];
            Seat2[x] = Deck[(x * 4) + (x + 1)];
            Seat3[x] = Deck[(x * 4) + (x + 2)];
            Seat4[x] = Deck[(x * 4) + (x + 3)];
            Seat5[x] = Deck[(x * 4) + (x + 4)];
        }
    }
    else if(Stage == 2){
        for(int x = 0; x < 3; x++){
            Comm[x] = Deck[x+10];
        }    
    }
    else if(Stage == 3){
        Comm[3] = Deck[13];
    }    
    else{
        Comm[4] = Deck[14];        
    }
}
bool linSrch(int array[],int SIZE,int val,int &indx){
    bool found = false;
    indx = -1;
    while (indx < SIZE && !found){
        indx++;
        if(array[indx] == val){
            found = true;
        }
    }
}
void bublSrt(int array[],int SIZE){
    int max, indx, y;
    for(max = SIZE - 1; max > 0; max--){
        for(indx = 0; indx < max; indx++){
            if(array[indx] > array[indx + 1]){
                y = array[indx];
                array[indx] = array[indx + 1];
                array[indx + 1] = y;
            }
        }
    }
}
void selSrt(int array[],int SIZE){
    int minIndx, minVal, y;
    for (int x = 0; x < (SIZE - 1); x++){
        minIndx = x;
        minVal = array[x];
        for (int indx = x + 1; indx < SIZE; indx++){
            if(array[indx] < minVal){
                minVal = array[indx];
                minIndx = indx;
            }
        }
        y = array[minIndx];
        array[minIndx] = array[x];
        array[x] = y;
    }
}
string Cards(string Cards,int Seat1[],int Seat2[],int Seat3[],int Seat4[],int Seat5[],int Comm[]){
    
    return Cards;
}
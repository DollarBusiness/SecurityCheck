#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include <windows.h>


using namespace std;

string passCheck = "Time";
string a;
int NOT = 2;

int main()
{
    cout << "**** Enter the password to have authorized access ****" << endl;
    cin >> a;

    if(a == passCheck){
        cout << "WELCOME, MASTER" << endl;
    }else{
        while(NOT > 1){
        cout << " " << endl;
        cout << "ONE MORE TRY THEN PC WILL RESTART: " << endl;
        cin >> a;
        if(a != passCheck){
            NOT--;
        }else{
            cout << "WELCOME MASTER" << endl;
            return 0;
        }
        cout << " " << endl;
        cout << "YOU ARE NOT MY MASTER, STEP AWAY FROM THE PC!!" << endl;

        system("c:\\windows\\system32\\shutdown /s /t 1 \n\n");
    }
}

    return 0;
}



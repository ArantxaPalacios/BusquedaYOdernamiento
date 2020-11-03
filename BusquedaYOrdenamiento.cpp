/*
    Arantxa Palacios Jara
*/

#include <bits/stdc++.h>

// Boyer Moore
#define NO_OF_CHARS 256

using namespace std;

int BruteForce(char *Text, char *Pattern);
void BoyerMoore(char *string, int stringleng, char *substr, int substrleng, int contentlist[]);

int main() {
    int option;
    int i, j;  // Contador para el for
    int num;    // Guarda numero random


    do {
        system("cls"); // Para limpiar pantalla

        cout << "Menu" << endl
             << "Busquedas en cadenas" << endl
             << "1. Fuerza Bruta" << endl
             << "2. Boyer Moore" << endl
             << "3. KMP" << endl
             << "Algoritmos de ordenamiento" << endl
             << "4. Heap Sort" << endl
             << "5. Radix Sort" << endl;

        cout << "Ingrese una opcion: " << endl;
        cin >> option;

        switch (option)  {

            case 1:
            system("pause>nul"); // Pausa

            rand();    // Genera numero random
            for(i = 1; i <=10; i++) {
                num = rand()%100; // Obtiene numero random
                cout << num << BruteForce << endl;
            }

            break;

            case 2:
            // Boyer Moore
            

            break;

            case 3:
            //KMP


            break;
        }
    } while (option != 6); // Salida
    return 0;
}

// Fuerza bruta
int BruteForce(char *Text, char *Pattern) {

    int TextLen, PatterLen, i, j;

    TextLen = strlen(Text);
    PatterLen = strlen(Pattern);

    for(i = 0; i <= (TextLen - PatterLen); i++) {
        for (j = 0; j < PatterLen; j++) {
            if (*(Text + i + j) != *(Pattern + j))
            break;
        }
        if (j == PatterLen)
            return i;
    }
    return -1;
}

// Boyer Moore


/*
    Bibliografía
    Drozdek, A. (2012). Data Structures and algorithms in C++. Cengage Learning.
*/

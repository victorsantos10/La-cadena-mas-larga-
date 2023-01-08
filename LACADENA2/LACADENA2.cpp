/*
Enunciado    :    99 invitados
Equipo       :
Participantes:    Victor Santos	         ID:  1105977
                  Alexa  Guzmán          ID:  1101488
                  José L. Cruz           ID:  1106529
                  Eros Bencosme          ID:  1104510
                  Manuel Mancebo		 ID:  1105614
Fecha        :    24/11/2022
Materia      :    Laboratorio Estructura de Datos y Algoritmos II
Profesor     :    Casimiro Gilberto Cordero Ramirez
*/

#include <iostream>
#include <string>

using namespace std;
void menu();
void calculoinv(); 

void menu() {
    int opcion;
    string str;
    int v = 0;
    do {
        cout << "\t--LA CADENA MAS LARGA--" << endl;
        cout << "\t1.-Ver todos los resultados" << endl;
        cout << "\t2.-Salir" << endl;
        do {
            cout << "Ingrese una opcion: ";
            cin >> str;
            v = 0;
            char numeros[2] = { '1','2' };
            for (int i = 0; i < str.size(); i++)
            {
                int n = 0;
                for (int a = 0; a < 2; a++)
                {
                    if (str[i] != numeros[a])
                    {
                        n++;
                    }

                }
                if (n == 2)
                {
                    v++;
                }
            }
            if (v > 0)
            {
                cout << "Porfavor no ingresar letras, solo numeros del 1 al 2 ";
            }

        } while (v > 0);
        opcion = stoi(str);
        str = "";
        switch (opcion)
        {
        case 1:
            calculoinv();
            system("pause");
            break;
        case 2:
            exit(EXIT_SUCCESS);
            break;
        }
        system("cls");

    } while (opcion != 3);

}

void calculoinv() {

    int invitado, n, contador, nromayor = 0; // variables a usar

    for (int i = 1; i < 100; i++) { 

        contador = 1;

        invitado = i;

        while (invitado != 4) {

            contador++; // contador se ira iterando mientras invitado sea diferente de 4 

            if (invitado % 2 == 0) {

                invitado = invitado / 2; // calculo para cuando invitado es par 
            }
            else {

                invitado = (invitado * 3) + 1; // calculo para cuando invitado es impar

            }
        }

        if (contador > nromayor) { 

            nromayor = contador; // igualamnos la variable nromayor a contador para imprimir 

            n = i; // igual que el caso anterior
        }
        cout << "el invitado que cuenta con el nro: " << i << " tiene una cadena de = " << contador << "\n"; // muestra los resultados de todas las cadenas
    }
    cout << "EL NUMERO " << n << " TIENE LA CADENA MAS LARGA = " << nromayor << "\n"; // indica que numero tiene la cadena mas larga 
}

int main()
{
     menu();
}


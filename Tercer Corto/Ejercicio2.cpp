/*Se desea un programa en el cual el usuario pueda jugar adivinando un número que está
previamente guardo en el programa.
El número debe de estar en el rango de 1 a 100, solo debe de trabajar con números enteros.
El usuario tendrá 5 intentos para poder adivinar el número. Por cada intento el programa  deberá 
darle estas pistas al usuario: si el número que ingresa  es menor al número secreto,   si el número 
que ingresa mayor al número que está intentando adivinar y cuantos intentos le quedan.  
Si el usuario ya no quiere jugar, indicarle qué pulsar para  finalizar el programa.*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int num= 1+rand()%(101-1), numerox, intentos = 5;
char Tecla;

string probar(int h){
    string a, b, c;
    int num= 1+rand()%(101-1);
    
    a = "Te pasaste. Elige un numero menor: ";
    b = "Muy bajo! Elige un numero mayor para seguir: ";
    c = "FELICIDADES!! Has adivinado el numero!";
    
    
    if (h > num){
        return a;
    }else if (h < num){
        return b;
    }else{
        return c;
    }
   
}

string seguir(char y){
    switch (y)
    {
    case 'E': cout << endl << "Gracias por participar";
        break;
    
    default: cout << "Te quedan "<< intentos << " intentos. ";
        break;
    }
    return 0;
}
int main(void){

    cout << endl << "NÚMERO MAGICO" << endl;
    do
    {
        
        cout << endl << "Ingresa el numero que piensas es el correcto:" << endl;
        cin >> numerox;
        cout << endl;

        --intentos;

        probar(numerox);

        cout << "Quieres seguir jugando?" << endl << "Presiona la letra 'E' MAYUSCULA para salir del juego.";
        cout << endl << "De lo contrario presiona otra tecla cualquiera: ";
        cin >> Tecla; cout << endl;

        seguir(Tecla);
    


    } while (intentos > 0 || numerox != num);
    
}





















/*

int comprobar(int x){
     
    while (x > 0 && x < 100)
    {
        
        if (x > num)
        {
            cout << endl << "El numero " << x << " es mayor que el numero a adivinar." << endl;
        }
        if (x < num)
        {
            cout << endl << "El numero " << x << " es menor que el numero a adivinar" << endl; 
        }
        if (x = num)
        {
            cout << "Felicidades, Has adivinado el numero!" << "Este es " << num << endl;
        }
    }
    cout << endl << "No has introducido un número válido.";
    cin >> x;
    cout << endl;
    return 0;
}


string seguir(char y){

    switch (y)
    {
    case 'E': case 'e': cout << endl << "Gracias por participar";
        break;
    
    default: cout << "Te quedan "<< intentos << " intentos. ";
        break;
    }
    return 0;
}


int main(void){
    cout << num;
    
    *//*cout << "NUMERO MAGICO" << endl << endl;

    do
    {
        cout << endl << "Por favor introduce un numero: ";
        cin >> numerox;
        cout << endl;
        --intentos;
        cout << comprobar(numerox);
        cout << "Quieres seguir jugando?";
        cin >> Tecla;
        cout << seguir(Tecla);
    } while ((intentos > 0) || numerox == num);
    
    
    return 0;
}*/
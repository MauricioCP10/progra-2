//1 Punto
#include<iostream>
#include<string>
using namespace std;

int main(){
  
  string p1;
  cout<<"Ingrese la palabra: ";
  getline(cin, p1);
  string Palabra_invertida;
  
  for(int i = p1.size()-1; i>=0; i--){
    Palabra_invertida += p1[i];
  }
  cout<<"La palabra invertida es: ";
  cout<<Palabra_invertida;
  return 0;
}

//2
#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    string abecedario = "abcdefghijklmnopqrstuvwxyz";
    cout << "Digite la palabra(minusculas): ";
    getline(cin, palabra);

    for (int j = 0; j < palabra.length(); j++) {
        char letra = palabra[j];
        size_t pos = abecedario.find(letra);
        if (pos != string::npos && pos < abecedario.length() - 1) {
            cout << abecedario[pos + 1];
        } else {
            cout << letra;
        }
    }
    cout << endl;

    return 0;
}

//3
#include<iostream>
#include<string>
using namespace std;

int main() {
    string oracion;

    cout << "Ingrese la oración: ";
    getline(cin, oracion);

    bool nuevo_palabra = true;

    for (int i = 0; i < oracion.length(); i++) {
        if (oracion[i] == ' ') {
            nuevo_palabra = true;
        }
        else if (nuevo_palabra && oracion[i] >= 'a' && oracion[i] <= 'z') {
            oracion[i] = oracion[i] - ('a' - 'A');
            nuevo_palabra = false;
        } else {
            nuevo_palabra = false;
        }
    }

    cout << "Oración modificada: " << oracion << endl;

    return 0;
}

//4
#include<iostream>
#include<string>
using namespace std;

int main() {
    string oracion, palabra_mayor = "", palabra_actual = "";
    cout << "Ingrese la oración: ";
    getline(cin, oracion);

    oracion += " ";

    for (char c : oracion) {
        if (c == ' ') {
            if (palabra_actual.length() > palabra_mayor.length()) {
                palabra_mayor = palabra_actual;
            }
            palabra_actual = "";
        } else {
            palabra_actual += c;
        }
    }

    cout << "La palabra más grande es: " << palabra_mayor << endl;

    return 0;
}
//5
#include<iostream>
#include<string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra(minusculas): ";
    getline(cin, palabra);

    for (int i = 0; i < palabra.length() - 1; i++) {
        for (int j = 0; j < palabra.length() - 1 - i; j++) {
            if (palabra[j] > palabra[j + 1]) {
                char temp = palabra[j];
                palabra[j] = palabra[j + 1];
                palabra[j + 1] = temp;
            }
        }
    }

    cout << "Palabra ordenada alfabéticamente: " << palabra << endl;

    return 0;
}

//6
#include<iostream>
#include<string>
using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    for (int i = 0; i < cadena.length() - 2; i++) {
        if (cadena[i] == 'e' && cadena[i + 3] == 'g') {
            cout << "Los caracteres 'e' y 'g' están separados por exactamente 2 lugares." << endl;
            return 0; 
        }
       
        if (cadena[i] == 'g' && cadena[i + 3] == 'e') {
            cout << "Los caracteres 'e' y 'g' están separados por exactamente 2 lugares." << endl;
            return 0; 
        }
    }

    cout << "Los caracteres 'e' y 'g' no están separados por 2 lugares." << endl;

    return 0;
}

//7
#include<iostream>
#include<string>
using namespace std;

int main() {
    string cadena;
    int contador_vocales = 0;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    for (int i = 0; i < cadena.length(); i++) {
        char c = cadena[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador_vocales++;
        }
    }

    cout << "El número de vocales en la cadena es: " << contador_vocales << endl;

    return 0;
}

//8
#include<iostream>
#include<string>
using namespace std;

int main() {
    string oracion;
    int contadorpalabras = 0;
    cout<<"Ingrese la oracion(minusculas): ";
    getline(cin, oracion);

  for(int i=0; i<oracion.length(); i++){
    if((oracion[i] != ' ' && (i == 0 || oracion[i-1] == ' '))){
      contadorpalabras ++;
    }
  }
 cout<<"la cantidad de palabras totales son: "<<contadorpalabras<<endl;
    return 0;
}

//9

#include<iostream>
#include<string>
using namespace std;

int main(){
    string palabra;
    int contador = 0;
    cout << "Ingrese la palabra: ";
    getline(cin, palabra);

    for(int i = 0; i < palabra.length() - 1; i++){
        if(palabra[i] == palabra[i+1]){
            contador++;
            break;
        }
    }

    if(contador > 0){
        cout << "La palabra contiene letras consecutivas repetidas." << endl;
    } else {
        cout << "La palabra no contiene letras consecutivas repetidas." << endl;
    }

    return 0;
}


//10
#include<iostream>
#include<string>
using namespace std;

int main(){
  string p1, Palabra_invertida, palabra_palindroma;
  cout<<"Ingrese la palabra(no use espacios si es oracion): ";
  getline(cin, p1);

  for(int i = p1.size()-1; i>=0; i--){
    Palabra_invertida += p1[i];
  }
  if(p1 == Palabra_invertida){
    cout<<"La palabra si es palindroma"<<endl;
  }else{
    cout<<"La palabra no es palindroma"<<endl;
  }
  cout<<Palabra_invertida;
  return 0;
}

//11

#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    cout << "Introduce una cadena: ";
    getline(cin, cadena);

    string palabraConMaxRepeticiones;
    int maxRepeticiones = 0;
    string palabra;

    for (size_t i = 0; i <= cadena.length(); ++i) {
        if (i == cadena.length() || cadena[i] == ' ') {
            if (palabra.size() > 0) {
                int maxRepeticionesEnPalabra = 0;

                for (size_t j = 0; j < palabra.size(); ++j) {
                    int conteo = 0;
                    for (size_t k = 0; k < palabra.size(); ++k) {
                        if (palabra[j] == palabra[k]) {
                            conteo++;
                        }
                    }
                    if (conteo > maxRepeticionesEnPalabra) {
                        maxRepeticionesEnPalabra = conteo;
                    }
                }

                if (maxRepeticionesEnPalabra > maxRepeticiones) {
                    maxRepeticiones = maxRepeticionesEnPalabra;
                    palabraConMaxRepeticiones = palabra;
                }

                palabra = "";
            }
        } else {
            palabra += cadena[i];
        }
    }

    cout << "Palabra que tiene el mayor número de letras repetidas: " << palabraConMaxRepeticiones << endl;

    return 0;
}

//12
#include<iostream>
#include<string>
using namespace std;

int main() {
    string numeros, resultado = "";
    cout << "Ingrese una cadena de números: ";
    getline(cin, numeros);

    for(int i = 0; i < numeros.length(); i++) {
        resultado += numeros[i];  

        if(i < numeros.length() - 1) {
            int actual = numeros[i] - '0';
            int siguiente = numeros[i+1] - '0';

            if(actual % 2 != 0 && siguiente % 2 != 0) {
                resultado += '-';
            }
        }
    }

    cout << "Cadena modificada: " << resultado << endl;

    return 0;
}

//13
#include<iostream>
#include<string>
using namespace std;

int main() {
    string palabra, resultado = "";
    cout << "Ingrese una palabra: ";
    getline(cin, palabra);

    for(int i = 0; i < palabra.length(); i++) {
        char c = palabra[i];
        if(c >= 'a' && c <= 'z') {
            resultado += c - 32;
        } else if(c >= 'A' && c <= 'Z') {
            resultado += c + 32;
        } else {
            resultado += c;
        }
    }

    cout << "Cadena modificada: " << resultado << endl;

    return 0;
}

//14

#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    cout << "Introduce una cadena: ";
    getline(cin, cadena);

    int suma = 0;
    int numeroActual = 0;

    for (char c : cadena) {
        if (c >= '0' && c <= '9') {
            numeroActual = numeroActual * 10 + (c - '0');
        } else {
            if (numeroActual != 0) {
                suma += numeroActual;
                numeroActual = 0;
            }
        }
    }

    if (numeroActual != 0) {
        suma += numeroActual;
    }

    cout << "Suma de los números: " << suma << endl;

    return 0;
}

//15



//16



//17



//18



//19
#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;

    cout << "Introduce una cadena: ";
    getline(cin, cadena);

    char vocales[100];
    int numVocales = 0;

    for (char c : cadena) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vocales[numVocales++] = c;
        }
    }

    int j = numVocales - 1;
    for (char& c : cadena) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            c = vocales[j--];
        }
    }

    cout << "Cadena original: " << cadena << endl;
    cout << "Después de invertir las vocales de dicha cadena: " << cadena << endl;

    return 0;
}


//20
#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;

    cout << "Introduce una cadena: ";
    getline(cin, cadena);

    for (char& c : cadena) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }

    int longitudMaxima = 0;

    for (int i = 0; i < cadena.length(); ++i) {
        int izquierda = i, derecha = i;
        while (izquierda >= 0 && derecha < cadena.length() && cadena[izquierda] == cadena[derecha]) {
            int longitudActual = derecha - izquierda + 1;
            if (longitudActual > longitudMaxima) {
                longitudMaxima = longitudActual;
            }
            izquierda--;
            derecha++;
        }

        izquierda = i;
        derecha = i + 1;
        while (izquierda >= 0 && derecha < cadena.length() && cadena[izquierda] == cadena[derecha]) {
            int longitudActual = derecha - izquierda + 1;
            if (longitudActual > longitudMaxima) {
                longitudMaxima = longitudActual;
            }
            izquierda--;
            derecha++;
        }
    }

    cout << "Cadena original: " << cadena << endl;
    cout << "Longitud del palíndromo más largo de dicha cadena: " << longitudMaxima << endl;

    return 0;
}
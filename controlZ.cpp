#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char texto[50];
    char borrartexto[20];
    int longitud = 0, longitud2 = 0, contador = 0, contador2 = 0;
    int temp = 0, cont = 0;
    cout<<"Ingrese su texto: ";
    cin.getline(texto,50,'\n');
    cout<<"Su texto es el siguiente: "<<texto;
    cout << "\nPRESIONE Z PARA BORRAR UNA PALABRA\n";
    cin.getline(borrartexto,20,'\n');
    longitud = strlen(texto);
    temp = longitud;
    longitud2 = strlen(borrartexto);
    for(int x=0; x<=longitud2; x++){
        if(borrartexto[x] == 90 || borrartexto[x] == 122){
            contador++;
        }
    }
    for(int t=0; t<=longitud; t++){
        if(texto[t] == ' '){
            contador2++;
        }
    }

    for(int f=temp; f>=0; f--){
        texto[longitud-1]=texto[longitud];//4-3  
        
        if(texto[f-2]== ' ' ){
            cont++;
            if(cont==contador){
                f=0;
            }
        }
        longitud--;
    }
    cout << "Usted ha borrado "<< contador << " palabras\n";    
    cout << "Su texto es: "<<texto<<endl;
    system("pause");
    return 0;
}

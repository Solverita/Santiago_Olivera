#include <iostream>

using namespace std;

void bisiesto(){

    int anioIngresado;

    cout<<"Ingrese un anio:";
    cin>>anioIngresado;
    if(anioIngresado<= 0){
        cout<<"Ingrese un anio valido"<<endl;
    }else if(anioIngresado % 100 == 0 && anioIngresado % 400 == 0 && anioIngresado % 4 == 0){

            cout<<"Es un anio bisiesto"<<endl;
        }else if (anioIngresado % 100 == 0){

            cout<<"NO es un anio bisiesto"<<endl;
            }else if (anioIngresado % 4 == 0){
                cout<<"Es un anio bisiesto"<<endl;
                }else{
                    cout<<"NO es un anio bisiesto"<<endl;
                    }


}


void tablaDeMultiplicarInversa(){

    int numeroAHacerSuTabla;

    cout<<"Ingrese numero:";
    cin>>numeroAHacerSuTabla;

    if(numeroAHacerSuTabla<=0){
        cout<<"Ingrese un numero valido"<<endl;
    }else{

        for(int i=10; i>0;i--){
            cout<<i * numeroAHacerSuTabla<<endl;

        }
    }

}

void FizzBuzz(){
    int numeroLimite;

    cout<<"Ingrese un numero mayor a 15: ";
    cin>>numeroLimite;

    if(numeroLimite < 15){

        cout<<"Ingrese un numero valido"<<endl;
    }else{

            for(int i=1; i<numeroLimite+1; i++){
                    if(i % 3 == 0 && i % 5 == 0){
                       cout<<"FizzBuzz"<<endl;
                    }else if (i % 3 == 0){
                        cout<<"Fizz"<<endl;
                    }else if (i % 5 == 0){
                        cout<<"Buzz"<<endl;
                    }else{
                        cout<<i<<endl;
                    }
            }
    }
}
int main(){

int menuOption;
    do{
        cout<<"---Bienvenido profe---"<<endl;
        cout<<"1.Determinar si es bisiesto."<<endl;
        cout<<"2.Tabla de multiplicar inversa."<<endl;
        cout<<"3.FizzBuzz"<<endl;
        cout<<"4.Salir"<<endl;

        cin>>menuOption;
    if(menuOption< 1 || menuOption>4 ){

        cout<<"Ingrese un numero valido"<<endl;

    }else{

        switch(menuOption){

            case 1: bisiesto();
            break;

            case 2: tablaDeMultiplicarInversa();
            break;

            case 3: FizzBuzz();
            break;

            case 4:
                cout<<"Adios profe!"<<endl;
                break;
            break;
        }
    }
}while(menuOption != 4);

return 0;
}

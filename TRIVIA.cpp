#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<cstdio>
#include<ctime>
#include<time.h>
#include "Op_0.h"
#include "Universo.h"
#include "PICTURE.h"
#include "MitologiaG.h"
using namespace std;
/*
IMPORTANTE, Codigo de C++, Creado y Ejecutable para sistemas Android.
se puede modificar para ser ejecutable para otros sistemas operativos.
*/

void C_Carpetas()
	{fstream Compro;//Herramienta para crear archivos.
	Compro.open("/storage/emulated/0/Android/Preguntas",ios::in);
	if(Compro.fail()){
	system("mkdir /storage/emulated/0/Android/Preguntas");//Carpeta pripal
	}Compro.close();//Bloque de creacion de carpeta Principal.
	Compro.open("/storage/emulated/0/Android/Preguntas/Puntos",ios::in);
	if(Compro.fail()){
	system("mkdir /storage/emulated/0/Android/Preguntas/Puntos");
	}Compro.close();//Bloque de creacion de Carpeta de Puntos.
	Compro.open("/storage/emulated/0/Android/Preguntas/Usuario",ios::in);
	if(Compro.fail()){
	system("mkdir /storage/emulated/0/Android/Preguntas/Usuario");
	}Compro.close();}//Bloque de creacion de Carpeta de Usuario.

int main(){




	C_Carpetas();
	cout<<"******************************************************"<<endl;
	cout<<"*       ESTE ES UN PROGRAMA DE PREGUNTAS RANDOM      *"<<endl;
	cout<<"*TE HAREMOS 5 PREGUNTAS RANDOM Y DEBERAS RESPONDERLAS*"<<endl;
	cout<<"*              ELIGE UN TIPO DE PREGUNTAS            *"<<endl;
	cout<<"******************************************************"<<endl;
   Aqui_0:
   int Op_;

cout<<"******************************"<<endl;
cout<<"* 1)- Universo.              *"<<endl;
cout<<"* 2)- Mitologia Griega.      *"<<endl;
cout<<"* 3)- Peliculas.             *"<<endl;
cout<<"******************************"<<endl;
cout<<" Elije una opcion: "; cin>>Op_;
	if(Op_ == 2612){goto Aqui_1;}
	
	switch(Op_){
        case 1: void Universo(); Universo();break;
        case 2: void MitoG(); MitoG();break;
        case 3: void Pelic(); Pelic();break;
	default: cout<<" Error 001_Op_ "<<endl;goto Aqui_0;}Aqui_1:
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<" ***********************************************"<<endl;
	cout<<" * ¿QUIERES REPETIR OTRO PAQUETE DE PREGUNTAS? *"<<endl;
	cout<<" ***********************************************"<<endl;
	cout<<"1)- Si. "<<endl;
	cout<<"2)- No. "<<endl;
	cout<<" ELIGE UNA OPCION: ";cin>>Op_;
	switch(Op_){
	case 1: cout<<" OK. "<<endl;cout<<endl; goto Aqui_0;
	case 2: cout<<" Ok. Gracias por estar aqui. "<<endl;break;
	default: cout<<" Error 001_Op_ "<<endl;break;}
	cout<<" Fin del Algoritmo 100%100"<<endl;
return 0;}

void Universo(){C_Carpetas();
cout<<"--------------------------------------------------"<<endl;
cout<<"\tBienvenido a las preguntas random del "<<endl;
cout<<"\t               [UNIVERSO] "<<endl;
cout<<"--------------------------------------------------"<<endl;
cout<<" Las preguntas son totalmente random.  "<<endl;
cout<<" Son 15 preguntas de las cuales 5 te hare. "<<endl;
cout<<" Ojala te diviertas. E aqui tus 5 preguntas. "<<endl;
cout<<"--------------------------------------------------"<<endl;
	cout<<endl;
	getch();C_Carpetas();
	Planetas();//Todo el algoritmo de Universo.h
	
}
void MitoG(){C_Carpetas();
cout<<"--------------------------------------------------"<<endl;
cout<<"\tBienvenido a las preguntas random de "<<endl;
cout<<"\t         [Mitoligia Griega] "<<endl;
cout<<"--------------------------------------------------"<<endl;
cout<<" Las preguntas son totalmente random.  "<<endl;
cout<<" Son 15 preguntas de las cuales 5 te hare. "<<endl;
cout<<" Ojala te diviertas. E aqui tus 5 preguntas. "<<endl;
cout<<"--------------------------------------------------"<<endl;
	cout<<endl;
	getch();C_Carpetas();
	Op_3();//Todo el algoritmo de MitologiaG.h
}
    
void Pelic(){C_Carpetas();
cout<<"--------------------------------------------------"<<endl;
cout<<"\tBienvenido a las preguntas random de "<<endl;
cout<<"\t             [PELICULAS] "<<endl;
cout<<"--------------------------------------------------"<<endl;
cout<<" Las preguntas son totalmente random.  "<<endl;
cout<<" Son 25 preguntas de las cuales 10 te hare. "<<endl;
cout<<" Ojala te diviertas. E aqui tus 10 preguntas. "<<endl;
cout<<"--------------------------------------------------"<<endl;
	cout<<endl;
	getch();C_Carpetas();
  Peliculas();//Todo el algoritmo de peliculas.h
}
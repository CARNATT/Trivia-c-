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
using namespace std;//Preguntas sobre el Universo.

//klk
void Tiep(string&FECHA_LOCAL,string&HORA_LOCAL){
	time_t now = time(0);
	tm *ltm = localtime(&now);
	string MES,hora,min,seg,PM;
	int HORA,MIN,SEG,AGE,DIA;
	SEG = ltm->tm_sec;
		
if(1 + ltm->tm_mon == 1){MES = "ENERO";}
else if(1 + ltm->tm_mon == 2){MES = "FEBRERO";}
else if(1 + ltm->tm_mon == 3){MES = "MARZO";}
else if(1 + ltm->tm_mon == 4){MES = "ABRIL";}
else if(1 + ltm->tm_mon == 5){MES = "MAYO";}
else if(1 + ltm->tm_mon == 6){MES = "JUNIO";}
else if(1 + ltm->tm_mon == 7){MES = "JULIO";}
else if(1 + ltm->tm_mon == 8){MES = "AGOSTO";}
else if(1 + ltm->tm_mon == 9){MES = "SEPTIEMBRE";}
else if(1 + ltm->tm_mon == 10){MES = "OCTUBRE";}
else if(1 + ltm->tm_mon == 11){MES = "NOVIEMBRE";}
else if(1 + ltm->tm_mon == 12){MES = "DICIEMBRE";}
else{MES = "ERROR DE FECHA. ";}
	
	if(ltm->tm_hour == 0){HORA = 12;PM = " A.m";}
else if(ltm->tm_hour == 1){HORA = 1;PM = " A.m";}
else if(ltm->tm_hour == 2){HORA = 2;PM = " A.m";}
else if(ltm->tm_hour == 3){HORA = 3;PM = " A.m";}
else if(ltm->tm_hour == 4){HORA = 4;PM = " A.m";}
else if(ltm->tm_hour == 5){HORA = 5;PM = " A.m";}
else if(ltm->tm_hour == 6){HORA = 6;PM = " A.m";}
else if(ltm->tm_hour == 7){HORA = 7;PM = " A.m";}
else if(ltm->tm_hour == 8){HORA = 8;PM = " A.m";}
else if(ltm->tm_hour == 9){HORA = 9;PM = " A.m";}
else if(ltm->tm_hour == 10){HORA = 10;PM = " A.m";}
else if(ltm->tm_hour == 11){HORA = 11;PM = " A.m";}
else if(ltm->tm_hour == 12){HORA = 12;PM = " P.m";}
	
else if(ltm->tm_hour == 13){HORA = 1;PM = " P.m";}
else if(ltm->tm_hour == 14){HORA = 2;PM = " P.m";}
else if(ltm->tm_hour == 15){HORA = 3;PM = " P.m";}
else if(ltm->tm_hour == 16){HORA = 4;PM = " P.m";}
else if(ltm->tm_hour == 17){HORA = 5;PM = " P.m";}
else if(ltm->tm_hour == 18){HORA = 6;PM = " P.m";}
else if(ltm->tm_hour == 19){HORA = 7;PM = " P.m";}
else if(ltm->tm_hour == 20){HORA = 8;PM = " P.m";}
else if(ltm->tm_hour == 21){HORA = 9;PM = " P.m";}
else if(ltm->tm_hour == 22){HORA = 10;PM = " P.m";}
else if(ltm->tm_hour == 23){HORA = 11;PM = " P.m";}
else if(ltm->tm_hour == 24){HORA = 12;PM = " A.m";}
	
	MIN = ltm->tm_min;
	hora = static_cast<ostringstream*>(&(ostringstream() << HORA)) -> str();
	min = static_cast<ostringstream*>(&(ostringstream() << MIN)) -> str();
	seg = static_cast<ostringstream*>(&(ostringstream() << SEG)) -> str();
	
if(ltm->tm_min == 0){HORA_LOCAL = hora + ":00" + ":" +seg + PM;}
else if(ltm->tm_min == 1){HORA_LOCAL = hora + ":01" + ":" +seg + PM;}
else if(ltm->tm_min == 2){HORA_LOCAL = hora + ":02" + ":" +seg + PM;}
else if(ltm->tm_min == 3){HORA_LOCAL = hora + ":03" + ":" +seg + PM;}
else if(ltm->tm_min == 4){HORA_LOCAL = hora + ":04" + ":" +seg + PM;}
else if(ltm->tm_min == 5){HORA_LOCAL = hora + ":05" + ":" +seg + PM;}
else if(ltm->tm_min == 6){HORA_LOCAL = hora + ":06" + ":" +seg + PM;}
else if(ltm->tm_min == 7){HORA_LOCAL = hora + ":07" + ":" +seg + PM;}
else if(ltm->tm_min == 8){HORA_LOCAL = hora + ":08" + ":" +seg + PM;}
else if(ltm->tm_min == 9){HORA_LOCAL = hora + ":09" + ":" +seg + PM;}
else{HORA_LOCAL = hora + ":" + min + ":" +seg + PM;}
	AGE = 1900 + ltm->tm_year;
	DIA = ltm->tm_mday;
	string Dia,Mes,Age;	
	Dia = static_cast<ostringstream*>(&(ostringstream() << DIA)) -> str();
	Age = static_cast<ostringstream*>(&(ostringstream() << AGE)) -> str();	
	FECHA_LOCAL = Dia + "/" + MES + "/" + Age;}

void Tiemp_Carga(){
	struct h{__be64 tiempo;fstream Beta;}Manolo;
	cout<<" Procesando... Espere porfavor. "<<endl;
	for(Manolo.tiempo = 0; Manolo.tiempo <=  100000; ++Manolo.tiempo)
	Manolo.Beta.open("Error. apropocito.",ios::in);
	Manolo.Beta<<" Preguntas de: "<<Manolo.tiempo<<endl;
	Manolo.Beta.close();
	if(Manolo.tiempo == 100001){
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\t\t        [10%]"<<endl;
	cout<<"\t\t     █▒▒▒▒▒▒▒▒▒"<<endl;}
	for(Manolo.tiempo = 0; Manolo.tiempo <=  100000; ++Manolo.tiempo)
	Manolo.Beta.open("Error. apropociyto.",ios::in);
	Manolo.Beta<<" Preguntas de: "<<Manolo.tiempo<<endl;
	Manolo.Beta.close();
	if(Manolo.tiempo == 100001){
	cout<<"\t\t        [20%]"<<endl;
	cout<<"\t\t     ██▒▒▒▒▒▒▒▒"<<endl;}
	for(Manolo.tiempo = 0; Manolo.tiempo <=  200000; ++Manolo.tiempo)
	Manolo.Beta.open("Error. apropocito.",ios::in);
	Manolo.Beta<<" Preguntas de: "<<Manolo.tiempo<<endl;
	Manolo.Beta.close();
	if(Manolo.tiempo == 200001){
	cout<<"\t\t        [40%]"<<endl;
	cout<<"\t\t     ████▒▒▒▒▒▒"<<endl;}
	for(Manolo.tiempo = 0; Manolo.tiempo <=  400000; ++Manolo.tiempo)
	Manolo.Beta.open("Error. apropocito.",ios::in);
	Manolo.Beta<<" Preguntas de: "<<Manolo.tiempo<<endl;
	Manolo.Beta.close();
	if(Manolo.tiempo == 400001){
	cout<<"\t\t        [80%]"<<endl;
	cout<<"\t\t     ███████▒▒▒"<<endl;}
	for(Manolo.tiempo = 0; Manolo.tiempo <=  200000; ++Manolo.tiempo)
	Manolo.Beta.open("Error. apropocito.",ios::in);
	Manolo.Beta<<" Preguntas de: "<<Manolo.tiempo<<endl;
	Manolo.Beta.close();
	if(Manolo.tiempo == 200001){
	cout<<"\t\t        [100%]"<<endl;
	cout<<"\t\t     ██████████"<<endl;}
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\t\t        Listo."<<endl;
	cout<<"\t    [Toque [ENTER] para empezar]"<<endl;getch();
	cout<<endl;}

void Pay_(){
	fstream Beta;int tiempo;
	cout<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<" \t\t    CARGANDO..."<<endl;
	for(tiempo = 0; tiempo <=  1000000; ++tiempo)
	Beta.open("Error. apropocito.",ios::in);
	Beta<<" Preguntas de: "<<tiempo<<endl;
	Beta.close();
	if(tiempo == 1000001){
	cout<<" \t\t     [LISTO]"<<endl;
	cout<<"---------------------------------------------------"<<endl;}}
	

int Peliculas(){int J,H,Random,A[10];
	/*

  Version actual: 20.0_BIG-DATA (02:45Am 10/3/2021)
  Version actual: 20.4_BIG-DATA (02:07Am 13/3/2021)
  version con el contador de puntos.
  version actual: 22.2_BIG-DATA (07:22PM 16/3/2021)(12:59PM)
  version con 25 preguntas y 10 oportunidad.
	*/
string VERSION_ACTUAL = "22.2_BIG-DATA (07:22PM 16/3/2021)";
string INCORRE = "           UFF. TE HAZ EQUIVOCADO.";
string FECHA_LOCAL,HORA_LOCAL;//Tiempo4
string Esp = "---------------------------------------------------";
char Op_0A[10];
__be32 Op_0;
	fstream Sol;
  
//  int E[4] = {0},Total = 0;//Varriables del contador.
 int X_0,X_1,X_2,X_3,X_4,X_5,X_6,X_7,X_8,X_9;
  
	Tiemp_Carga();//Gran carga.
	srand(time(NULL));
	
	
for(J = 1; J <= 10; ++J){
	Random = rand()%25; 
	H = Random;
	if(J == 1){A[0] = H;}//1
	else if(J == 2){A[1] = H;}//2
	else if(J == 3){A[2] = H;}//3
	else if(J == 4){A[3] = H;}//4
	else if(J == 5){A[4] = H;}//5
  else if(J == 6){A[5] = H;}//6
	else if(J == 7){A[6] = H;}//7
	else if(J == 8){A[7] = H;}//8
	else if(J == 9){A[8] = H;}//9
  else if(J == 10){A[9] = H;}//10
   
  if(A[0] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//2
  else if(A[0] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//2
  else if(A[0] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//2
  else if(A[0] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//2
  else if(A[0] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//2
  else if(A[0] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//2
  else if(A[0] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//2
  else if(A[0] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//2
  else if(A[0] == A[9]){Random = rand()%25;H = Random; A[9] = H;}//2
  
  else if(A[1] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[1] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//3
  else if(A[1] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//3
  else if(A[1] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//3
  else if(A[1] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//3
  else if(A[1] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//3
  else if(A[1] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//3
  else if(A[1] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//3
  else if(A[1] == A[9]){Random = rand()%25;H = Random; A[9] = H;}//3
  
  else if(A[2] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[2] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//3
  else if(A[2] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//3
  else if(A[2] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//3
  else if(A[2] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//3
  else if(A[2] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//3
  else if(A[2] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//3
  else if(A[2] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//3
  else if(A[2] == A[9]){Random = rand()%25;H = Random; A[9] = H;}//3
  
  else if(A[3] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[3] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//3
  else if(A[3] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//3
  else if(A[3] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//3
  else if(A[3] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//3
  else if(A[3] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//3
  else if(A[3] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//3
  else if(A[3] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//3
  else if(A[3] == A[9]){Random = rand()%25;H = Random; A[9] = H;}
  
  else if(A[4] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[4] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//3
  else if(A[4] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//3
  else if(A[4] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//3
  else if(A[4] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//3
  else if(A[4] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//3
  else if(A[4] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//3
  else if(A[4] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//3
  else if(A[4] == A[9]){Random = rand()%25;H = Random; A[9] = H;}//3
  
  else if(A[5] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[5] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//3
  else if(A[5] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//3
  else if(A[5] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//3
  else if(A[5] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//3
  else if(A[5] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//3
  else if(A[5] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//3
  else if(A[5] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//3
  else if(A[5] == A[9]){Random = rand()%25;H = Random; A[9] = H;}
  
  else if(A[6] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[6] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//3
  else if(A[6] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//3
  else if(A[6] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//3
  else if(A[6] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//3
  else if(A[6] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//3
  else if(A[6] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//3
  else if(A[6] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//3
  else if(A[6] == A[9]){Random = rand()%25;H = Random; A[9] = H;}//3
  
  else if(A[7] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[7] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//3
  else if(A[7] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//3
  else if(A[7] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//3
  else if(A[7] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//3
  else if(A[7] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//3
  else if(A[7] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//3
  else if(A[7] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//3
  else if(A[7] == A[9]){Random = rand()%25;H = Random; A[9] = H;}//3
  
  else if(A[8] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[8] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//3
  else if(A[8] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//3
  else if(A[8] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//3
  else if(A[8] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//3
  else if(A[8] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//3
  else if(A[8] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//3
  else if(A[8] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//3
  else if(A[8] == A[9]){Random = rand()%25;H = Random; A[9] = H;}//3
  
  else if(A[9] == A[0]){Random = rand()%25;H = Random; A[0] = H;}//3
  else if(A[9] == A[1]){Random = rand()%25;H = Random; A[1] = H;}//3
  else if(A[9] == A[2]){Random = rand()%25;H = Random; A[2] = H;}//3
  else if(A[9] == A[3]){Random = rand()%25;H = Random; A[3] = H;}//3
  else if(A[9] == A[4]){Random = rand()%25;H = Random; A[4] = H;}//3
  else if(A[9] == A[5]){Random = rand()%25;H = Random; A[5] = H;}//3
  else if(A[9] == A[6]){Random = rand()%25;H = Random; A[6] = H;}//3
  else if(A[9] == A[7]){Random = rand()%25;H = Random; A[7] = H;}//3
  else if(A[9] == A[8]){Random = rand()%25;H = Random; A[8] = H;}//3
  }
  
 X_0 = A[0];X_5 = A[5];
 X_1 = A[1];X_6 = A[6];
 X_2 = A[2];X_7 = A[7];
 X_3 = A[3];X_8 = A[8];
 X_4 = A[4];X_9 = A[9];
 int Good[] = {X_0,X_1,X_2,X_3,X_4,X_5,X_6,X_7,X_8,X_9};//Arreglo 10 Espacios
 
 
 

	string Preg[] = {"Cero","Uno","Dos","Tres","Cuatro","Cinco","Seis","Ciete","Ocho","Nueve","Diez","Once","Doce","Trece","Catorse","AA","A","B","C","D","E","F","G","H","I","J"};
 /*
 15 = AA;
 16 = A;
 17 = B
 18 = C
 19 = D
 20 = E
 21 = F
 22 = G
 23 = H
 24 = I
 25 = J
 */
 
	
	char Nombre[50];
	cout<<" INTRODUZCA SU NOMBRE EN MAYUSCULAS: ";
  cin.getline(Nombre,50,'\n');
	/*
	cout<<"---------------------------------------------------"<<endl;
	cout<<"1}- [PREGUNTA NUMERO: "<<X_0<<"] "<<endl;
	cout<<"2}- [PREGUNTA NUMERO: "<<X_1<<"] "<<endl;
	cout<<"3}- [PREGUNTA NUMERO: "<<X_2<<"] "<<endl;
	cout<<"4}- [PREGUNTA NUMERO: "<<X_3<<"] "<<endl;
	cout<<"5}- [PREGUNTA NUMERO: "<<X_4<<"] "<<endl;
  cout<<"6}- [PREGUNTA NUMERO: "<<X_5<<"] "<<endl;
	cout<<"7}- [PREGUNTA NUMERO: "<<X_6<<"] "<<endl;
	cout<<"8}- [PREGUNTA NUMERO: "<<X_7<<"] "<<endl;
	cout<<"9}- [PREGUNTA NUMERO: "<<X_8<<"] "<<endl;
	cout<<"10}-[PREGUNTA NUMERO: "<<X_9<<"] "<<endl;
	cout<<"---------------------------------------------------"<<endl;*/
	int Batman,In = 0;
 cout<<"---------------------------------------------------"<<endl;
	for(Batman = 0; Batman <= 9; ++Batman){
  ++In;
  cout<<In<<"}- [PREGUNTA NUMERO: "<<Good[Batman]<<"] "<<endl;}
  cout<<"---------------------------------------------------"<<endl;
 
	string Op_00,Op_01;//(BA) == Base de Archivos
	int Op_P;
	Op_00 = "";//Nombre de todas las preguntas (BA)
	Op_01 = "";//Respuestas dada por el usuario (BA)
	Op_P = 0;//Aqui va los puntos de los usuarios (BA)
	fstream Bat;
	Batman = 0;
	string BATMAN, ZETA;
	srand(time(NULL));
	Batman = 9999 + rand()%(99999999 - 9999);
	BATMAN = static_cast<ostringstream*>(&(ostringstream() << Batman)) -> str();
	string GETE;
	GETE = "/storage/emulated/0/Android/Preguntas/Puntos/";
	ZETA = GETE  + Nombre + "_" + BATMAN + ".txt";
	Bat.open(ZETA.c_str(),ios::out |ios::app);
	if(Bat.fail()){cout<<" ERROR 001_PUNTOS. "<<endl;
	cout<<" Parece que han borrado la carpeta de puntos."<<endl;
	cout<<" este error se puede repara solo iniciando nuevamente"<<endl;
	cout<<" el algoritmo/Programa. "<<endl;}
	Bat<<"---------------------------------------------------"<<endl;
	Bat<<"      FELICIDADES POR TERMINAL LAS 5 PREGUNTAS "<<endl;
	Bat<<" A continuacion te mostrare los datos recopilado. "<<endl;
	Bat<<endl;
	Bat<<" NOMBRE DEL USUARIO: "<<Nombre<<endl;
	Tiep(FECHA_LOCAL,HORA_LOCAL);
	Bat<<" EL JUEGO INICIO EN :"<<" ("<<HORA_LOCAL;
	Bat<<" "<<FECHA_LOCAL<<")"<<endl;
	Bat.close();
   
	string Pre_N = "",Pre_C = "",Correct = "";
	int S,JK;
   Correct = "             HAZ CONTESTADO CORRECTAMENTE";
	for(S = 0; S <= 9; ++S){//Inicio de las 10 pregumtas.
	Pay_();//Tiempo de carga corto.
	Tiep(FECHA_LOCAL,HORA_LOCAL);//Llamar al TIEMPO REAL DEL SISTEMA.
  JK = 0;
 
	if(Preg[Good[S]] == "Cero"){Aqui_0:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 0]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"   ¿EN QUE AÑO SE DESARROLLA GODZILLA?"<<endl;
	Op_00 = "¿EN QUE AÑO SE DESARROLLA GODZILLA?";
	cout<<"1)- 2018. "<<endl;
	cout<<"2)- 2014. "<<endl;
	cout<<"3)- 1998. "<<endl;
	cout<<"4)- 2016. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_0;
	case 1: cout<<INCORRE<<endl;Op_01 = "2018";break;
	case 2: cout<<Correct<<endl;Op_01 = "2014";JK = 15;break;
	case 3: cout<<INCORRE<<endl;Op_01 = "1998";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "2016";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_0;}}
			
	else if(Preg[Good[S]] == "Uno"){
	Aqui_1:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 1]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<" ¿COMO SE LLAMA EL ATAQUE DE GODZILLA?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL ATAQUE DE GODZILLA?";
	cout<<"1)- ALIENTO ATÓMICOS. "<<endl;
	cout<<"2)- EXPLOSIÓN ATÓMICA. "<<endl;
	cout<<"3)- RAYO MORTAL. "<<endl;
	cout<<"4)- ZILLA FIRE. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_1;
	case 1: cout<<Correct<<endl;Op_01 = "ALIENTO ATÓMICOS";JK = 5;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "EXPLOSIÓN ATÓMICA.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "RAYO MORTAL.";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "ZILLA FIRE.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_0;}}
			
	else if(Preg[Good[S]] == "Dos"){
	Aqui_2:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 2]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"¿COMO SE LLAMA EL ENEMIGO NATURAL DE GODZILLA?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL ENEMIGO NATURAL DE GODZILLA?";
	cout<<"1)- RODAN. "<<endl;
	cout<<"2)- MUTO. "<<endl;
	cout<<"3)- KONG. "<<endl;
	cout<<"4)- MECA-GODZILLA. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_2;
	case 1: cout<<INCORRE<<endl;Op_01 = "RODAN.";break;
	case 2: cout<<Correct<<endl;Op_01 = "MUTO.";JK = 10;break;
	case 3: cout<<INCORRE<<endl;Op_01 = "KONG.";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "MECA-GODZILLA.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_2;}}
	
	else if(Preg[Good[S]] =="Tres"){
	Aqui_3:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 3]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                 ¿RODAN ES UN ALFA?"<<endl;
	Op_00 = "¿RODAN ES UN ALFA?";
	cout<<"1)- NO."<<endl;
	cout<<"2)- SI. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_3;
	case 1: cout<<INCORRE<<endl;Op_01 = "NO.";break;
	case 2: cout<<Correct<<endl;Op_01 = "SI.";JK = 15;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_3;}}
  
	else if(Preg[Good[S]] == "Cuatro"){Aqui_4:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 4]"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"           ¿COMO SE LLAMA EL ANTIGUO GODZILLA?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL ANTIGUO GODZILLA?";
	cout<<"1)- DAGON. "<<endl;
	cout<<"2)- ZILLA. "<<endl;
	cout<<"3)- ZILLA PRIME. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_3;
	case 1: cout<<Correct<<endl;Op_01 = "DAGON. ";JK = 25;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "ZILLA. ";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "ZILLA PRIME.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_4;}}


	else if(Preg[Good[S]] == "Cinco"){
	Aqui_5:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 5]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"            ¿EL LINAJE DE GODZILLA ES?"<<endl;
	Op_00 = "¿EL LINAJE DE GODZILLA ES?";
	cout<<"1)- TITANES."<<endl;
	cout<<"2)- ZILLAS ALFA. "<<endl;
	cout<<"3)- TITANUS ZILLA."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_5;
	case 1: cout<<INCORRE<<endl;Op_01 = "TITANES";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "ZILLAS ALFA.";break;
	case 3: cout<<Correct<<endl;Op_01 = "TITANUS ZILLA.";JK = 15;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_5;}}

                
	else if(Preg[Good[S]] == "Seis"){
	Aqui_6:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 6]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"             ¿GODZILLA SE ALIMENTA DE?"<<endl;
	Op_00 ="¿GODZILLA SE ALIMENTA DE?";
	cout<<"1)- PECES."<<endl;
	cout<<"2)- PLATAS. "<<endl;
	cout<<"3)- RADIACIÓN."<<endl;
	cout<<"4)- LAVA."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_6;
	case 1: cout<<INCORRE<<endl;Op_01 = "PECES.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "PLATAS.";break;
	case 3: cout<<Correct<<endl;Op_01 = "RADIACIÓN.";JK = 25;break;
	case 4: cout<<INCORRE<<endl;Op_01 = "LAVA.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_6;}}
			
	else if(Preg[Good[S]] == "Ciete"){Aqui_7:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 7]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"          ¿COMO SE LLAMA DONDE NACIÓ KONG?"<<endl;
	Op_00 = "¿COMO SE LLAMA DONDE NACIÓ KONG?";
	cout<<"1)- SKULL ISLAND."<<endl;
	cout<<"2)- TIERRA HUECA. "<<endl;
	cout<<"3)- TERRARIA."<<endl;
	cout<<"4)- NAPA."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_7;
	case 1: cout<<Correct<<endl;Op_01 = "SKULL ISLAND";JK = 10;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "TIERRA HUECA.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "TERRARIA";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "NAPA";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_7;}}
					
	else if(Preg[Good[S]] == "Ocho"){Aqui_8:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 8]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"      ¿COMO SE LLAMA EL ENEMIGO NATURAL DE KONG?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL ENEMIGO NATURAL DE KONG?";
	cout<<"1)- LOS MUTO."<<endl;
	cout<<"2)- LOS RODAN"<<endl;
	cout<<"3)- LOS TREPA CREANEOS."<<endl;
	cout<<"4)- LOS NIGHTMENE."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_8;
	case 1: cout<<INCORRE<<endl;Op_01 = "LOS MUTO.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "LOS RODAN.";break;
	case 3: cout<<Correct<<endl;Op_01 = "LOS TREPA CREANEOS.";JK = 10;break;
	case 4: cout<<INCORRE<<endl;Op_01 = "LOS NIGHTMENE.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_8;}}
			
			
	else if(Preg[Good[S]] == "Nueve"){Aqui_9:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 9]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"     ¿COMO SE LLAMA EL MONSTRUO CERO?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL MONSTRUO CERO?";
	cout<<"1)- ROCA."<<endl;
	cout<<"2)- GHIDORA. "<<endl;
	cout<<"3)- HIDRA."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
 	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_9;
	case 1: cout<<INCORRE<<endl;Op_01 = "ROCA.";break;
	case 2: cout<<Correct<<endl;Op_01 = "GHIDORA.";JK = 20;break;
	case 3: cout<<INCORRE<<endl;Op_01 = "HIDRA.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_9;}}
			
			
			
	else if(Preg[Good[S]] =="Diez"){
	Aqui_10:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 10]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"¿COMO SE LLAMA LA PEOR VERSIÓN DE GODZILLA?"<<endl;
	Op_00 = "¿COMO SE LLAMA LA PEOR VERSIÓN DE GODZILLA?";
	cout<<"1)- ZILLA."<<endl;
	cout<<"2)- DESTROYA."<<endl;
	cout<<"3)- MEGA-ZILLA."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_10;
	case 1: cout<<Correct<<endl;Op_01 = "ZILLA.";JK = 25;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "DESTROYA.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "MEGA-ZILLA.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_10;}}
	
	
	
	else if(Preg[Good[S]] =="Once"){Aqui_11:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 11]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"           ¿CUAL ES EL TITULO DE RODAN?"<<endl;
	Op_00 =  "¿CUAL ES EL TITULO DE RODAN?";
	cout<<"1)- EL DESTRUCTOR. "<<endl;
	cout<<"2)- EL DEMONIO DE FUEGO."<<endl;
	cout<<"3)- LA BESTIA."<<endl;
	cout<<"4)- LA MAQUINA. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_11;
	case 1: cout<<INCORRE<<endl;Op_01 = "EL DESTRUCTOR.";break;
	case 2: cout<<Correct<<endl;Op_01 = "EL DEMONIO DE FUEGO.";JK = 25;break;
	case 3: cout<<INCORRE<<endl;Op_01 = "LA BESTIA.";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "LA MAQUINA.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_11;}}
	
	else if(Preg[Good[S]] =="Doce"){Aqui_12:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 12]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"         ¿CUAL ES EL TÍTULO DE GODZILLA?"<<endl;
	Op_00 = "¿CUAL ES EL TÍTULO DE GODZILLA?";
	cout<<"1)- EL DIOS DE LOS TITANES. "<<endl;
	cout<<"2)- EL DINOSAURIO. "<<endl;
	cout<<"3)- EL REY DE LOS MONSTROU. "<<endl;
	cout<<"4)- EL REY DE LOS TITANES. "<<endl;
     
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_12;
	case 1: cout<<INCORRE<<endl;Op_01 = "EL DIOS DE LOS TITANES.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "EL DINOSAURIO. ";break;
	case 3: cout<<Correct<<endl;Op_01 = "EL REY DE LOS MONSTROU. ";JK = 10;break;
	case 4: cout<<Correct<<endl;Op_01 = "EL REY DE LOS TITANES. ";JK = 10;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_12;}}
	
	
	else if(Preg[Good[S]]=="Trece"){
	Aqui_13:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 13]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"¿CUAL ES EL TITULO DE MOTHRA?"<<endl;
	Op_00 = "¿CUAL ES EL TITULO DE MOTHRA?";
	cout<<"1)- LA REINA DE LOS TITANES. "<<endl;
	cout<<"2)- LA REINA DE LOS MONSTROU. "<<endl;
	cout<<"3)- EL PRINCIPE. "<<endl;
	cout<<"4)- EL ALFA MADRE. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_13;
	case 1: cout<<Correct<<endl;Op_01 = "LA REINA DE LOS TITANES. ";JK = 15;break;
	case 2: cout<<Correct<<endl;Op_01 = "LA REINA DE LOS MONSTROU.";JK = 15;break;
	case 3: cout<<INCORRE<<endl;Op_01 = "EL PRINCIPE. ";break;
  case 4: cout<<INCORRE<<endl;Op_01 = "LA ALFA MADRE. ";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_13;}}
		
	
	else if(Preg[Good[S]]=="Catorse"){
	Aqui_14:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 14]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"¿COMO SE LLAMA EL ARMA EN CONTRA DE LOS TITANES?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL ARMA EN CONTRA DE LOS TITANES?";
	cout<<"1)- DESTRUCTOR DE OXIGENO."<<endl;
	cout<<"2)- HACHA DE BATALLA. "<<endl;
	cout<<"3)- LA PERFODARORA PDT. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_14;
	case 1: cout<<Correct<<endl;Op_01 ="DESTRUCTOR DE OXIGENO. ";JK = 20;break;
	case 2: cout<<INCORRE<<endl;Op_01 ="HACHA DE BATALLA. ";break;
	case 3: cout<<INCORRE<<endl;Op_01 ="LA PERFODARORA PDT. ";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_14;}}
	
			
	else if(Preg[Good[S]]=="AA"){Aqui_15:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 15]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
  cout<<"  ¿EN QUE PARTE DEL MUNDO SE DESARROLLA LA ÚLTIMO "<<endl;
  cout<<"    BATALLA DE GODZILLA EL REY DE LOS MONSTRUO?"<<endl;
	Op_00 = " ¿EN QUE PARTE DEL MUNDO SE DESARROLLA LA ÚLTIMO BATALLA DE GODZILLA EL REY DE LOS MONSTRUO?";
	cout<<"1)- BOSTON."<<endl;
	cout<<"2)- CHICAGO. "<<endl;
	cout<<"3)- WASHINGTON, D.C "<<endl;
	cout<<"4)- HAWAI. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_15;
	case 1: cout<<Correct<<endl;Op_01 = "BOSTON.";JK = 25;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "CHICAGO. ";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "WASHINGTON, D.C ";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "HAWAI. ";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_15;}}

  
  else if(Preg[Good[S]]=="A"){
  Aqui_16:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 16]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"            ¿COMO SE LLAMA EL PADRE DE BROLY?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL PADRE DE BROLY?";
	cout<<"1)- PARAGUS."<<endl;
	cout<<"2)- SHIVA. "<<endl;
	cout<<"3)- RAIDEN. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_16;
	case 1: cout<<Correct<<endl;Op_01 ="PARAGUS. ";JK = 20;break;
	case 2: cout<<INCORRE<<endl;Op_01 ="SHIVA. ";break;
	case 3: cout<<INCORRE<<endl;Op_01 ="RAIDEN. ";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_16;}}
  
  
  else if(Preg[Good[S]]=="B"){
	Aqui_17:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 17]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"  ¿QUE NUMERO ES EL UNIVERSO PRINCIPAL DE MARVEL?"<<endl;
	Op_00 = "¿QUE NUMERO ES EL UNIVERSO PRINCIPAL DE MARVEL?";
	cout<<"1)- 866. "<<endl;
	cout<<"2)- 001. "<<endl;
	cout<<"3)- 666. "<<endl;
	cout<<"4)- 616. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_17;
	case 1: cout<<INCORRE<<endl;Op_01 = "866. ";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "001.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "666. ";break;
  case 4: cout<<Correct<<endl;Op_01 = "616. ";JK = 15;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_17;}}
  
  
  else if(Preg[Good[S]]=="C"){
	Aqui_18:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 18]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"    ¿QUIEN ES MAS FUERTE ENTRE THANOS Y HULK?"<<endl;
	Op_00 = "¿QUIEN ES MAS FUERTE ENTRE THANOS Y HULK?";
	cout<<"1)- THANOS. "<<endl;
	cout<<"2)- HULK. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_18;
	case 1: cout<<Correct<<endl;Op_01 = "THANOS. ";break;
	case 2: cout<<Correct<<endl;Op_01 = "HULK. ";JK = 15;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_18;}}
  
  else if(Preg[Good[S]]=="D"){
	Aqui_19:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 19]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"       ¿COMO LE DICEN AL AMIGO DE SPIDER-MAN?"<<endl;
	Op_00 = "¿COMO LE DICEN AL AMIGO DE SPIDER-MAN?";
	cout<<"1)- HARRY. "<<endl;
	cout<<"2)- CUATRO OJOS. "<<endl;
	cout<<"3)- EL CHICO DE LA SILLA. "<<endl;
	cout<<"4)- NED. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_19;
	case 1: cout<<INCORRE<<endl;Op_01 = "HARRY. ";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "CUATRO OJOS.";break;
	case 3: cout<<Correct<<endl;Op_01 = "EL CHICO DE LA SILLA. ";JK = 15;break;
  case 4: cout<<INCORRE<<endl;Op_01 = "NED. ";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_19;}}
  
  else if(Preg[Good[S]]=="E"){
	Aqui_20:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 20]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"       ¿CUAL ES EL SEGUNDO AVENGER MAS FUERTE?"<<endl;
	Op_00 = "¿CUAL ES EL SEGUNDO AVENGER MAS FUERTE?";
	cout<<"1)- SPIDER-MAN. "<<endl;
	cout<<"2)- THOR. "<<endl;
	cout<<"3)- HULK. "<<endl;
	cout<<"4)- CAPITAN AMERICA. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_20;
	case 1: cout<<INCORRE<<endl;Op_01 = "SPIDER-MAN. ";break;
	case 2: cout<<Correct<<endl;Op_01 = "THOR.";JK = 15;break;
	case 3: cout<<INCORRE<<endl;Op_01 = "HULK. ";break;
  case 4: cout<<INCORRE<<endl;Op_01 = "CAPITAN AMERICA. ";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_20;}}
  
  
  else if(Preg[Good[S]]=="F"){
	Aqui_21:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 21]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"       ¿COMO SE LLAMA EL MEJOR AMIGO DE ANT-MAN?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL MEJOR AMIGO DE ANT-MAN?";
	cout<<"1)- JOEL. "<<endl;
	cout<<"2)- BEN. "<<endl;
	cout<<"3)- ANTONIO. "<<endl;
	cout<<"4)- LUIS. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_21;
	case 1: cout<<INCORRE<<endl;Op_01 = "JOEL. ";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "BEN.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "ANTONIO. ";break;
  case 4: cout<<Correct<<endl;Op_01 = "LUIS. ";JK = 15;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_21;}}
  
  
  else if(Preg[Good[S]]=="G"){
	Aqui_22:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 22]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"¿EN QUE PELICULA APARECE POR PRIMERA VES OJO DE ARCON?"<<endl;//error.
	Op_00 = "¿EN QUE PELICULA APARECE POR PRIMERA VES OJO DE ARCON";
	cout<<"1)- AVENGER. "<<endl;
	cout<<"2)- THOR. "<<endl;
	cout<<"3)- IRON MAN 2. "<<endl;
	cout<<"4)- CAPITAN AMERICA EL PRIMER VENGADOR. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_22;
	case 1: cout<<INCORRE<<endl;Op_01 = "AVENGER. ";break;
	case 2: cout<<Correct<<endl;Op_01 = "THOR.";JK = 15;break;
	case 3: cout<<INCORRE<<endl;Op_01 = "IRON MAN 2. ";break;
  case 4:cout<<INCORRE<<endl;Op_01 = "CAPITAN AMERICA EL PRIMER VENGADOR.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_22;}}
  
  else if(Preg[Good[S]]=="H"){
	Aqui_23:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 23]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<" ¿COMO SE LLAMA EL ENEMIGO PRINCIPAL DE IRON MAN 3?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL ENEMIGO PRINCIPAL DE IRON MAN 3?";
	cout<<"1)- OVADALLA STEIS. "<<endl;
	cout<<"2)- EXTREMIS. "<<endl;
	cout<<"3)- LOS 10 ANILLOS. "<<endl;
	cout<<"4)- NINGUNO DE ELLOS "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_23;
	case 1: cout<<INCORRE<<endl;Op_01 = "OVADALLA STEIS. ";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "EXTREMIS.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "LOS 10 ANILLOS. ";break;
  case 4:cout<<Correct<<endl;Op_01 = "NINGUNA DE LAS OPCIONES.";JK = 15;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_23;}}
  
  else if(Preg[Good[S]]=="I"){
	Aqui_24:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 24]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<" ¿COMO SE LLAMA EL ENEMIGO PRINCIPAL DE (IRON MAN 1)?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL ENEMIGO PRINCIPAL DE (IRON MAN 1)?";
	cout<<"1)- OVADALLA STEIS. "<<endl;
	cout<<"2)- EL MANDARIN. "<<endl;
	cout<<"3)- VICTOR ZAS. "<<endl;
	cout<<"4)- EL RUSO. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_24;
	case 1: cout<<Correct<<endl;Op_01 = "OVADALLA STEIS. ";JK = 15;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "EL MANDARIN.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "VICTOR ZAS. ";break;
  case 4:cout<<INCORRE<<endl;Op_01 = "EL RUSO.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_24;}}
  
  else if(Preg[Good[S]]=="J"){
	Aqui_25:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 25]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<" ¿COMO SE LLAMA EL ARMA DE THOR EN AVENGER 4?"<<endl;
	Op_00 = "¿COMO SE LLAMA EL ARMA DE THOR EN AVENGER 4??";
	cout<<"1)- JMIORNK "<<endl;
	cout<<"2)- STHORBREAK. "<<endl;
	cout<<"3)- LAS DOS. "<<endl;
	cout<<"4)- NINGUNA. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_25;
	case 1: cout<<INCORRE<<endl;Op_01 = "JMIORNK. ";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "STHORBREAK.";break;
	case 3: cout<<Correct<<endl;Op_01 = "LAS DOS. ";JK = 15;break;
  case 4:cout<<INCORRE<<endl;Op_01 = "NINGUNA.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_25;}}
  
  
  
 
//  como se llama el padre de tony stark(haguar)
 
  
string Ban = "";
    
   /*
  fstream Cpp;
  Cpp.open("/storage/emulated/0/C.txt",ios::out);
  if(Cpp.fail()){cout<<" Algo a salido mal :("<<endl;exit(1);}
  Cpp<<JK;
  Cpp.close();
  Cpp.open("/storage/emulated/0/C.txt",ios::in);
  if(Cpp.fail()){cout<<" Algo a salido mal :("<<endl;exit(1);}
  Cpp>>C;
  Cpp.close();
  E[J] = C;
  */
    
  
  
  
    
	Bat.open(ZETA.c_str(),ios::out |ios::app);
	if(Bat.fail()){cout<<" ERROR 001_PUNTOS. "<<endl;}
	Bat<<endl;
	Bat<<" PREGUNTA NUMERO: "<<Good[S]<<endl;
	Bat<<" LA PREGUNTA ES: "<<Op_00<<endl;
	Bat<<" PREGUNTA CONTESTADAS CON: "<<Op_01<<endl;
  if(JK == 0){Ban = "INCORRECTO. ";}else{Ban = "CORRECTO. ";}
  Bat<<" LA RESPUESTA ES: "<<Ban<<endl;
	Bat<<" PUNTOS POR PREGUNTA: "<<JK<<endl;
	Bat<<" TIEMPO EN RESPONDE PREGUNTA: "<<"("<<HORA_LOCAL;
	Bat<<" "<<FECHA_LOCAL<<")"<<endl;
	Bat.close();
  
  

}cout<<endl;//Fin del bucle de las 5 preguntas.
	Tiemp_Carga();
	cout<<"---------------------------------------------------"<<endl;
	cout<<"          TOCA UNA TECLA PARA CONTINUAR "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	getch();
	Bat.open(ZETA.c_str(),ios::out |ios::app);
	if(Bat.fail()){cout<<" ERROR 001_PUNTOS. "<<endl;}

  
	Bat<<endl;
	Bat<<" VERSION DEL ALGORITMO: "<<VERSION_ACTUAL<<endl;
	Bat<<" DIA DE CREACION:  "<<FECHA_LOCAL<<endl;
	Bat<<" HORA DE CREACION: "<<HORA_LOCAL<<endl;
	Bat<<endl;
	Bat<<"---------------------------------------------------"<<endl;
	Bat.close();
	
	
	
	cout<<"---------------------------------------------------"<<endl;
	cout<<"   En hora buena. haz completado las 5 preguntas. "<<endl;
	cout<<"            FELICIDADES "<<Nombre<<endl;
	cout<<" Tus respuestas se encuentra en tus archivos. "<<endl;
	cout<<" Busca en tus archivo los siguiente. "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"1}-Almacenamiento Interno. "<<endl;
	cout<<"2}-Busca la carpeta con nombre [Android]"<<endl;
	cout<<"3}-Busca la carpeta con nombre [Preguntas]"<<endl;
	cout<<"4}-Busca la carpeta con nombre [Puntos]"<<endl;
	cout<<"5}-Busca el archivo con nombre: "<<Nombre<<"_"<<BATMAN<<".txt"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
 void KSS();
return 0;}
void KSS(){

}

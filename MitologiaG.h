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
using namespace std;//Preguntas sobre Mitologia Griega;


void Tiempo_Cargar22(){
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


void Tienpoo(string&FECHA_LOCAL,string&HORA_LOCAL){
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

void Playy(){
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


int Op_3(){int J,H,Random,A[5];
	/*
	Version anterio: 17.0_TIME. (01:36Am 4/3/2021)
	Version actual: 20.0_BIG-DATA (02:45Am 10/3/2021)
  Version actual: 20.4_BIG-DATA (02:07Am 13/3/2021)
  version con el contador de puntos.
	*/
string VERSION_ACTUAL = "20.4_BIG-DATA (02:07Am 13/3/2021)";
int E[4] = {0},C = 0,Total = 0;//Varriables del contador.
string INCORRE = "           UFF. TE HAZ EQUIVOCADO.";
string FECHA_LOCAL,HORA_LOCAL;
string Esp = "---------------------------------------------------";
char Op_0A[10];
__be32 Op_0;
	fstream Sol;
	Tiempo_Cargar22();
	srand(time(NULL));
	for(J = 1; J <= 5; ++J){
	Random = rand()%15; 
	H = Random;
	if(J == 1){A[0] = H;}//1
	else if(J == 2){A[1] = H;}//2
	else if(J == 3){A[2] = H;}//3
	else if(J == 4){A[3] = H;}//4
	else if(J == 5){A[4] = H;}//5
	if(A[0] == A[1]){Random = rand()%15;H = Random; A[1] = H;}//2
	else if(A[0] == A[2]){Random = rand()%15;H = Random; A[2] = H;}//2
	else if(A[0] == A[3]){Random = rand()%15;H = Random; A[3] = H;}//2
	else if(A[0] == A[4]){Random = rand()%15;H = Random; A[4] = H;}//2}
	else if(A[1] == A[0]){Random = rand()%15;H = Random; A[0] = H;}//2
	else if(A[1] == A[2]){Random = rand()%15;H = Random; A[2] = H;}//3
	else if(A[1] == A[3]){Random = rand()%15;H = Random; A[3] = H;}//4
	else if(A[1] == A[4]){Random = rand()%15;H = Random; A[4] = H;}//A[1]_ 5
	else if(A[2] == A[0]){Random = rand()%15;H = Random; A[0] = H;}//1}
	else if(A[2] == A[1]){Random = rand()%15;H = Random; A[1] = H;}
	else if(A[2] == A[3]){Random = rand()%15;H = Random; A[3] = H;}
	else if(A[2] == A[4]){Random = rand()%15;H = Random; A[4] = H;}//A[2]_ 5
	else if(A[3] == A[0]){Random = rand()%15;H = Random; A[0] = H;}//1}
	else if(A[3] == A[1]){Random = rand()%15;H = Random; A[1] = H;}
	else if(A[3] == A[2]){Random = rand()%15;H = Random; A[2] = H;}
	else if(A[3] == A[4]){Random = rand()%15;H = Random; A[4] = H;}//A[3]_ 5
	else if(A[4] == A[0]){Random = rand()%15;H = Random; A[0] = H;}//1}
	else if(A[4] == A[1]){Random = rand()%15;H = Random; A[1] = H;}
	else if(A[4] == A[2]){Random = rand()%15;H = Random; A[2] = H;}
	else if(A[4] == A[3]){Random = rand()%15;H = Random; A[3] = H;}}//A[4]_ 5
	
// elige 5 numeros random desde 0 a 15, y esto se guarda en un array.
// el Array de numero se guarda en un arreglo de numeros de 5 espacios.
	
	int X_0,X_1,X_2,X_3,X_4;
	X_0 = A[0];
	X_1 = A[1];
	X_2 = A[2];
	X_3 = A[3];
	X_4 = A[4];
	int Good[] = {X_0,X_1,X_2,X_3,X_4};//Arreglo de 5 Espacios.
	

	string Preg[] = {"Cero","Uno","Dos","Tres","Cuatro","Cinco","Seis","Ciete","Ocho","Nueve","Diez","Once","Doce","Trece","Catorse","Quinse"};
	char Nombre[50];
	cout<<" INTRODUZCA SU NOMBRE EN MAYUSCULAS: ";cin.getline(Nombre,50,'\n');
	cout<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"1}- [PREGUNTA NUMERO: "<<X_0<<"] "<<endl;
	cout<<"2}- [PREGUNTA NUMERO: "<<X_1<<"] "<<endl;
	cout<<"3}- [PREGUNTA NUMERO: "<<X_2<<"] "<<endl;
	cout<<"4}- [PREGUNTA NUMERO: "<<X_3<<"] "<<endl;
	cout<<"5}- [PREGUNTA NUMERO: "<<X_4<<"] "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	/*
	int P_0,P_1,P_2,P_3,P_4,P_5,P_6,P_7,P_8,P_9,P_10,P_11,P_12,P_13,P_14,P_15;
	//tirulo de las preguntas.
	string Op_00,Op_1,Op_2,Op_3,Op_4,Op_5,Op_6,Op_7,Op_8,Op_9;
	string Op_10,Op_11,Op_12,Op_13,Op_14,Op_15;
	//Ttulos de las preguntas.
	string Op_000,Op_01,Op_02,Op_03,Op_04,Op_05,Op_06,Op_07,Op_08,Op_09;
	string Op_010,Op_011,Op_012,Op_013,Op_014,Op_015;
	
	
	
	P_0 = 0; P_7 = 0; P_14 = 0;
	P_1 = 0; P_8 = 0; P_15 = 0;
	P_2 = 0; P_9 = 0;
	P_3 = 0; P_10 = 0;
	P_4 = 0; P_11 = 0;
	P_5 = 0; P_12 = 0;
	P_6 = 0; P_13 = 0;
	*/
	
	string Op_00,Op_01;//(BA) == Base de Archivos
	Op_00 = "";//Nombre de todas las preguntas (BA)
	Op_01 = "";//Respuestas dada por el usuario (BA)
	
	fstream Bat;
	int Batman;
	string BATMAN, ZETA;
	srand(time(NULL));
	Batman = 9999 + rand()%(99999999 - 9999);
	BATMAN = static_cast<ostringstream*>(&(ostringstream() << Batman)) -> str();
	string GETE;
	GETE = "/storage/emulated/0/Android/Preguntas/Puntos/";
	ZETA = GETE  + Nombre + "_" + BATMAN + ".txt";
	Bat.open(ZETA.c_str(),ios::out |ios::app);
	if(Bat.fail()){cout<<"                ERROR 001_Inicio."<<endl;
	getch();
	cout<<" Parece que han borrado la carpeta de puntos."<<endl;
	cout<<" O el nombre que haz usado evita crear el archivo. "<<endl;
	cout<<" Sere la ventana y ponga otro nombre. "<<endl;
	cout<<" este error se puede repara solo iniciando nuevamente"<<endl;
	cout<<" el algoritmo/Programa. "<<endl;
	cout<<" Si el problema continua hable con carnat. "<<endl;getch();exit(1);}
	Bat<<"---------------------------------------------------"<<endl;
	Bat<<"      FELICIDADES POR TERMINAL LAS 5 PREGUNTAS "<<endl;
	Bat<<" A continuacion te mostrare los datos recopilado. "<<endl;
	Bat<<endl;
	Bat<<" NOMBRE DEL USUARIO: "<<Nombre<<endl;
	Tienpoo(FECHA_LOCAL,HORA_LOCAL);
	Bat<<" EL JUEGO INICIO EN :"<<" ("<<HORA_LOCAL;
	Bat<<" "<<FECHA_LOCAL<<")"<<endl;
	Bat.close();
	string Pre_N = "",Pre_C = "";
	int S,JK;
	string Wey = "                HAZ CONTESTADO CORRECTAMENTE",Ban;
	for(S = 0; S <= 4; ++S){
	Playy();
	Tienpoo(FECHA_LOCAL,HORA_LOCAL);
  JK = 0;
	if(Preg[Good[S]] == "Cero"){Aqui_0:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 0]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                ¿QUIEN ES TANATHOS?"<<endl;
	Op_00 = "¿QUIEN ES TANATHOS?";
	cout<<" 1)- Dios del cielo. "<<endl;
	cout<<" 2)- Dios de los oceanos. "<<endl;
	cout<<" 3)- Dios de la muerte pasiva. "<<endl;
	cout<<" 4)- Dios de la muerte violenta."<<endl;
	cout<<" 5)- Nunguna de esas opciones. "<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_0;
	case 1: cout<<INCORRE<<endl;Op_01 = "Dios del cielo.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Dios de los oceanos.";break;
	case 3: cout<<Wey<<endl;Op_01 = "Dios de la muerte pasiva.";JK = 30;break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Dios de la muerte violenta.";break;
	case 5: cout<<INCORRE<<endl;Op_01 = "respuesta capciosa.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_0;}}
			
	else if(Preg[Good[S]] == "Uno"){
	Aqui_1:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 1]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\t                ¿Quien es ERMES?"<<endl;
	Op_00 = "¿Quien es ermes?";
	cout<<" 1)- Dios de la velocidad. "<<endl;
	cout<<" 2)- Dios de los oceanos. "<<endl;
	cout<<" 3)- Dios de la querra. "<<endl;
	cout<<" 4)- Dios de la Luz. "<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_1;
	case 1: cout<<Wey<<endl;Op_01 = "Dios de la velocidad.";JK = 15;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Dios de la querra.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "Dios de la querra.";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Dios de la Luz.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_1;}}
			
	else if(Preg[Good[S]] == "Dos"){Aqui_2:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 2]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                ¿Quien es [Demeter]"<<endl;
	Op_00 = "¿Quien es [Demeter]";
	cout<<" 1)- Diosa de la cosecha y el alimento. "<<endl;
	cout<<" 2)- Diosa de la fertilidad."<<endl;
	cout<<" 3)- Diosa de la piedad y la paz."<<endl;
	cout<<" 4)- Diosa de la Justicia."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_2;
	case 1: cout<<Wey<<endl;
   Op_01 = "Diosa de la cosecha y el alimento.";JK=20;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Diosa de la fertilidad.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "Diosa de la piedad y la paz.";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Diosa de la Justicia.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_2;}}
	
	else if(Preg[Good[S]] =="Tres"){Aqui_3:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 3]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"    ¿Quien fue el primer Dios olimpico en nacer?"<<endl;
	Op_00 = "¿Quien fue el primer Dios olimpico en nacer?";
	cout<<" 1)- ZEUS. "<<endl;
	cout<<" 2)- POSEIDON. "<<endl;
	cout<<" 3)- DEMETER. "<<endl;
	cout<<" 4)- GAYA."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_3;
	case 1: cout<<INCORRE<<endl;Op_01 = "ZEUS.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "POCEIDON.";break;
	case 3: cout<<Wey<<endl;Op_01 = "DEMETER.";JK = 30;break;
	case 4: cout<<INCORRE<<endl;Op_01 = "GAYA.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_3;}}


	else if(Preg[Good[S]] == "Cuatro"){Aqui_4:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 4]"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"\t            ¿Quien es [Zeus]"<<endl;
	cout<<" 1)- Rey de los Dioses. "<<endl;
	cout<<" 2)- Padre de los Dioses."<<endl;
	cout<<" 3)- Dios Olimpico. "<<endl;
	cout<<"--------------------------------------------------"<<endl;
	Op_00 = "¿Quien es Zeus. ";
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_4;
	case 1: cout<<Wey<<endl;Op_01 = "Rey de los Dioses.";JK = 20;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Padre de los Dioses.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "Dios Olimpico.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_4;}}


	else if(Preg[Good[S]] == "Cinco"){Aqui_5:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 5]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\t            ¿Quien es [Atlas]"<<endl;
	cout<<" 1)- Rey de los titanes. "<<endl;
	cout<<" 2)- Jefe de querra de los titanes."<<endl;
	cout<<" 3)- Un titan."<<endl;
	cout<<" 4)- Un titan importante, motivo de Atlantida"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	Op_00 = "¿Quien es Atlas";
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_5;
	case 1: cout<<INCORRE<<endl;Op_01 = "Rey de los titanes.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Jefe de querra de los titanes.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "Un titan.";break;
	case 4: cout<<Wey<<endl;
	Op_01 = "Un titan importante, motivo de Atlantida.";JK = 20;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_5;}}

	else if(Preg[Good[S]] == "Seis"){Aqui_6:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 6]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\t            ¿Quien es [Cronnos]"<<endl;
	cout<<" 1)- Rey de los Titanes. "<<endl;
	cout<<" 2)- Rey de los Dioses. "<<endl;
	cout<<" 3)- Un Titan importante. "<<endl;
	cout<<" 4)- Jefe militar de los Titanes."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	Op_00 = "¿Quien es cronnos?";
	
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_6;
	case 1: cout<<Wey<<endl;Op_01 = "Rey de los Titanes.";JK = 30;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Rey de los Dioses.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "Un Titan importante.";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Jefe militar de los Titanes.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_6;}}
			
	else if(Preg[Good[S]] == "Ciete"){Aqui_7:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 7]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                 ¿Quien es Cerbero"<<endl;
	cout<<" 1)- Un Animal mitologico. "<<endl;
	cout<<" 2)- Un Rapero. "<<endl;
	cout<<" 3)- UN CUIDADOR DEL INFIERNO."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	Op_00 = "¿Quien es Cerbero?";
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_7;
	case 1: cout<<INCORRE<<endl;Op_01 = "Un Animal mitologico.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Un Rapero.";break;
	case 3: cout<<Wey<<endl;Op_01 = "UN CUIDADOR DEL INFIERNO.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_7;}}
			
			
			
			
	else if(Preg[Good[S]] == "Ocho"){Aqui_8:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 8]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\t               ¿Quien es Medusa"<<endl;
	cout<<" 1)- Diosa de la Pasion. "<<endl;
	cout<<" 2)- Una hermosa Mujer."<<endl;
	cout<<" 3)- Una bestia salvaje. "<<endl;
	cout<<" 4)- Una bestia maldita."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	Op_00 = "¿Quien es Medusa? ";
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_8;
	case 1: cout<<INCORRE<<endl;Op_01 = "Diosa de la Pasion.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Una hermosa Mujer.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "Una bestia salvaje.";break;
	case 4: cout<<Wey<<endl;Op_01 = "Una bestia maldita.";JK = 15;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_8;}}
			
			
	else if(Preg[Good[S]] == "Nueve"){Aqui_9:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 9]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                  ¿Quien es Ades?"<<endl;
	cout<<" 1)- Dios del cielo. "<<endl;
	cout<<" 2)- Dios de los oceanos. "<<endl;
	cout<<" 3)- Dios de los infiernos. "<<endl;
	cout<<" 4)- Rey de los Dioces."<<endl;
	Op_00 = "¿Quien es Ades?";
	cout<<"--------------------------------------------------"<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_9;
	case 1: cout<<INCORRE<<endl;Op_01 = "Dios del cielo.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Dios de los oceanos.";break;
	case 3: cout<<Wey<<endl;Op_01 = "Dios de los infiernos.";JK = 15;break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Rey de los Dioces.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_9;}}
			
			
			
	else if(Preg[Good[S]] =="Diez"){Aqui_10:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 10]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               ¿QUIEN ES MORFEO?"<<endl;
	Op_00 = "¿Quien es morfeo?";
	cout<<" 1)- Dios del Sueño. "<<endl;
	cout<<" 2)- Dios de la Luz. "<<endl;
	cout<<" 3)- Un Semi-Dios. "<<endl;
	cout<<" 4)- Dios de la Oscuridad."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_10;
	case 1: cout<<Wey<<endl;Op_01 = "Dios del sueño.";JK = 20;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Dios de la luz.";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "Un semi-Dios.";break;
	case 4: cout<<Wey<<endl;Op_01 = "Dios de la oscuridad.";JK = 20;break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_10;}}
	
	
	
	else if(Preg[Good[S]] =="Once"){Aqui_11:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 11]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               ¿QUIEN ES GAYA?"<<endl;
	Op_00 = "¿Quien es Gaya?";
	cout<<" 1)- Madre de los Dioses Olimpicos."<<endl;
	cout<<" 2)- Madre de la tierra."<<endl;
	cout<<" 3)- Madre del Universo."<<endl;
	cout<<" 4)- Madre de la Naturaliza."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_11;
	case 1: cout<<INCORRE<<endl;Op_01 = "Madre de los Dioses Olimpicos.";break;
	case 2: cout<<Wey<<endl;Op_01 = "Madre de la tierra.";JK = 15;break;
	case 3: cout<<INCORRE<<endl;Op_01 = "Madre del Universo.";break;
	case 4: cout<<Wey<<endl;Op_01 = "Madre de la Naturaliza.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_11;}}
	
	else if(Preg[Good[S]] =="Doce"){
	
	Aqui_12:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 12]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                ¿QUIEN ES NEFISTO?"<<endl;
	Op_00 = "¿Quien es nefisto?";
	cout<<" 1)- Rey de Pompella."<<endl;
	cout<<" 2)- El forjador de los Dioses."<<endl;
	cout<<" 3)- Uno de los campeones de los Dioses olimpicos."<<endl;
	cout<<" 4)- Ninguna de las opciones."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_12;
	case 1: cout<<INCORRE<<endl;Op_01 = "Rey de Pompella.";break;
	case 2: cout<<Wey<<endl;Op_01 = "El forjador de los Dioses.";JK = 25;break;
	case 3: cout<<INCORRE<<endl;
	Op_01 = "Uno de los campeones de los Dioses olimpicos.";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Ninguna de las opciones.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_12;}}
	
	
	else if(Preg[Good[S]]=="Trece"){
	Aqui_13:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 13]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"           ¿QUIEN ES EL HIJO FAVORITO DE ZEUS?"<<endl;
	Op_00 = "¿Quien es el hijo favorito de Zeus?";
	cout<<" 1)- Herculas(Heracles)"<<endl;
	cout<<" 2)- Perseo."<<endl;
	cout<<" 3)- Atenas."<<endl;
	cout<<" 4)- Hermes"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_13;
	case 1: cout<<INCORRE<<endl;Op_01 = "Herculas.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Perseo.";break;
	case 3: cout<<Wey<<endl;Op_01 = "Atenas.";JK = 20;break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Hermes.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_13;}}
		
	
	else if(Preg[Good[S]]=="Catorse"){
	Aqui_14:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 14]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                 ¿QUIEN ES TIFON?"<<endl;
	Op_00 = "¿Quien es Tifon?";
	cout<<" 1)- Un Titan. "<<endl;
	cout<<" 2)- Un Fenomeno meteorilogico."<<endl;
	cout<<" 3)- Un Titan Antiguo. "<<endl;
	cout<<" 4)- Un Dios."<<endl;
	cout<<" 5)- Ninguna de las opciones."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_14;
	case 1: cout<<INCORRE<<endl;Op_01 = "Un Titan.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Un Fenomeno meteorilogico.";break;
	case 3: cout<<Wey<<endl;Op_01 = "Un Titan Antiguo.";JK = 20;break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Un Dios.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_14;}}
	
			
	else if(Preg[Good[S]]=="Quinse"){Aqui_15:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 15]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               ¿QUE ES LA VELLADONA?"<<endl;
	Op_00 = " ¿Que es la velladona?";
	cout<<" 1)- Una planta curativa."<<endl;
	cout<<" 2)- Una planta venenosa."<<endl;
	cout<<" 3)- Una manta que cura todo."<<endl;
	cout<<" 4)- Una manta venenosa."<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_15;
	case 1: cout<<INCORRE<<endl;Op_01 = "Una planta curativa.";JK = 20;break;
	case 2: cout<<INCORRE<<endl;Op_01 = "Una planta venenosa.";;break;
	case 3: cout<<Wey<<endl;Op_01 = "Una manta que cura todo.";JK = 20;break;
	case 4: cout<<INCORRE<<endl;Op_01 = "Una manta venenosa.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_15;}}
	
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
  
		
	
	Bat.open(ZETA.c_str(),ios::out |ios::app);
	if(Bat.fail()){cout<<" ERROR 001_Bucle. "<<endl;}
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


}cout<<endl;
	Tiempo_Cargar22();
	cout<<"---------------------------------------------------"<<endl;
	cout<<"          TOCA UNA TECLA PARA CONTINUAR "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	getch();
	Bat.open(ZETA.c_str(),ios::out |ios::app);
	if(Bat.fail()){cout<<" ERROR 001_PUNTOS. "<<endl;}
  Total = 0;
  Total = E[0] + E[1] + E[2] + E[3] + E[4];
  Bat<<" PUNTOS EN TOTAL: "<<Total<<endl;
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
	cout<<"1}-Almacenamiento Interna. "<<endl;
	cout<<"2}-Busca la carpeta con nombre [Android]"<<endl;
	cout<<"3}-Busca la carpeta con nombre [Preguntas]"<<endl;
	cout<<"4}-Busca la carpeta con nombre [Puntos]"<<endl;
	cout<<"5}-Busca el archivo con nombre: "<<Nombre<<"_"<<BATMAN<<".txt"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	return 0;}
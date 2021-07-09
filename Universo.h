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

void Tienpo(string&FECHA_LOCAL,string&HORA_LOCAL){
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

void Tiempo_Cargar2(){
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

void Play(){
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
	

int Planetas(){int J,H,Random,A[5];
	/*
	Version anterio: 17.0_TIME. (01:36Am 4/3/2021)
	Version actual: 20.0_BIG-DATA (02:45Am 10/3/2021)
  Version actual: 20.4_BIG-DATA (02:07Am 13/3/2021)
  version con el contador de puntos.
	*/
string VERSION_ACTUAL = "20.4_BIG-DATA (02:07Am 13/3/2021)";
int E[4] = {0},C = 0,Total = 0;//Varriables del contador.
string INCORRE = "           UFF. TE HAZ EQUIVOCADO.";
string FECHA_LOCAL,HORA_LOCAL;//Tiempo4
string Esp = "---------------------------------------------------";
char Op_0A[10];
__be32 Op_0;
	fstream Sol;
	Tiempo_Cargar2();//Gran carga.
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
	
	
	
	string Op_00,Op_01;//(BA) == Base de Archivos
	int Op_P;
	Op_00 = "";//Nombre de todas las preguntas (BA)
	Op_01 = "";//Respuestas dada por el usuario (BA)
	Op_P = 0;//Aqui va los puntos de los usuarios (BA)
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
	if(Bat.fail()){cout<<" ERROR 001_PUNTOS. "<<endl;
	cout<<" Parece que han borrado la carpeta de puntos."<<endl;
	cout<<" este error se puede repara solo iniciando nuevamente"<<endl;
	cout<<" el algoritmo/Programa. "<<endl;}
	
	Bat<<"---------------------------------------------------"<<endl;
	Bat<<"      FELICIDADES POR TERMINAL LAS 5 PREGUNTAS "<<endl;
	Bat<<" A continuacion te mostrare los datos recopilado. "<<endl;
	Bat<<endl;
	Bat<<" NOMBRE DEL USUARIO: "<<Nombre<<endl;
	Tienpo(FECHA_LOCAL,HORA_LOCAL);
	Bat<<" EL JUEGO INICIO EN :"<<" ("<<HORA_LOCAL;
	Bat<<" "<<FECHA_LOCAL<<")"<<endl;
	Bat.close();
	string Pre_N = "",Pre_C = "";
	int S,JK;
	for(S = 0; S <= 4; ++S){//Inicio de las 5 pregumtas.
	Play();//Tiempo de carga corto.
	Tienpo(FECHA_LOCAL,HORA_LOCAL);//Llamar al TIEMPO REAL DEL SISTEMA.
  JK = 0;
	if(Preg[Good[S]] == "Cero"){Aqui_0:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 0]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"   ¿CUAL ES EL TERCER PLANETA DEL SISTEMA SOLAR?"<<endl;
	Op_00 = "¿CUAL ES EL TERCER PLANETA DEL SISTEMA SOLAR?";
	cout<<"1)- PLANETA TIERRA. "<<endl;
	cout<<"2)- JUPITER. "<<endl;
	cout<<"3)- VENUS. "<<endl;
	cout<<"4)- MERCURIO. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_0;
	case 1: cout<<"HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 5;
	Op_01 = "PLANETA TIERRA";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "JUPITER";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "VENUS";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "MERCURIO";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_0;}}
			
	else if(Preg[Good[S]] == "Uno"){
	Aqui_1:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 1]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<" ¿CUANTAS CAPAS INTERNA TIENE EL PLANETA TIERRA?"<<endl;
	Op_00 = "¿CUANTAS CAPAS INTERNA TIENE EL PLANETA TIERRA?";
	cout<<"1)- 7 CAPAS "<<endl;
	cout<<"2)- 4 CAPAS "<<endl;
	cout<<"3)- 3 CAPAS "<<endl;
	cout<<"4)- 5 CAPAS "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_1;
	case 1: cout<<INCORRE<<endl;Op_01 = "7 CAPAS";break;
	case 2: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 10;
	Op_01 = "4 CAPAS";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "3 CAPAS";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "5 CAPAS";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_0;}}
			
	else if(Preg[Good[S]] == "Dos"){
	Aqui_2:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 2]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"¿CUAL ES EL PLANETA MAS GRANDE DEL SISTEMA SOLAR?"<<endl;
	Op_00 = "¿CUAL ES EL PLANETA MAS GRANDE DEL SISTEMA SOLAR?";
	cout<<"1)- MARTE. "<<endl;
	cout<<"2)- SATURNO. "<<endl;
	cout<<"3)- MERCURIO. "<<endl;
	cout<<"4)- JUPITER. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_2;
	case 1: cout<<INCORRE<<endl;Op_01 = "MARTE";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "SATURNO";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "MERCURIO";break;
	case 4: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 5;
	Op_01 = "JUPITER";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_2;}}
	
	else if(Preg[Good[S]] =="Tres"){
	Aqui_3:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 3]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"¿CUANTOS PLANETAS ROCOSO HAY EN EL SISTEMA SOLAR?"<<endl;
	Op_00 = "¿CUANTOS PLANETAS ROCOSO HAY EN EL SISTEMA SOLAR?";
	cout<<"1)- 3 ROCOSOS."<<endl;
	cout<<"2)- 4 ROCOSOS. "<<endl;
	cout<<"3)- 7 ROCOSOS."<<endl;
	cout<<"4)- 5 ROCOSOS."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_3;
	case 1: cout<<INCORRE<<endl;Op_01 = "3 ROCOSOS";break;
	case 2: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 5;
	Op_01 = "4 ROCOSOS";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "7 ROCOSOS";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "5 ROCOSOS";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_0;}}
			


	else if(Preg[Good[S]] == "Cuatro"){Aqui_4:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 4]"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"               ¿QUE ES UNA GALAXIA?"<<endl;
	Op_00 = "¿QUE ES UNA GALAXIA?";
	cout<<"1)- UN CUMULO DE ESTRELLAS."<<endl;
	cout<<"2)- VARIOS SISTEMAS SOLARES JUNTOS. "<<endl;
	cout<<"3)- UN SISTEMA ENORME DE ESTRELLAS Y PLANETAS"<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_3;
	case 1: cout<<INCORRE<<endl;Op_01 = "UN CUMULO DE ESTRELLAS.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "VARIOS SISTEMAS SOLARES JUNTOS.";break;
	case 3: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 10;
	Op_01 = "UN SISTEMA ENORME DE ESTRELLAS Y PLANETAS.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_4;}}


	else if(Preg[Good[S]] == "Cinco"){
	Aqui_5:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 5]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"       ¿LA VIDA EN LA TIERRA ESTA VASADA EN?"<<endl;
	Op_00 = "¿LA VIDA EN LA TIERRA ESTA VASADA EN?";
	cout<<"1)- CARBONO."<<endl;
	cout<<"2)- MERCURIO. "<<endl;
	cout<<"3)- OXÍGENO."<<endl;
	cout<<"4)- TIERRA."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_5;
	case 1: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 30;
	Op_01 = "CARBONO";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "MERCURIO";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "OXÍGENO";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "TIERRA";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_5;}}

	else if(Preg[Good[S]] == "Seis"){
	Aqui_6:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 6]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"        ¿EL SOL ES UNA ESTRELLA DE COLOR?"<<endl;
	Op_00 ="¿EL SOL ES UNA ESTRELLA DE COLOR?";
	cout<<"1)- BLANCO."<<endl;
	cout<<"2)- VERDE. "<<endl;
	cout<<"3)- AMARILLO."<<endl;
	cout<<"4)- AZUL."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_6;
	case 1: cout<<INCORRE<<endl;Op_01 = "BLANCO";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "VERDE";break;
	case 3: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 15;
	Op_01 = "AMARILLO";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "AZUL";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_6;}}
			
	else if(Preg[Good[S]] == "Ciete"){
	Aqui_7:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 7]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"    ¿CUAL ES EL PLANETA CON MAS GRAVEDAD EN EL"<<endl;
	cout<<"                 EN EL SISTEMA SOLAR?"<<endl;
	Op_00 = "¿CUAL ES EL PLANETA CON MAS GRAVEDAD EN EL EN EL SISTEMA SOLAR?";
	cout<<"1)- JUPITER."<<endl;
	cout<<"2)- MARTE. "<<endl;
	cout<<"3)- SATURNO."<<endl;
	cout<<"4)- MERCURIO."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_7;
	case 1: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 10;
	Op_01 = "JUPITER";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "MARTE";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "SATURNO";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "MERCURIO";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_7;}}
			
			
			
			
	else if(Preg[Good[S]] == "Ocho"){
	Aqui_8:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 8]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"   ¿CUAL ES LA GALAXIA MAS SERCANA A LA TIERRA?"<<endl;
	Op_00 = "¿CUAL ES LA GALAXIA MAS SERCANA A LA TIERRA?";
	cout<<"1)- LA GALAXIA DEL SOMBRERO."<<endl;
	cout<<"2)- LA VIA LACTEA"<<endl;
	cout<<"3)- ANDROMEDA."<<endl;
	cout<<"4)- LA GALAXIA DEL CANGREJO."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_8;
	case 1: cout<<INCORRE<<endl;Op_01 = "LA GALAXIA DEL SOMBRERO.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "LA VIA LACTEA";break;
	case 3: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 20;
	Op_01 = "ANDROMEDA";break;
	case 4: cout<<INCORRE<<endl;Op_01 = "LA GALAXIA DEL CANGREJO";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_8;}}
			
			
	else if(Preg[Good[S]] == "Nueve"){
	Aqui_9:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"                [PREGUNTA NUMERO 9]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"     ¿CUAL ES EL ELEMENTO QUE MAS ABUNDA EN EL"<<endl;
	cout<<"                      UNIVERSO?"<<endl;
	Op_00 = "¿CUAL ES EL ELEMENTO QUE MAS ABUNDA EN EL UNIVERSO?";
	cout<<"1)- ROCA."<<endl;
	cout<<"2)- POLVO. "<<endl;
	cout<<"3)- AGUA."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_9;
	case 1: cout<<INCORRE<<endl;Op_01 = "ROCA";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "POLVO";break;
	case 3: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 30;
	Op_01 = "AGUA";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_9;}}
			
			
			
	else if(Preg[Good[S]] =="Diez"){
	Aqui_10:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 10]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"              ¿QUE ES UNA SUPER NOVA?"<<endl;
	Op_00 = "¿QUE ES UNA SUPER NOVA?";
	cout<<"1)- UN AGUJERO NEGRO."<<endl;
	cout<<"2)- UNA GRAN EXPLOSION. "<<endl;
	cout<<"3)- EL MACIMIENTO DE UNA ESTRELLA AMARILLA."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_10;
	case 1: cout<<INCORRE<<endl;Op_01 = "UN AGUJERO NEGRO";break;
	case 2: cout<<"HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 15;
	Op_01 = "UNA GRAN EXPLOSION.";break;
	case 3: cout<<INCORRE<<endl;
	Op_01 = "EL MACIMIENTO DE UNA ESTRELLA AMARILLA";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_10;}}
	
	
	
	else if(Preg[Good[S]] =="Once"){
	Aqui_11:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 11]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               ¿QUE ES UN RAYO GAMMA?"<<endl;
	Op_00 =  "¿QUE ES UN RAYO GAMMA?";
	cout<<"1)- UNA PARTICULA DE LUZ."<<endl;
	cout<<"2)- UNA PARTICULA DE POLVO. "<<endl;
	cout<<"3)- LA PARTICULA CON MAS ENERGIA DEL UNIVERSO."<<endl;
	cout<<"4)- LA PARTICULA CON MENOS ENERGIA DEL UNIVERSO."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_11;
	case 1: cout<<INCORRE<<endl;Op_01 = "UNA PARTICULA DE LUZ.";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "UNA PARTICULA DE POLVO.";break;
	case 3: cout<<"HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 25;
	Op_01 = "LA PARTICULA CON MAS ENERGIA DEL UNIVERSO.";break;
	case 4: cout<<INCORRE<<endl;
	Op_01 = "LA PARTICULA CON MENOS ENERGIA DEL UNIVERSO";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_11;}}
	
	else if(Preg[Good[S]] =="Doce"){
	
	Aqui_12:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 12]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"      EN EL ESPACIO EXTERIOR, ¿HAY SONIDO?"<<endl;
	Op_00 = "EN EL ESPACIO EXTERIOR, ¿HAY SONIDO?";
	cout<<"1)- NO."<<endl;
	cout<<"2)- SI. "<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_12;
	case 1: cout<<"HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 5;
	Op_01 = "NO";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "SI";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_12;}}
	
	
	else if(Preg[Good[S]]=="Trece"){
	Aqui_13:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 13]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"  EN EL ESPACIO EXTERIOR,¿HAY RADIACION?"<<endl;
	Op_00 = "EN EL ESPACIO EXTERIOR,¿HAY RADIACION?";
	cout<<"1)- SI."<<endl;
	cout<<"2)- NO.. "<<endl;
	cout<<"3)- SI,PERO MUY DEBIL."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_13;
	case 1: cout<<"HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 25;
	Op_01 = "SI";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "NO";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "SI,PERO MUY DEBIL.";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_13;}}
		
	
	else if(Preg[Good[S]]=="Catorse"){
	Aqui_14:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 14]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"¿CUAL ES EL PLANETA MAS CALIENTE DEL SISTEM-SOLAR?"<<endl;
	Op_00 = "¿CUAL ES EL PLANETA MAS CALIENTE DEL SISTEM-SOLAR?";
	cout<<"1)- TITAN."<<endl;
	cout<<"2)- MERCURIO.. "<<endl;
	cout<<"3)- VENUS."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_14;
	case 1: cout<<INCORRE<<endl;Op_01 ="TITAN";break;
	case 2: cout<<" HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 30;
	Op_01 ="MERCURIO";break;
	case 3: cout<<INCORRE<<endl;Op_01 ="VENUS";break;
	default: cout<<" Opcion fuera de rango. "<<endl; goto Aqui_14;}}
	
			
	else if(Preg[Good[S]]=="Quinse"){Aqui_15:
	cout<<"---------------------------------------------------"<<endl;
	cout<<"               [PREGUNTA NUMERO 15]"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"   ¿CUANTO TIEMPO HAY DESDE EL SOL A LA TIERRA?"<<endl;
	Op_00 = " ¿CUANTO TIEMPO HAY DESDE EL SOL A LA TIERRA?";
	cout<<"1)- 5 MINUTOS."<<endl;
	cout<<"2)- 4 MINUTOS. "<<endl;
	cout<<"3)- 7 HORAS."<<endl;
	cout<<"4)- 8 MINUTOS."<<endl;
	cout<<" ELIGE UNA OPCION: "; cin.getline(Op_0A,10,'\n');cout<<endl;
	Op_0 = atoi(Op_0A);
	switch(Op_0){
	case 0: cout<<" Opcion invalida, vuelva a intentarlo. "<<endl;goto Aqui_15;
	case 1: cout<<INCORRE<<endl;Op_01 = "5 MINUTOS";break;
	case 2: cout<<INCORRE<<endl;Op_01 = "4 MINUTOS";break;
	case 3: cout<<INCORRE<<endl;Op_01 = "7 HORAS";break;
	case 4: cout<<"HAZ CONTESTADO CORRECTAMENTE"<<endl;Op_P = 5;
	Op_01 = "8 MINUTOS";break;
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
  
    
    
    
    
	string Ban; Ban = "";
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
	Tiempo_Cargar2();
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

return 0;}
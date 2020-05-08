#include<iostream>
#include<stdlib.h>
#include<time.h>

using std::cin;
using std::endl;
using std::cout;

void ejercicio1();
void ejercicio2();
void ejercicio3();

int main(){
		while(true){
		int op;
		srand(time(NULL));
		cout<<"1#funcion de Euler"<<endl<<"2#Triangulo de Pascal"<<endl<<"3#Jugar"<<endl
		<<"4#Salir"<<endl;
		cin>>op;
		switch(op){
			case 1:
				ejercicio1();
				break;
			case 2:
				ejercicio2();
				break;
			case 3:
				ejercicio3();
				break;						
			case 4:
				exit (EXIT_FAILURE);
				break;
		}
		
		
		 
	}
	return 0; 
}

void ejercicio1(){
	int num;
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	while(num<0){
		cout<<"Debe ser un numero positivo,ingreselo nuevamente: ";
		cin>>num;
	}
	int cont=0;
	for(int i=1;i<=num;i++){
		int aux,num1=num,num2=i;
		do{
		aux=num2;
		num2=num1%num2;
		num1=aux;
		}while(num2!=0);
		if(aux==1){
			cont++;
		}
	}
	
	cout<<"Resultado: "<<cont<<endl;
}

void ejercicio2(){
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	int A1=1,A2=2;
	int a[A1]={};
	int b[A2]={};
	for(int i=0;i<num;i++){
		if(i%2==0){
			if(i==1){
				b[0]=1;	
				b[1]=1;
			}else{
				
			}
			
		}else{
			
			if(i==0){
			a[0]=1;	
			}else{
				
			}
		}
		for(int j=0;j<A1;j++){
		cout<<a[j];	
		}	
		cout<<" "<<endl;
		for(int j=0;j<A2;j++){
		cout<<b[j];	
		}
		A1=A1+2;
		A2=A2+2;
				
		}
		
		
	cout<<endl;
}

void ejercicio3(){
	srand(time(NULL));
	int num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	while(num%2!=0){
		cout<<"Ingrese un numero par: ";
		cin>>num;
	}
	int array[num]={};
	int array2[num]={};
	int numm;
	for(int i=0;i<num;i++){
		 numm=-50+rand()%(50-(-50));
		array[i]=numm;
	}
	bool play=true;
	while(play){
		int posi1,J1=0,J2=0;
		cout<<"Jugador#1: elija una posicion: ";
		cin>>posi1;
		while(array2[posi1]==1||posi1>num-1){
			cout<<"Jugador#1: ingrese otro numero";
			cin>>posi1;
		}
		
		array2[posi1]=1;
		cout<<"Obtuvo: "<<array[posi1]<<endl;
		J1=J1+array[posi1];
		
		
		int posi2;
		cout<<"Jugador#2: elija una posicion: ";
		cin>>posi2;
		while(array2[posi2]==1||posi1>num-1){
			cout<<"Jugador#2: ingrese otro numero: " ;
			cin>>posi2;
		}
		array2[posi2]=1;
		cout<<"Obtuvo: "<<array[posi2]<<endl;
		J2=J2+array[posi2];
		
		cout<<endl<<"Jugador 1: "<<J1<<" VS Jugador 2: "<<J2<<endl;
		int v=0;
		for(int u=0;u<num;u++){
			if(array2[u]==1){
				v++;
			}
		}
		if(v==num){
			play=false;
			if(J1>J2){
				cout<<"Felicidades Jugador 1"<<endl;
			}else if (J2>J1){
				cout<<"Felicidades Jugador 2"<<endl;
			}else{
				cout<<"EMPATE"<<endl;
			}
		}
		
	}
	
}












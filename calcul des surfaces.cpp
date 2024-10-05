#include<iostream>
#include<math.h>
const int pi=3.14;
int reponse1;
double rayon,longueur,largeur,perimetre,aire,cote,cote1,cote2,cote3,demi_perimetre;
int main(int argv,char** argc){
	std::cout<<"|------choisir la figure-----|"<<std::endl;
	std::cout<<"|1--le cercle----------------|"<<std::endl;
	std::cout<<"|2--le carre-----------------|"<<std::endl;
	std::cout<<"|3--le rectangle-------------|"<<std::endl;
	std::cout<<"|4--le triangle--------------|"<<std::endl;
	std::cout<<"|----------------------------|"<<std::endl;	
	std::cin>>reponse1;
	system("cls");
//	while((reponse1!=1) || (reponse1!=2) || (reponse1!=3)){
//		std::cout<<"saisir une valeur autoriser"<<std::endl;
//		std::cin>>reponse1;
//	}
	switch(reponse1){
		case 1:{
			std::cout<<"saisir le rayon(valeur positive)"<<std::endl;
			std::cin>>rayon;
			while(rayon<0){
			std::cout<<"saisir le rayon(valeur positive)"<<std::endl;
			std::cin>>rayon;
			}
			perimetre = (2*rayon)*pi;
			aire = (rayon*rayon)*pi;
			std::cout<<"le perimetre est ";
			std::cout<<perimetre<<std::endl;
			std::cout<<"l'aire est ";
			std::cout<<aire;
			break;
		}
		case 2:{
			std::cout<<"saisir le cote";
			std::cin>>cote;
			while(cote<0){
			std::cout<<"saisir le cote(valeur positive)";
			std::cin>>cote;
			}
			perimetre=cote*4;
			aire=cote*cote;
			std::cout<<"le perimetre est "<<std::endl;
			std::cout<<perimetre<<std::endl;
			std::cout<<"la surface est "<<std::endl;
			std::cout<<aire<<std::endl;
			break;
		}
		case 3:{
			std::cout<<"sasir la longueur";
			std::cin>>longueur;
			while(longueur<0){
				std::cout<<"sasir la longueur(valeur positive)";
			std::cin>>longueur;
			}
			std::cout<<"saisir la largeur";
			std::cin>>largeur;
			while(largeur<0){
				std::cout<<"saisir la largeur(valeur positive)";
			std::cin>>largeur;
			}
			perimetre = (longueur*2)+(largeur*2);
			aire = longueur*largeur;
			std::cout<<"le perimetre est ";
			std::cout<<perimetre<<std::endl;
			std::cout<<"la surface est ";
			std::cout<<aire<<std::endl;
			break;
		}
		case 4:{
			std::cout<<"entrez les trois cote du triangle  triangle"<<std::endl;
			std::cin>>cote1>>cote2>>cote3;
			perimetre=cote1+cote2+cote3;
			demi_perimetre=perimetre/2;
			std::cout<<"le perimetre de ce triangle est  "<<perimetre<<std::endl;
			aire=sqrt(demi_perimetre*(demi_perimetre-cote1)*(demi_perimetre-cote2)*(demi_perimetre-cote3));
			std::cout<<"l'aire de ce cercle est  "<<aire<<std::endl;
		}
	}
	return 0;
}
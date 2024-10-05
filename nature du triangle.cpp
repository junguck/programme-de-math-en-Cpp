#include<iostream>
#include<math.h>
int AC,BC,AB;
int main(int argv,char** argc){
	std::cout<<"le triangle est forme de 3 points,donenr les distances entre les different point nomme ABC"<<std::endl;
	std::cout<<"donne la distance AB"<<std::endl;
	std::cin>>AB;
	std::cout<<"donne la distance BC"<<std::endl;
	std::cin>>BC;
	std::cout<<"donne la distance AC"<<std::endl;
	std::cin>>AC;
	while((AB+BC<AC) || (AB+AC<BC) || (BC+AC<AB)){
		std::cout<<"innegalite triangulaire ,ceci ne peut la former un triangle:reentre les donnees"<<std::endl;
		std::cout<<"donne la distance AB"<<std::endl;
	std::cin>>AB;
	std::cout<<"donne la distance BC"<<std::endl;
	std::cin>>BC;
	std::cout<<"donne la distance AC"<<std::endl;
	std::cin>>AC;
	}
	//traitement
	if((AB==AC) && (BC==AC)){
		if(sqrt(pow(AB,2)+pow(AC,2))==BC){
			std::cout<<"ce triangle est equilateral rectangle en A"<<std::endl;
		}else if(sqrt(pow(BC,2)+pow(AB,2))==AC){
			std::cout<<"ce triangle est equilateral rectangle en B"<<std::endl;
		}else if(sqrt(pow(AC,2)+pow(BC,2))==AB){
			std::cout<<"ce triangle est equilateral rectangle en C"<<std::endl;
		}else{
				std::cout<<"ce triangle est equilateral"<<std::endl;
		}
	}else if((AB==AC)||(AB==BC)||(BC==AC)){
		if(sqrt(pow(AB,2)+pow(AC,2))==BC){
			std::cout<<"ce triangle est isocele rectangle en A"<<std::endl;
		}else if(sqrt(pow(BC,2)+pow(AB,2))==AC){
			std::cout<<"ce triangle est isocele rectangle en B"<<std::endl;
		}else if(sqrt(pow(AC,2)+pow(BC,2))==AB){
			std::cout<<"ce triangle est isocele rectangle en C"<<std::endl;
		}else{
				std::cout<<"ce triangle est isocele"<<std::endl;
		}
	}
	else if((sqrt(pow(AB,2)+pow(AC,2))==BC)||(sqrt(pow(BC,2)+pow(AB,2))==AC)||(sqrt(pow(AC,2)+pow(BC,2))==AB)){
		if(sqrt(pow(AB,2)+pow(AC,2))==BC){
			std::cout<<"ce triangle est rectangle en A"<<std::endl;
		}else if(sqrt(pow(BC,2)+pow(AB,2))==AC){
			std::cout<<"ce triangle est rectangle en B"<<std::endl;
		}else{
			std::cout<<"ce triangle est rectangle en C"<<std::endl;
		}
	}else{
		std::cout<<"ce triangle est quelconque"<<std::endl;
}
return 0;
}
#include<iostream>
#include<math.h>
float abs_A,oor_A,abs_B,oor_B,abs_C,oor_C,AB,BC,AC;
int main(int argv,char** argc){
	std::cout<<"saisir le coordonne des point du triangle"<<std::endl;
	std::cout<<"coordonne du point A"<<std::endl;
	std::cin>>abs_A;
	std::cin>>oor_A;
	std::cout<<"coordonne du point B"<<std::endl;
	std::cin>>abs_B;
	std::cin>>oor_B;
	std::cout<<"coordonne du point C"<<std::endl;
	std::cin>>abs_C;
	std::cin>>oor_C;
	AB=sqrt(pow(abs_B-abs_A,2)+pow(oor_B-oor_A,2));
	BC=sqrt(pow(abs_C-abs_B,2)+pow(oor_C-oor_B,2));
	AC=sqrt(pow(abs_C-abs_A,2)+pow(oor_C-oor_A,2));
	std::cout<<"la distance AB"<<std::endl;
	std::cout<<AB<<std::endl;
	std::cout<<"la distance BC"<<std::endl;
	std::cout<<BC<<std::endl;
	std::cout<<"la distance AC"<<std::endl;
	std::cout<<AC<<std::endl;
	return 0;
}
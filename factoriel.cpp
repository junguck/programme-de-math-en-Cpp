#include<iostream>
int i;
int a=1,f=1;
int main(int argv,char** argc){
	do{
	std::cout<<"saisir le nombre dont on veut calculer le factoriel"<<std::endl;
	std::cin>>a;
    }while(a<0);
    if(a==0){
    	f=1;
	}else{
	for(i=0;i<=a-1;i++){
		f=f*(i+1);
	}
}
	std::cout<<"le factoriel est...";
	std::cout<<f<<std::endl;
	return 0;
}
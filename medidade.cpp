#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome,sexo,en;
	int idade,somaf=0,contf=0,mediaf=0,mediam=0,somam=0,contm=0;
	 
	 printf("Aperte ENTER para iniciar a entrevista \n\n");
	 getchar();
	 fflush(stdin);
	 
	do
	{
		printf("Informe o seu nome: \n");
		scanf("%s",&nome);
		fflush(stdin);
	
		printf("Informe a sua idade: \n");
		scanf("%i",&idade);
		fflush(stdin);
	
		printf("Informe o seu sexo: (F/M) \n");
		scanf("%s",&sexo);
		fflush(stdin);
		
		if(sexo=='f')
		{
			somaf=idade;
			contf++;
		}else{
			somam=idade;
			contm++;
		}

	 printf("Deseja continuar com a entrevista? (S/N) \n");
	 scanf("%s",&en);
	 fflush(stdin);	
	}while(en=='s');
	
	mediaf=somaf/contf;
	mediam=somam/contm;
	printf("A media de idade das mulheres eh: %i \n\n",mediaf);
	printf("A media de idade dos homens eh: %i \n\n",mediam);
	
	
	system("pause");
	return 0;
}
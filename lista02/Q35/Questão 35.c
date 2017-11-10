#include <stdio.h> 
int main(int argc, char *argv[]) 
{

float cand1=0, cand2=0, cand3=0, branco=0, nulo=0; 
float pc1,pc2,pc3,pcb,pcn;  
int voto, total=0; 

do{ 
 	printf( "Voto:\n1 - cand. 1;\n2 - cand. 2;\n3 - cand. 3;\n4 - branco;\n5(ou num. errado");
 	scanf("%d",& voto);
 	if (voto == 1)
{ 
 		cand1++; 
 		total++; 
 	} 
 	else 
 		if (voto == 2)
		{ 
 			cand2++; 
 			total++; 
 		} 
 	else 
 		if (voto == 3)
 	{ 
 			cand3++; 
 			total++; 
 		} 
 	else 
 		if (voto == 4)
 	{ 
 			branco++; 
 			total++; 
 		} 
 	else
 		if (voto != 0)
 			nulo++; 
 			total++; 
 		} 

}
while(voto!=0)
{
 	pc1 = (cand1*100)/total; 
 	pc2 = (cand2*100)/total; 
 	pc3 = (cand3*100)/total; 
 	pcb = (branco*100)/total; 
 	pcn = (nulo*100)/total; 
 	printf(" votos para cand1 = "%f\n ",pc1);
 	printf(" votos para cand2= "%f\n ",pc2);
 	printf(" votos para cand3 = "%f\n ",pc3);
 	printf(" votos brqncos = "%f\n ",pcb);
 	printf(" votos nulos = "%f\n ",pcn);
}
return 0; 
}


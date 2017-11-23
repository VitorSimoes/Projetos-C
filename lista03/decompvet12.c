#include "stdio.h"
#include "stdlib.h"

void decomp(int n,int *vet,int*impa,int*par){
  int i;
  for(i=0;i<n;i++){
    if(i%2==0)
      par[i/2]=vet[i];
    else
      impa[((i+1)/2)-1]=vet[i];
  }

}

int main(){
  int i,n,*vet,*impa,*par;
  scanf("%d",&n);
  vet=(int*)malloc(n*sizeof(int));
  impa=(int*)malloc(n*sizeof(int));
  par=(int*)malloc(n*sizeof(int));
  //povoa o vetor
  for(i=0;i<n;i++)
    scanf("%d",&vet[i]);
  decomp(n,vet,impa,par);
  //imprime vetor par
  for(i=0;i<n;i++)
    printf("vetor par :%d\n",par[i]);
  //imprime vetor impar
  for(i=0;i<n;i++)
    printf("vetor impar :%d\n",impa[i]);

}

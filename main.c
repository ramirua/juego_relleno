#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void imprimir(int mat[15][15]){
int i , j;
for(i = 0; i <15 ;i++){
		printf("\n");
	    for(j = 0; j <15 ;j++){
		  if(mat[i][j]==1)
		  printf("%c",152);
		  
		  if(mat[i][j]==0)
		  printf(" ");
		  
		  if(mat[i][j]==2)
		  printf("%c",42);
	    }	
	}

}
	


struct Personaje{
	int i;
	int j;
	int tipo;
};


struct Marciano{
	int i;
	int j;
	int tipo;
};

int main(){

 struct Personaje pac;
  	int mat[15][15] = {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	                   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			   {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}                    
			 } ;
				    
  pac.i=3;
  pac.j=3;
  mat[pac.i][pac.j]=2;
  char tecla=' ';				    
   //struct Fondo mapa;
	
	
	
	while(tecla!='r'){
	 
	 if(kbhit()){
	 	tecla=getch();
	 	if(tecla==72 && pac.i>0)
		  pac.i--;
		if(tecla==75 && pac.j>0)
		  pac.j--;
		if(tecla==80 && pac.i<15)
		  pac.i++;
		if(tecla==77 && pac.j<15)
		  pac.j++;  
		    
	 }	
	 
	 
	 mat[pac.i][pac.j]=2;
	 Sleep(50);
	 system("cls");
	 imprimir(mat);
	}
	
	
	
  
 return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "modq8.h"
//int VarreMat(int **, int, int, int);
int VarreMat(int **mat, int col, int linha, int valor){
	for(int i=0; i<col; i++){
		for(int j=0; j<linha; j++){
			if(mat[i][j]==valor){
				return 1;
			}
		}
	}
	return 0;
}

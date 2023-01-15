#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *filename = "Ex5text.txt";
	FILE *fp = fopen(filename, "w");
	
	for (int i=1; i<=12; i++){
		for (int j=1; j<=12; j++){
			fprintf(fp,"%d*%d = %d\n", i, j, i*j);			}
			printf("\n");
		}
	
	fclose(fp);
	system("pause");
}

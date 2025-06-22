#include <stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    char *fname,*name;
    int id;

    printf("enter file name:- ");
    scanf("%s",fname);

    fptr=fopen(fname,"a");

    if(fptr==NULL){
        printf("file can't open");
        exit(0);
    }

    printf("enter ID :- ");
    scanf("%d",&id);
     fflush(stdin);

     printf("enter name :- ");
      gets(name);

      fprintf(fptr,"%d%s",id,name);
      printf("file written successfully");

      fclose(fptr);
    return 0;
}
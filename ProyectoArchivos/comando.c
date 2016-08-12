#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "comando.h"
#include "tad.h"


char actCmd[25]="";
char actParam[25]="";
int lastToken=-1;
int lastCmd=-1;

mkdisk nuevo;
rmdisk borrar;
fdisk  particion;
mount montar;
umount desmontar;

bool otherLine=false;

bool checkCommand(char cmd[]){

    append(cmd, 'r');

    //printf("HOla %s que dolor que pena ", cmd);
    /*****************************

    Variables del automata

    *******************************/
    int estado=0;
    char token="";

    /**********Automata**********/

    int i=0;
    char actual=' ';


    for(i=0; cmd[i]!='\o' && i<strlen(cmd); i++ ){
        actual= cmd[i];
        switch(estado){
            case 0:
                switch(actual){
                    case '"':
                        estado=8;
                    case '-':
                        estado=2;
                    case '+':
                        estado=3;
                    default:
                        if(actual>)



                }
                break;


            case 1:
                estado=9;


        }
    }

}

void append (char *cadena, char car){
        int len= strlen(cadena);
        cadena[len]=car;
        cadena[len+1]= '\0';


}







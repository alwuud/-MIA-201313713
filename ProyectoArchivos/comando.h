
typedef struct crearDisco {
    int _size;
    char unit;
    char  path [100];
    char name [100];
    int parametros;


} mkdisk;

typedef struct borrarDisco{
    char path [100];
    int parametros;
}rmdisk;

typedef struct particiones{
    int _size;
    char unit;
    char path[100];
    char type;
    char fit;
    char name[100];
    char del; //T es fast, U es full
    int add;

    int parametros;  // si encontramos add o delete le restamos 1 a esta variable


}fdisk;


typedef struct montar{
    char path[100];
    char name[100];

    int parametros;
}mount;

typedef struct desmontar{
    char unidades[100];
    int parametros;

}umount;

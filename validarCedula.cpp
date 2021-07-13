#include "validarCedula.h"
//#include "index"
#include "QDebug"
using namespace std;

ValidarCedula::ValidarCedula()
{

}

bool ValidarCedula::verificarCedula(string cedula)
{
    int total=0;
    int tamanoLongitudCedula=10;
    int coeficientes [9] = {2, 1, 2, 1, 2, 1, 2, 1, 2};
    int numeroProvincias = 24;
    int tercerDigito = 6;


    if(cedula.length() == tamanoLongitudCedula)
    {
        string aa = cedula.substr(0,1);
        string bb = cedula.substr(1,1);
        int provincia1 =  stoi(aa);
        int provincia2 =  stoi(bb);
        qDebug()<<provincia1<<" ";
        qDebug()<<provincia2<<" ";

        string provinciaConcatenado =to_string(provincia1) + "" + to_string(provincia2);
        int provincia = stoi(provinciaConcatenado);

         qDebug()<<provincia<<" ";

        string cc = cedula.substr(2,1);
        int digitoTres = stoi(cc);
         qDebug()<<digitoTres<<" ";
        if((provincia > 0 && provincia <= numeroProvincias) && digitoTres < tercerDigito)
        {
            string dd = cedula.substr(9,1);
            int digitoNueve = stoi(dd);
            int digitoVerificadoRecibido = digitoNueve;
            qDebug()<<digitoVerificadoRecibido<<" ";
            for(int i=0; i<10; i++){
                 qDebug()<<coeficientes[i]<<" ";
                 qDebug()<<cedula[i]<<" ";
                 //string ee= to_string(cedula[i]);
                 string ee=cedula.substr(i,1);
                 int CedulaI = stoi(ee);

                //int valor = (int)coeficientes[i]*(int)cedula[i];
                 int valor = (int)coeficientes[i]*CedulaI;
                total = valor >= 10? total + (valor-9): total + valor;
            }
            int digitoVerificadorObtenido = total >= 10 ?
                        (total % 10) != 0?
                        10 - (total % 10) :
                        (total % 10) : total;
            if(digitoVerificadorObtenido == digitoVerificadoRecibido){
                return true;
            }
        }
        return false;
    }
    return false;
}

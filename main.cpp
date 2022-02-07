#include "tienda.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>
#include <QLocale>
#include <QDebug>
//ICONOS OBTENIDOS DE FLATICON https://www.flaticon.es/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Objeto para manejar las traducciones
        QTranslator traducion;
        //Idioma del sistema
        QString idioma=QLocale::system().name();
        // Dependiendo del idioma seleccionado lo carga
        if (idioma == "fr_BE"){
            traducion.load("/tienda_fr.qm");
        }else if (idioma == "en_US"){
            traducion.load(":/tienda_en.qm");
        }else if(idioma == "de_DE"){
            traducion.load(":/tienda_al.qm");
        }else if(idioma == "hi_HI"){
            traducion.load(":/tienda_hi.qm");
        }
        // Si es diferente de español, se instala la traducción en TODA la aplicación
        if (idioma != "es_Es"){
                a.installTranslator(&traducion);
            }
    Tienda w;
    w.show();
    return a.exec();
}

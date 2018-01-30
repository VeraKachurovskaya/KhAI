//program
//vera kachurovskaya
#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QLabel *label = new Qlabel("<h2><i>Hello,</i> world</h2>");
label->show( );
 
return app.exec( );
//update code
}




#include <QApplication>

#include <TMainWnd.h>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    TMainWnd wnd;

    wnd.show();


    return a.exec();
}

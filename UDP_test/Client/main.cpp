 #include <QApplication>

 #include "client.h"

 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);
     Sender sender;
     sender.show();
     return sender.exec();
 }

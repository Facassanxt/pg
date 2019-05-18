#include <QCoreApplication>
#include <openssl/rsa.h>
#include <QDir>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    QDir::setCurrent("D:/Рабочий стол");
    system("openssl genpkey -algorithm RSA -des3 -out Qrivatekey.pem -pkeyopt rsa_keygen_bits:1024");

    return a.exec();
}

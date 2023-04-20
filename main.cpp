#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMessageBox::information(nullptr, "Title", "Message");

    return app.exec();
}

// test@123 工作空间
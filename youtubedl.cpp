#include "youtubedl.h"

#include <QApplication>
#include <QStringList>
#include <QProcess>
#include <QString>

YoutubeDL::YoutubeDL()
{
    #ifdef Q_OS_WIN32
    this->program = "youtube-dl.exe";
    #else
    this->program = "youtube-dl"; // assuming it is in PATH on other platforms
    #endif
    QObject *parent = QApplication::instance();
    this->ytdl = new QProcess(parent);
}

QString YoutubeDL::getUrl(QString url)
{
    this->arguments << "-g" << url;
    this->ytdl->start(this->program, this->arguments);
    this->ytdl->waitForFinished();
    QString output(this->ytdl->readAllStandardOutput());
    return output;
}
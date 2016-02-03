#ifndef MEDIAFORMAT_H
#define MEDIAFORMAT_H

#include <QString>

class MediaFormat
{
public:
    MediaFormat();
    QString getFormatId() const;
    void setFormatId(const QString &value);

    QString getExtension() const;
    void setExtension(const QString &value);

    QString getResolution() const;
    void setResolution(const QString &value);

    QString getQuality() const;
    void setQuality(const QString &value);

    QString getNote() const;
    void setNote(const QString &value);

    QString getFormat() const;
    void setFormat(const QString &value);

    QString getAcodec() const;
    void setAcodec(const QString &value);

    QString getVcodec() const;
    void setVcodec(const QString &value);

private:
    QString formatId;
    QString format;
    QString extension;
    QString resolution;
    QString quality;
    QString note;
    QString acodec;
    QString vcodec;
};

#endif // MEDIAFORMAT_H

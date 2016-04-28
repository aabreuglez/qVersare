#include "serversettings.h"
#include <QSettings>
#include <QCommandLineParser>
#include <QList>

ServerSettings::ServerSettings(QCoreApplication *a)
{
    QCommandLineParser parser;
    QSettings settings;

    QList<QCommandLineOption> options(
    {
        {"ip","Set ip to listen to", "ip","127.0.0.1"},
        {"port","Set port to listen to","port","9000"}
    });

    parser.addOptions(options);


    parser.parse(a->arguments());
    if(!settings.contains("ip") || (!settings.contains("port") ) )
        setDefaultSettings(&settings);

    if ( parser.isSet("ip") ) {
        ipAddress_ = parser.value("ip");
    } else {
        ipAddress_ = settings.value("ip","127.0.0.1").toString();
    }

    if (parser.isSet("port") ) {
        port_ = parser.value("port").toShort();
    } else {
        port_ = settings.value("port", 8000).toString().toUInt();
    }

}

QString ServerSettings::getIpAddress() const
{
    return ipAddress_;
}

quint16 ServerSettings::getPort() const
{
    return port_;
}

void ServerSettings::setDefaultSettings(QSettings *settings)
{
    settings->setValue("ip", "127.0.0.1");
    settings->setValue("port",8000);
}
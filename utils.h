#pragma once
#include <QWidget>

class Utils
{

public:
    Utils();

    static void DestuctorMsg(const QString& value);
    static void DestuctorMsg(const QObject * const object);
private:
    explicit Utils(const Utils& rhs) = delete;
    Utils& operator= (const Utils& rhs) = delete;
};





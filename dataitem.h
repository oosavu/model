#ifndef DATAITEM_H
#define DATAITEM_H

#include <QObject>

class DataItem : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id CONSTANT FINAL)
    Q_PROPERTY(QString  name READ name WRITE setName NOTIFY nameChanged)
    int m_id;

    QString m_name;

public:
    explicit DataItem(QObject *parent = 0);

int id() const
{
    return m_id;
}

QString name() const
{
    return m_name;
}

signals:

void nameChanged(QString name);

public slots:
void setName(QString name)
{
    if (m_name == name)
        return;

    m_name = name;
    emit nameChanged(name);
}
};

#endif // DATAITEM_H

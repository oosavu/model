#ifndef ENTITY_H
#define ENTITY_H

#include <QObject>


// тут будет набор классов для различных типов данных
class Entity : public QObject
{
    Q_OBJECT
public:
    explicit Entity(QObject *parent = 0);

signals:

public slots:
};

#endif // ENTITY_H

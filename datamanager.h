#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QList>

#include "model.h"

class DataManager : public QObject
{
    Q_OBJECT

    // тут хранятся все модели созданые в кумле
    // все они подписаны на onModelFilterChanges();
    QList<Model*> models;
public:
    explicit DataManager(QObject *parent = 0);

    //синглтон
    static DataManager* instance();

    // добавляет модель в отслеживаемые.
    void registerModel(Model* m);


public slots:
    //если у подписаной модели изменились данные у неё надо поменять их
    //(вызвать у неё add\delete\change Item)
    onModelFilterChanges();

    // вызывается в случае если структура таблиц поменялась (калбеки системные например пришли)
    // внутри метода в цикле пробегаем по всем моделям, и смотрим, надо ли у
    // них что ни бвдь обновить (вызвать у них add\delete\change Item)
    onBackendDataChange();
};

#endif // DATAMANAGER_H

#ifndef MODEL_H
#define MODEL_H

#include <QAbstractListModel>
#include <QQmlListProperty>
#include "datamanager.h"
#include "filter.h"
#include "entity.h"


// модель. может быть создана в QML. при создании регистрируется у DataManager.
class Model : public QAbstractListModel
{
    Q_PROPERTY(QQmlListProperty<Filter> filters)

public:
    Model( QObject *parent = 0);

    void addEntities(QList<Entity>);
    void removeEntities(QList<int> EntityIDs);
    void entityChange(Entity );


signals:
    filtersChange();

public slots:
    void onDataChanges();

};

#endif // MODEL_H

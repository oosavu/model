#include "model.h"

Model::Model(QObject *parent):  QAbstractListModel(parent)
{
    DataManager::instance()->registerModel(this);
}

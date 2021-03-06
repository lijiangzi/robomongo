#pragma once

#include "robomongo/core/domain/MongoUser.h"
#include "robomongo/gui/widgets/explorer/ExplorerTreeItem.h"

namespace Robomongo
{
    class MongoDatabase;

    class ExplorerUserTreeItem : public ExplorerTreeItem
    {
        Q_OBJECT
    public:
        typedef ExplorerTreeItem BaseClass;
        ExplorerUserTreeItem(QTreeWidgetItem *parent, MongoDatabase *const database, const MongoUser &user);

    public Q_SLOTS:
        void ui_dropUser();
        void ui_viewUser();

    private:
        const MongoUser _user;
        MongoDatabase *_database;
    };
}


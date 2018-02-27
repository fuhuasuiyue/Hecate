#ifndef LZWMODELTREE_H
#define LZWMODELTREE_H

#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QMouseEvent>

class lzwModelTree : public QTreeWidget
{
    Q_OBJECT
public:
    explicit lzwModelTree(QWidget *parent = 0);
    virtual ~lzwModelTree();
    void addModelName(QString str);

signals:

public slots:

private:
    QTreeWidgetItem *modelNode;


    // QWidget interface
protected:

};

#endif // LZWMODELTREE_H

#include "lzwmodeltree.h"
#include <QMessageBox>
//#include "commonFunction.h"

lzwModelTree::lzwModelTree(QWidget *parent) :
    QTreeWidget(parent)
{
    modelNode = new QTreeWidgetItem(this, QStringList(QString::fromLocal8Bit("模型")));
    insertTopLevelItem(0,modelNode);
    setHeaderLabel(QString::fromLocal8Bit("模型树"));
}

lzwModelTree::~lzwModelTree()
{
    //SAFE_DELETE(modelNode);
	if (modelNode)
	{
		delete modelNode;
		modelNode = nullptr;
	}
}

void lzwModelTree::addModel(PartModel* pPartModel)
{
    QTreeWidgetItem* mLeaf = new QTreeWidgetItem(modelNode, QStringList(pPartModel->getPartName()));
	
    modelNode->addChild(mLeaf);
    update();
}

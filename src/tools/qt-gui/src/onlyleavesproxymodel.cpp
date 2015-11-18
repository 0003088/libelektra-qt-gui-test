#include "onlyleavesproxymodel.hpp"
#include "treemodel.hpp"

bool OnlyLeavesProxyModel::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const
{
	if(!source_parent.isValid())
		return false;

	QModelIndex index = sourceModel()->index(source_row, filterKeyColumn(), source_parent);

	if(index.isValid())
	{
		if((sourceModel()->data(index, TreeModel::ChildrenAreLeavesRole).toBool()))
			return true;
	}

	return false;
}

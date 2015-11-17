#include "noleavesproxymodel.hpp"
#include "treemodel.hpp"

bool NoLeavesProxyModel::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const
{
	if(!source_parent.isValid())
		return true;

	QModelIndex index = sourceModel()->index(source_row, filterKeyColumn(), source_parent);

	if(index.isValid())
	{
		if((sourceModel()->data(index, TreeModel::ChildCountRole) == 0) & (sourceModel()->data(index, TreeModel::HierarchyRole) > 1))
			return false;
	}

	return true;
}

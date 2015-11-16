#include "noleavesproxymodel.hpp"
#include "treemodel.hpp"

bool NoLeavesProxyModel::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const
{
	if(!source_parent.isValid())
		return true;

	QModelIndex index = sourceModel()->index(source_row, 0, source_parent);

	if(sourceModel()->data(index, TreeModel::ChildCountRole) == 0 & sourceModel()->data(index, TreeModel::HierarchyRole) > 1)
		return false;

	return true;
}

#include "noleavesproxymodel.hpp"
#include "treemodel.hpp"

bool NoLeavesProxyModel::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const
{
	if(!source_parent.isValid())
		return true;

	if(sourceModel()->data(source_parent, TreeModel::ChildrenAreLeavesRole).toBool() & (sourceModel()->data(source_parent, TreeModel::RootRole) != sourceModel()->data(source_parent, TreeModel::ParentRole)))
		return false;

	return true;
}

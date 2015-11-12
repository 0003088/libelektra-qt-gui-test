import QtQuick 2.2

KeyWindow {

	title: qsTr("Edit Key")

	keyName: selectedNode === null || treeModel.data(selectedNode, 257) === undefined ? "" : treeModel.data(selectedNode, 257)
	keyValue: selectedNode === null || treeModel.data(selectedNode, 259) === undefined ? "" : treeModel.data(selectedNode, 259)
	metaData: treeModel.data(selectedNode, 266)

	function populateMetaArea() {
//		var metaData = treeModel.data(selectedNode, 266)
		if(metaData){
			for(var i = 0; i < metaData.rowCount(); i++){
				qmlMetaKeyModel.append({"metaName":  metaData.get(i).metaName, "metaValue":  metaData.get(i).metaValue})
			}
		}
	}

	function editAccepted() {
		var newMetaData = {}
//		if(accessFromSearchResults)
//			index = selectedNode.parentModel.getIndexByName(selectedNode.name)
//		else
//			index = selectedNode.index

		//collect metadata in a map
		for(var i = 0; i < qmlMetaKeyModel.count; i++){
			newMetaData[qmlMetaKeyModel.get(i).metaName] = qmlMetaKeyModel.get(i).metaValue
		}
		//create undo command
		if(isEdited){
			container.clearData()

			container.setOldName(keyName.toString())
			container.setOldValue(keyValue.toString())
			container.setOldMetadata(metaData)

			container.setNewName(nameTextField.text)
			container.setNewValue(valueTextField.text)
			container.setNewMetadata(newMetaData)

			undoManager.createEditKeyCommand(treeModel, selectedNode, container)
		}

		if(true){//!error){//TODO
			qmlMetaKeyModel.clear()
			selectedNode = null

//			if(accessFromSearchResults){
//				searchResultsListView.model.refresh()
//				searchResultsSelectedItem = searchResultsListView.model.get(searchResultsListView.currentIndex)
//			}

			visible = false
			accessFromSearchResults = false
			nameTextField.readOnly = false
			nameTextField.textColor = activePalette.text
			metaData = null

			qmlMetaKeyModel.clear()
//			if(keyAreaView.model !== null && !accessFromSearchResults){
//				keyAreaSelectedItem = keyAreaView.model.get(keyAreaView.currentRow)
//			}
		}
	}
}

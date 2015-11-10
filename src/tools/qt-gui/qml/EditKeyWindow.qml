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
		console.log(selectedNode)
		var newMetaData = {}
		console.log("1")
//		if(accessFromSearchResults)
//			index = selectedNode.parentModel.getIndexByName(selectedNode.name)
//		else
//			index = selectedNode.index

		//collect metadata in a map
		for(var i = 0; i < qmlMetaKeyModel.count; i++){
			newMetaData[qmlMetaKeyModel.get(i).metaName] = qmlMetaKeyModel.get(i).metaValue
		}
		console.log("2")
		//create undo command
		if(isEdited){
			container.clearData()
			console.log("2a")
			container.setOldName(keyName.toString())
			console.log("2b")
			container.setOldValue(keyValue.toString())
			console.log("2c")
			container.setOldMetadata(metaData)
			console.log("2d")

			container.setNewName(nameTextField.text)
			console.log("2e")
			container.setNewValue(valueTextField.text)
			console.log("2f")
			container.setNewMetadata(newMetaData)
			console.log("2g")

			undoManager.createEditKeyCommand(treeModel, selectedNode, container)
			console.log("2h")
		}
		console.log("3")
		if(true){//!error){//TODO
			qmlMetaKeyModel.clear()
			selectedNode = null
			console.log("4")
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
			console.log("5")
//			if(keyAreaView.model !== null && !accessFromSearchResults){
//				keyAreaSelectedItem = keyAreaView.model.get(keyAreaView.currentRow)
//			}
		}
	}
}

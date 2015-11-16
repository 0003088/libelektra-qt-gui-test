import QtQuick 2.6
import QtQuick.Controls 1.5
import QtQml.Models 2.2
import QtQuick.Controls.Styles 1.4
import QtQuick.Layouts 1.1
import QtQuick.Dialogs 1.2
import QtQuick.Window 2.0
import Qt.labs.folderlistmodel 2.1
import org.libelektra.qtgui 1.0
import "MainFunctions.js" as MFunctions

ApplicationWindow {
	id: mainWindow

	visible: true
	width: Screen.desktopAvailableWidth
	height: Screen.desktopAvailableHeight

	title: "Elektra Editor"

	onClosing: {
		if(!undoManager.isClean()){
			close.accepted = false
			exitDialog.open()
		}
		else
			Qt.quit()
	}

	//**Properties*********************************************************************************************//

	//Spacing & Margins recommended by KDE HIG
	property int    defaultMargins: 8
	property int    defaultSpacing: defaultMargins*0.5

	property int    keyAreaHeight: Math.ceil(mainRow.height*0.7 - defaultSpacing)
	property int    deltaKeyAreaHeight: Math.ceil(mainRow.height*0.5 - defaultSpacing)
	property int    keyAreaWidth: Math.ceil(mainRow.width*0.7 - defaultSpacing)
	property int    metaAreaHeight: Math.floor(mainRow.height*0.3)
	property int    deltaMetaAreaHeight: Math.floor(mainRow.height*0.25 - defaultSpacing)
	property int    searchResultsAreaHeight: Math.ceil(mainRow.height*0.25)
	property bool	helpMode: false

	property string version: "0.0.9 (beta)"

	DataContainer {
		id: container
	}

	//**Colors*************************************************************************************************//

	SystemPalette {
		id: activePalette
		colorGroup: SystemPalette.Active
	}
	SystemPalette {
		id: inactivePalette
		colorGroup: SystemPalette.Inactive
	}
	SystemPalette {
		id: disabledPalette
		colorGroup: SystemPalette.Disabled
	}

	//**Windows************************************************************************************************//

	NewKeyWindow {
		id: newKeyWindow

		onVisibleChanged: {
			if(visible === true){

				nameTextField.forceActiveFocus()
			}
		}
	}

	EditKeyWindow {
		id: editKeyWindow

		onVisibleChanged: {
			if(visible === true){
				if(nameTextField.text.charAt(0) === '#'){
					editKeyWindow.title = qsTr("Edit Array Entry")
					nameTextField.textColor = disabledPalette.text
					nameTextField.readOnly = true
					valueTextField.forceActiveFocus()
				}
			}
		}
	}

	NewKeyWindow {
		id: newArrayWindow

		title: qsTr("Create new Array Entry")

		onVisibleChanged: {
			if(visible === true){
				nameTextField.readOnly = true
				nameTextField.textColor = disabledPalette.text
				nameTextField.text = selectedNode.children.getCurrentArrayNo()
				valueTextField.forceActiveFocus()
			}
		}
	}

	UnmountBackendWindow {
		id: unmountBackendWindow

		okButton.action.onTriggered: unmountBackendWindow.close()
	}

	WizardLoader {
		id: wizardLoader
	}

	AboutWindow {
		id: aboutWindow
	}

	PluginInfo {
		id: pluginInfo
	}

	ChooseColorWindow {
		id: chooseColorWindow
	}

	//**Actions************************************************************************************************//

	GUIActions {
		id: guiActions
	}

	//**Menus & Toolbars***************************************************************************************//

	menuBar: MainMenuBar {
		id:mainMenuBar
	}

	toolBar: MainToolBar {
		id:mainToolbar
	}

	statusBar: StatusBar {
		id:mainStatusBar

		RowLayout {
			id: statusBarRow

			Label {
				id: path

				anchors.fill: parent
				anchors.leftMargin: defaultMargins
				text: !treeView.selection.hasSelection ? "" : filteredTreeModel.data(treeView.currentIndex, 258) + (!keyAreaView.selection.hasSelection ? "" :  "/" + treeModel.data(keyAreaView.currentIndex, 257))
			}
		}
	}

	//**Layouts & Views****************************************************************************************//

	Row {
		id: mainRow

		anchors.fill: parent
		anchors.margins: defaultMargins
		spacing: defaultSpacing

		BasicRectangle {
			id:treeViewRectangle

			width: Math.ceil(parent.width*0.3)
			height: parent.height

			TreeView {
				id: treeView

				anchors.fill: parent
				anchors.margins: 1
				headerVisible: false
				backgroundVisible: false
				alternatingRowColors: false
				frameVisible: false

				model: filteredTreeModel

				selection: ItemSelectionModel {
					model: filteredTreeModel
				}

				onClicked: {
					if(filteredTreeModel.data(currentIndex, 263)) {
						keyAreaView.model = treeModel
						keyAreaView.selection.model = treeModel
						keyAreaView.rootIndex = filteredTreeModel.mapToSource(currentIndex)
					}
					else {
						keyAreaView.model = null
						keyAreaView.selection.clear()
					}
					metaAreaView.model = null
				}

				itemDelegate: Row {
					Label {
						id: label

						anchors.verticalCenter: parent.verticalCenter
						color: filteredTreeModel !== null ? (filteredTreeModel.data(styleData.index, 265) ? disabledPalette.windowText : activePalette.text) : ""
						text: styleData.value
					}
					Item {
						id: spacer
						width: defaultSpacing
						height: label.height
					}
					Indicator {
						id: indicator

						paintcolor: label.color
						width: label.font.pixelSize*0.85
						height: width
						anchors.verticalCenter: label.verticalCenter
						opacity: filteredTreeModel !== null ? (filteredTreeModel.data(styleData.index, 262) > 0 && filteredTreeModel.data(styleData.index, 263) ? 1 : 0) : 0
					}
				}

				TableViewColumn {
					role: "baseName"
				}
			}
		}
		Column {
			id: keyMetaColumn

			spacing: defaultSpacing

			BasicRectangle {
				id: keyArea

				width: keyAreaWidth
				height: keyAreaHeight

				TreeView {
					id: keyAreaView

					anchors.fill: parent
					anchors.margins: 1
					frameVisible: false
					alternatingRowColors: false
					backgroundVisible: false
					onClicked: metaAreaView.model = treeModel.data(currentIndex, 266)

					selection: ItemSelectionModel {

					}

					TableViewColumn {
						id: nameColumn

						role: "baseName"
						title: qsTr("Key Name")
						width: Math.ceil(keyArea.width*0.5 - defaultSpacing*0.5)
					}
					TableViewColumn {
						id: valueColumn

						role: "value"
						title: qsTr("Key Value")
						width: Math.ceil(keyArea.width*0.5 - defaultSpacing*0.5)
					}
				}
			}
			BasicRectangle {
				id: metaArea

				width: keyAreaWidth
				height: metaAreaHeight

				TableView {
					id: metaAreaView

					anchors.fill: parent
					anchors.margins: 1
					frameVisible: false
					alternatingRowColors: false
					backgroundVisible: false
					selectionMode: SelectionMode.NoSelection

					TableViewColumn {
						id: metaNameColumn

						role: "metaName"
						title: qsTr("Metakey Name")
						width: Math.ceil(metaArea.width*0.5 - defaultSpacing*0.5)
					}
					TableViewColumn {
						id: metaValueColumn

						role: "metaValue"
						title: qsTr("Metakey Value")
						width: Math.ceil(metaArea.width*0.5 - defaultSpacing*0.5)
					}
				}
			}
			BasicRectangle {
				id: searchResultsArea

				width: keyAreaWidth
				height: searchResultsAreaHeight
				visible: false

				SequentialAnimation {
					id: searchResultsColorAnimation

					ColorAnimation {
						target: searchResultsArea
						property: "border.color"
						to: (searchResultsArea.visible &&  searchResultsListView.model !== null) ? (searchResultsListView.model.get(0).name === "NotfoundNode" ? "red" : "green") : activePalette.dark
						duration: 0
					}
					ColorAnimation {
						target: searchResultsArea
						property: "border.color"
						to: activePalette.dark
						duration: 1000
					}
				}

				ToolButton {
					id: searchResultsCloseButton

					iconSource: "icons/dialog-close.png"
					anchors.right: parent.right
					anchors.top: parent.top
					anchors.margins: defaultSpacing
					tooltip: qsTr("Close")
					onClicked: {
						keyMetaColumn.state = ""
						searchResultsSelectedItem = null
						searchResultsListView.model.discardModel()
						searchResultsListView.model = null
					}
				}

				ScrollView {
					id: searchResultsScrollView

					anchors.fill: parent
					anchors.margins: defaultMargins
					anchors.rightMargin: searchResultsCloseButton.width

					TreeView {
						id: searchResultsView

						anchors.fill: parent
						clip: true
//						highlightMoveDuration: 0
//						highlightResizeDuration: 0
//						keyNavigationWraps: true
						model: null

						selection: ItemSelectionModel {

						}

						TableViewColumn {
							id: searchResultsColumn
						}

						//						Keys.onPressed: {
						//							if(event.key === Qt.Key_Up && searchResultsListView.currentIndex > 0){
						//								currentIndex--
						//								searchResultsSelectedItem = model.get(currentIndex)
						//							}
						//							else if(event.key === Qt.Key_Down && searchResultsListView.currentIndex < model.rowCount() - 1){
						//								currentIndex++
						//								searchResultsSelectedItem = model.get(currentIndex)
						//							}
						//							else if((event.key === Qt.Key_Enter || event.key === Qt.Key_Return) && searchResultsSelectedItem !== null){
						//								editKeyWindow.selectedNode = searchResultsSelectedItem
						//								editKeyWindow.accessFromSearchResults = true
						//								editAction.trigger()
						//							}
						//						}

						//						highlight: Rectangle {
						//							id: highlightBar
						//							color: guiSettings.highlightColor
						//						}

						//						delegate: Text {
						//							color: guiSettings.nodeWithKeyColor
						//							text: path

						//							MouseArea {
						//								anchors.fill: parent
						//								acceptedButtons: Qt.LeftButton | Qt.RightButton

						//								onClicked: {
						//									if(searchResultsListView.model.get(0).name !== "NotfoundNode"){
						//										if(mouse.button === Qt.LeftButton){
						//											searchResultsListView.currentIndex = index
						//											searchResultsSelectedItem = searchResultsListView.model.get(searchResultsListView.currentIndex)
						//											forceActiveFocus()
						//										}
						//										else if(mouse.button === Qt.RightButton) {
						//											searchResultsListView.currentIndex = index
						//											searchResultsSelectedItem = searchResultsListView.model.get(searchResultsListView.currentIndex)
						//											forceActiveFocus()
						//											editKeyWindow.accessFromSearchResults = true
						//											searchResultsContextMenu.popup()
						//										}
						//									}
						//								}
						//								onDoubleClicked: {
						//									if(searchResultsListView.model.get(0).name !== "NotfoundNode"){
						//										searchResultsListView.currentIndex = index
						//										forceActiveFocus()
						//										editKeyWindow.accessFromSearchResults = true
						//										editKeyWindow.selectedNode = searchResultsListView.model.get(searchResultsListView.currentIndex)
						//										editAction.trigger()
						//									}
						//								}
						//							}
						//						}
					}
				}
			}
			states:
				State {
				name: "SHOW_SEARCH_RESULTS"

				PropertyChanges {
					target: keyArea
					height: deltaKeyAreaHeight
				}
				PropertyChanges {
					target: metaArea
					height: deltaMetaAreaHeight
				}
				PropertyChanges {
					target: searchResultsArea
					visible: true
				}
			}
		}
	}
}


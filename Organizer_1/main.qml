import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.5
import com.vv.organizer 1.0

Window {
    id:root
    visible: true
    width: 740
    height: 480
    title: qsTr("Organizer")

    property string ns: 'NewData{width:740; height:20;}'
    property string ts: 'NewData{width:740; height:20;}'
    property string NewColor: "#98FB98"
    property string BorderColor: "#000000"
    property int num: 0

    NewButton {
        size: 70
        anchors.right: parent.right
        anchors.rightMargin: 10
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        onClicked: { _aTD.open() }
    }
    ScrollView {
        ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
        ScrollBar.vertical.policy: ScrollBar.AlwaysOn
        anchors.fill: parent
        Component.onCompleted:
        {
            loader.loadBase()
        }
        ColumnLayout {
            id:list
            y:30
        }
    }
    Organizer{
        id : loader
        onInitEnd:
        {
            if (succeed)
            {
              loader.getNextRecord()
              Qt.createQmlObject(ns, list, "objdata")
            }
            else
            {
                Qt.quit()
            }
        }
        onLoad:
        {
            var total = ts + 't_id:"' + id + '";task:"' + task +
                             '";desc:"' + desc + '";date_beg:"' + date_beg +
                             '";date_end:"' + date_end + '";prog:"' + prog +'";}'
            Qt.createQmlObject(total, list, "obj" + (++num))
            loader.getNextRecord()
        }
    }
    //
    ListModel {
        id: organizerListModel
        Rectangle {
            id: id_rect
            x: 0
            y: 0
            width: 40
            height: 30
            Text {
                id: id_label
                text: qsTr("ID")
            }
        }
        Rectangle {
            id: task_rect
            x: 40
            y: 0
            width: 120
            height: 30
            Text {
                id: task_label
                text: qsTr("Задача")
            }
        }
        Rectangle {
            id: desc_rect
            x: 160
            y: 0
            width: 120
            height: 30
            Text {
                id: desc_label
                text: qsTr("Описание")
            }
        }
        Rectangle {
            id: datebeg_rect
            x: 280
            y: 0
            width: 120
            height: 30
            Text {
                id: datebeg_label
                text: qsTr("Дата начала\n разработки")

            }
        }

        Rectangle {
            id: dateend_rect
            x: 400
            y: 0
            width: 120
            height: 30
            Text {
                id: dateend_label
                text: qsTr("Срок\nвыполнения")
            }
        }
        Rectangle {
            id: progress_rect
            x: 520
            y: 0
            width: 80
            height: 30
            Text {
                id: progress
                text: qsTr("Прогресс")
            }
        }
    }
    ListView {
           id: viewList
           anchors.margins: 10
           anchors.fill: parent
           spacing: 10
           model: organizerListModel
           delegate:
               Rectangle {
               width: view.width
               height: 100
               border.color:BorderColor
               color: NewColor
               Text {
                   anchors.centerIn: parent
                   renderType: Text.NativeRendering
                   text: model.text
                   //
                   x: 14
                   y: 8
                   font.pixelSize: 12
               }
           }
    }
}


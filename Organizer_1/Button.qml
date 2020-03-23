import QtQuick 2.0
import QtQuick.Controls 2.14

Rectangle {
    id: _NewButton
    property int size: 70
    width: size
    height: size
    radius: 100
    signal clicked;
    MouseArea {
        id: _mArea
        anchors.fill: parent
        onClicked: {
            parent.clicked()
        }
    }
}
//
/*
Rectangle {
Button{
    id:addData
    text: qsTr("Добавить")
    Component.onCompleted: {
        x = 600;
        y = 0;
        width=100
        height=25
        color: "#B0C4DE"
    }
    onClicked:
    {
       var data_id = list.data[num].data[0].data[0].text
       var data_dateend = list.data[num].data[4].data[0].text
       var data_prog = list.data[num].data[5].data[0].text
       loader.writeNewInformation(data_id,data_task,data_desc,data_datebeg,data_dateend,data_prog)
       Qt.createQmlObject(ns, list, "objdata")
       num++
    }

}
Button{
    id:rewriteData
    text: qsTr("Перезаписать")
    Component.onCompleted: {
        x = 600;
        y = 30;
        width=100
        height=25
    }
    onClicked:
    {
        loader.rewriteFile()
        for (var i = 0; i < num;i++)
        {
            var data_id = list.data[i].data[0].data[0].text
            var data_task = list.data[i].data[1].data[0].text
            var data_desc = list.data[i].data[2].data[0].text
            var data_datebeg = list.data[i].data[3].data[0].text
            var data_dateend = list.data[i].data[4].data[0].text
            var data_prog = list.data[i].data[5].data[0].text
            loader.writeNewInformation(data_id,data_task,data_desc,data_datebeg,data_dateend,data_prog)
        }
    }
}
Button{
    id:deleteData
    text: qsTr("Очистить все")
    Component.onCompleted: {
        x = 600;
        y = 60;
        width=100
        height=25
    }
    onClicked:
    {
        loader.deleteFile()
        for (var i = 0; i < num;i++)
        {
            var data_id = list.data[i].data[0].data[0].text
            var data_task = list.data[i].data[1].data[0].text
            var data_desc = list.data[i].data[2].data[0].text
            var data_datebeg = list.data[i].data[3].data[0].text
            var data_dateend = list.data[i].data[4].data[0].text
            var data_prog = list.data[i].data[5].data[0].text
            loader.writeNewInformation(data_id,data_task,data_desc,data_datebeg,data_dateend,data_prog)
        }
    }
}
}
*/

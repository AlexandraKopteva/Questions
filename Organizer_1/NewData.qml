import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import com.vv.organizer 1.0

Item{
    model: Organizer{
    id: _organizer
    }
    delegate:
    Rectangle {
        x: 0
        y: 0
        id:mainrect
        property int lineHeight: 25
        property string t_id: "ID"
        property string task: "Название \n задания"
        property string desc: "Описание \n задания"
        property string date_beg: "Дата \n начала"
        property string date_end: "Дата \n окончания"
        property string prog: "Прогресс"
        //
        property string NewColor: "#ffffff"
        property string BorderColor: "#000000"
        width: parent.width
        height: lineHeight
        Rectangle {
        id: t_id_rect
        x: 0
        y: 0
        width: 40
        height: 30
        color: "#ffffff"
        border.color: "#000000"
        TextEdit {
        id: textEdit
        x: 0
        y: 0
        width: 65
        height: 20
        text: t_id
        textMargin: 3
        font.pixelSize: 12
        }
        }
        Rectangle {
        id: t_task_rect
        x: 40
        y: 0
        width: 120
        height: 30
        color: "#ffffff"
        border.color: "#000000"
        TextEdit {
        id: textEdit1
        x: 0
        y: 0
        width: 120
        height: 20
        text: task
        textMargin: 3
        font.pixelSize: 12
        }
        }

        Rectangle {
        id: t_desc_rect
        x: 160
        y: 0
        width: 120
        height: 30
        color: "#ffffff"
        border.color: "#000000"
        TextEdit {
        id: textEdit2
        x: 0
        y: 0
        width: 160
        height: 20
        text: desc
        textMargin: 3
        font.pixelSize: 12
        }
        }

        Rectangle {
        id: t_dateb_rect
        x: 280
        y: 0
        width: 120
        height: 30
        color: "#ffffff"
        border.color: "#000000"
        TextEdit {
        id: textEdit3
        x: 0
        y: 0
        width: 120
        height: 20
        text: date_beg
        textMargin: 3
        font.pixelSize: 12
        }
        }

        Rectangle {
        id: t_datee_rect
        x: 400
        y: 0
        width: 120
        height: 30
        color: "#ffffff"
        border.color: "#000000"

        TextEdit {
        id: textEdit4
        x: 0
        y: 0
        width: 120
        height: 20
        text: date_end
        textMargin: 3
        font.pixelSize: 12
        }
        }
        Rectangle {
        id: t_prog_rect
        x: 520
        y: 0
        width: 80
        height: 30
        color: "#ffffff"
        border.color: "#000000"
        TextEdit {
        id: textEdit5
        x: 0
        y: 0
        width: 80
        height: 20
        text: prog
        textMargin: 3
        font.pixelSize: 12
        }
        }
   }
}

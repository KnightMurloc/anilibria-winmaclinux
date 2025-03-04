import QtQuick 2.12

Rectangle {
    id: root
    color: applicationThemeViewModel.colorBackgroundNavigationButton
    height: 40
    width: 40
    radius: 10

    property var scrollView
    property bool isLeft

    IconButton {
        height: 40
        width: 40
        hoverColor: applicationThemeViewModel.filterIconButtonHoverColor
        overlayVisible: false
        iconPath: assetsLocation.iconsPath + (root.isLeft ? "leftscroll.svg" : "rightscroll.svg")
        iconWidth: 30
        iconHeight: 30
        tooltipMessage: "Сдвинуть " + (root.isLeft ? "влево" : "вправо") + " область просмотра"
        onButtonPressed: {
            if (root.isLeft) scrollView.contentX -= 200;
            if (!root.isLeft) scrollView.contentX += 200;
        }
    }
}

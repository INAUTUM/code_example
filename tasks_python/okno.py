import sys
from PyQt5 import QtGui, QtWidgets


class Main(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()
        self.setStyleSheet("QWidget{background-color: #fff;}")
        self.edit = QtWidgets.QLineEdit()
        self.edit.setFont(QtGui.QFont("Times New Roman", 14))
        self.edit.setPlaceholderText("Номер телефона")
        self.edit.setFixedHeight(40)
        self.edit.setStyleSheet("""
        QLineEdit{
            border: 1px solid #CCD6DD;
        }
        """)
        self.button = QtWidgets.QPushButton("Вход")
        self.button.setFont(QtGui.QFont("Times New Roman", 12))

        self.button.setStyleSheet("""
        QPushButton{
            font-style: oblique;
            font-weight: bold;
            border: 1px solid #1DA1F2;
            border-radius: 15px;
            color: #1DA1F2;
            background-color: #fff;
        }
        """)
        self.button.setFixedSize(100, 40)
        self.layout = QtWidgets.QHBoxLayout()
        self.layout.addWidget(self.edit)
        self.layout.addWidget(self.button)
        self.setLayout(self.layout)


if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    main = Main()
    main.show()
    sys.exit(app.exec_())

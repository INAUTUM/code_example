import sys
from PyQt5 import QtCore, QtWidgets
from PyQt5.QtWidgets import QDialog, QApplication, QLabel, QPushButton, QVBoxLayout, QWidget, QComboBox, QGridLayout


class W(QWidget):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.box = QComboBox()
        self.box.addItems(['', 'yellow', 'green'])
        for i in range(1, 3):
            pix = QPixmap(40, 40)
            pix.fill(colors[i])
            self.box.setItemIcon(i, QIcon(pix))
        self.box.setMaximumWidth(30)
        self.btn = QPushButton('PUSH')
        layout = QGridLayout(self)
        layout.addWidget(self.btn, 0, 0)
        layout.addWidget(self.box, 0, 1)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = W()
    window.show()
    sys.exit(app.exec_())

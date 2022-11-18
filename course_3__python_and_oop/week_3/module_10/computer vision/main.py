''' My Computer Application

author -- Tonmoy Kumar Roy
'''

import sys
from PyQt5.QtWidgets import *
from PyQt5.QtGui import QPixmap, QImage, QIcon
from PyQt5.QtCore import QTimer
import cv2
import datetime


class Window(QWidget):
    def __init__(self):
        super().__init__()

        # variable for app window
        self.window_width = 800
        self.window_height = 400

        # variable for image
        self.image_width = 400
        self.image_height = 400

        # other variables
        self.dt = '0-0-0'
        self.record_flag = False

        # load Icon
        self.camera_icon = QIcon(cap_icon_path)
        self.rec_icon = QIcon(rec_icon_path)
        self.stop_Icon = QIcon(stop_icon_path)

        # to save video
        self.fourcc = cv2.VideoWriter_fourcc(*'XVID')

        # setup the window
        self.setWindowTitle("My Compute App")
        self.setFixedSize(self.window_width, self.window_height)
        self.setGeometry(0, 0, self.window_width, self.window_height)

        # setup Timer
        self.timer = QTimer()
        self.timer.timeout.connect(self.update)

        self.ui()

    def ui(self):
        ''' content all ui thing '''
        # layout
        grid = QGridLayout()
        self.setLayout(grid)

        # image label
        self.image_label = QLabel(self)
        self.image_label.setGeometry(0, 0, self.image_width, self.image_height)

        # capture Btn
        self.capture_btn = QPushButton(self)
        self.capture_btn.setIcon(self.camera_icon)
        self.capture_btn.setStyleSheet(
            "border-radius: 30; border: 2px solid black; border-width: 3px")
        self.capture_btn.setFixedSize(60, 60)
        self.capture_btn.clicked.connect(self.save_img)

        # video Btn
        self.rec_btn = QPushButton(self)
        self.rec_btn.setIcon(self.rec_icon)
        self.rec_btn.setStyleSheet(
            "border-radius: 30; border: 2px solid black; border-width: 3px")
        self.rec_btn.setFixedSize(60, 60)
        self.rec_btn.clicked.connect(self.record)

        if not self.timer.isActive():
            self.cap = cv2.VideoCapture(0)
            self.timer.start(20)

        grid.addWidget(self.capture_btn, 0, 0)
        grid.addWidget(self.rec_btn, 1, 0)
        grid.addWidget(self.image_label, 0, 1, 2, 3)

        self.show()

    def update(self):
        ''' update frames '''
        _, self.frame = self.cap.read()

        if (self.record_flag == True):
            self.rec_btn.setIcon(self.stop_Icon)
            self.frame = cv2.circle(self.frame, (20, 70), 5, (0, 0, 225), 10)
        else:
            self.rec_btn.setIcon(self.rec_icon)

        frame = cv2.cvtColor(self.frame, cv2.COLOR_BGR2RGB)
        height, width, channel = frame.shape
        step = channel * width
        q_frame = QImage(frame.data, width, height, step, QImage.Format_RGB888)
        self.image_label.setPixmap(QPixmap.fromImage(q_frame))

    def save_img(self):
        ''' save image from camera '''
        self.get_time()

        cv2.imwrite(f"{self.dt}.jpg", self.frame)

    def record(self):
        ''' record video '''
        if (self.record_flag == True):
            self.record_flag = False
        else:
            self.record_flag = True
            self.get_time()

            self.out = cv2.VideoWriter(
                f"{self.dt}.avi", self.fourcc, 20.2, (self.image_width, self.image_height))

    def get_time(self):
        now = datetime.datetime.now()
        self.dt = now.strftime("%m-%d-%y, %H-%M-%S")
        print(self.dt)


# run
if __name__ == '__main__':
    cap_icon_path = 'assets/photo-camera-icon-free-vector.jpg'
    rec_icon_path = 'assets/pngtree-play-video-icon-graphic-design-template-vector-png-image_530833.jpg'
    stop_icon_path = 'assets/icons8-stop-sign-48.png'

    app = QApplication(sys.argv)
    win = Window()
    sys.exit(app.exec_())

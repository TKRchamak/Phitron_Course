class GroupChat:
    def __init__(self) -> None:
        self.__observer = []

    def attach(self, observer):
        self.__observer.append(observer)

    def addNewMsg(self, msg):
        self.notify(msg)

    def notify(self, msg):
        for observer in self.__observer:
            observer.update(msg)


class Observer:
    def __init__(self, name) -> None:
        self.name = name

    def update(self, msg):
        print(f'New message from admin is {msg}')


observer1 = Observer('observer1')
observer2 = Observer('observer2')
observer3 = Observer('observer3')
observer4 = Observer('observer4')

messenger = GroupChat()

messenger.attach(observer1)
messenger.attach(observer2)
messenger.attach(observer3)
messenger.attach(observer4)

messenger.addNewMsg('this is working')

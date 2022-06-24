from observer import Observer
from display import Display


class DisplayTwo(Observer, Display):
    def __init__(self):
        self.temp = 0
        self.humidity = 0

    def display(self):
        print(f'Display Two: temp={self.temp}, humidity={self.humidity}')

    def update(self, *args, **kwargs):
        self.temp = kwargs.get('temp')
        self.humidity = kwargs.get('humidity')

        self.display()

from subject import Subject


class WeatherData(Subject):
    def __init__(self):
        self.temp = 0
        self.humidity = 0

        super().__init__()

    def set_weather_data(self, temp, humidity):
        self.temp = temp
        self.humidity = humidity

        self.notify_observers()

    def notify_observers(self):
        for observer in self.observers:
            observer.update(temp=self.temp, humidity=self.humidity)

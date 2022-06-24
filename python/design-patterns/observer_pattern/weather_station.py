from weather_data import WeatherData
from display_one import DisplayOne
from display_two import DisplayTwo


class WeatherStation:
    def __init__(self):
        self._weather_data = WeatherData()
        self._display_one = DisplayOne()
        self._display_two = DisplayTwo()

        self._weather_data.register_observer(self._display_one)
        self._weather_data.register_observer(self._display_two)

    def start(self):
        for i in range(5):
            if i == 3:
                self._weather_data.remove_observer(self._display_two)
            self._weather_data.set_weather_data(i, i)


if __name__ == '__main__':
    weather_station = WeatherStation()
    weather_station.start()

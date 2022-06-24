from typing import List
from abc import ABC, abstractmethod

from observer import Observer


class Subject(ABC):
    def __init__(self):
        self.observers: List[Observer] = []

    def register_observer(self, observer: Observer):
        self.observers.append(observer)

    def remove_observer(self, observer: Observer):
        self.observers.remove(observer)

    @abstractmethod
    def notify_observers(self):
        pass

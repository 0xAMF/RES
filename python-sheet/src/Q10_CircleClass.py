import math


class circle:
    def __init__(self, radius):
        self.radius = radius

    def get_area(self):
        area = self.radius * self.radius * math.pi
        return area

    def get_perimeter(self):
        perimeter = 2 * math.pi * self.radius
        return perimeter

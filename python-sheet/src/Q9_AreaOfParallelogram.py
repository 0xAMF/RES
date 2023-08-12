import math


class parallelogram:
    def __init__(self, side1, side2, angle):
        self.side1 = side1
        self.side2 = side2
        self.angle = angle

    def get_area(self):
        area = self.side1 * self.side2 * math.sin(math.radians(self.angle))
        return area


class main:
    side1 = float(input("Enter the value of the first side: "))
    side2 = float(input("Enter the value of the second side: "))
    angle = float(input("Enter the value the angle: "))
    my_parallelogram = parallelogram(side1, side1, angle)
    area = my_parallelogram.get_area()
    print(area)


if __name__ == "--__main__":
    main()

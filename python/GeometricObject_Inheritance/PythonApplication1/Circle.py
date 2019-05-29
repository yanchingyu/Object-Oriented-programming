from GeometricObject import GeometricObject
import math

class Circle(GeometricObject):

    def __init__(self, radius, color , filled ):
        super().__init__(color, filled)
        self.radius = radius

    def setRadius(self, radius):
        self.radius = radius

    def getRadius(self):
        return self.radius

    def getArea(self):
        return self.radius * self.radius * math.pi

    def getDiameter(self):
        return (self.radius * 2)

    def getPerimeter(self):
        return self.radius * 2 * math.pi

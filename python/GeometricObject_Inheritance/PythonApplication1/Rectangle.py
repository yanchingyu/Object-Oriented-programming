from GeometricObject import GeometricObject

class Rectangle(GeometricObject):

    def __init__(self, width , height , color , filled):
        super().__init__(color, filled)
        self.height = height
        self.width = width

    def setHeight(self, height):
        self.height = height

    def getHeight(self):
        return self.height

    def setWidth(self, width):
        self.width = width

    def getWidth(self):
        return self.width

    def getArea(self):
        return self.height * self.width

    def getPerimeter(self):
        return (self.height + self.width) * 2

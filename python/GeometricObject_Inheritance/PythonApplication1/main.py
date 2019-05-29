from Circle import Circle
from Rectangle import Rectangle

radius = int(input())

width = int(input())
height = int(input())

circle = Circle(radius, input(), bool(input()))
rectangle = Rectangle(width, height, input(), bool(input()))

print("Circle:")
print("Radius is ", circle.getRadius())
print("Diameter is ", circle.getDiameter())
print("Area is ", circle.getArea())
print("Perimeter is ", circle.getPerimeter())
print(circle)

print("Rectangle:")
print("Width is ", rectangle.getWidth())
print("Height is ", rectangle.getHeight())
print("Area is ", rectangle.getArea())
print("Perimeter is ", rectangle.getPerimeter())
print(rectangle)

"""
設計一父類別 GeometricObject
其中有兩個私有資料欄位，分別為 color 與 filled
加入建構子，並增加五個函式
分別是 getColor、setColor、isFilled、setFilled
另再增加 __str__ 函式印出 color 與 filled
再設計兩個子類別 Circle 與 Rectangle 皆需繼承 GeometricObject
也皆需設計建構子與函式，函式如下：
getRadius、setRadius、getArea、getDiameter、getPerimeter、getWidth、setWidth、getHeight、setHeight、getArea、getPerimeter



範例輸入：
4
7
5
White
True
Yellow
True


範例輸出：

Circle:
Radius is 4
Diameter is 8
Area is 50.26548245743669
Perimeter is 25.132741228718345
color: White and filled: True

Rectangle:
Width is 7
Height is 5
Area is 35
Perimeter is 24
color: Yellow and filled: True


※ 計算圓，請使用 math.pi 的內建函式

"""


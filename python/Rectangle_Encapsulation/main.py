from Rectangle import Rectangle

height1 = int(input())
height2 = int(input())
width1 = int(input())
width2 = int(input())

rectangle1 = Rectangle(height1, width1)
rectangle2 = Rectangle(height2, width2)

print(rectangle1.getArea(), " " , rectangle1.getPerimeter())
print(rectangle2.getArea(), " " , rectangle2.getPerimeter())

rectangle2 = Rectangle(50, 25)
print(rectangle2.getArea(), " " , rectangle2.getPerimeter())


'''
請分開檔案設計長方形 Rectangle 類別

並依序完成建構子和setLength()、setWidth()、getLength()、getWidth()、getArea()、getPerimeter() 六個函式

類別內 data fields 請使用私有化


輸入2長與2寬作為建構2個長方形物件的參數，輸出2個長方形的面積和周長。


再將第二個長方形的長改為50、寬改為25，修改後，輸出第二個長方形的面積和周長。




範例輸入：
69(第一個長方形長)
72(第二個長方形長)
91(第一個長方形寬)
56(第二個長方形寬)

範例輸出：
4968 282
5096 294
1250 150
'''

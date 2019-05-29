from Date import Date
from Student import Student

s1 = Student("John", Date(6, 1, 1999), 90) 
s2 = Student("Marry", Date(10, 8, 1997), 80)

name = input()
month = input()
day = input()
year = input()

s1.setName(name)
s2.setDate(Date(month, day, year))

s1.toString()
s2.toString()

'''
請設計兩類別 Date 與 Student

Date 類別有三個私有變數 month、day、year

Student 類別有三個私有變數 name、date、score

Date 類別中請設計建構者和 function: setMonth、getMonth、setDay、getDay、setYear、getYear、toString

Date 類別中 toString 的功能為輸出『月』、『日』、『年』

Student 類別中請設計建構者和 function: setName、getName、setDate、getDate、setScore、getScore、toString

Student類別中 toString 的功能為輸出如範例之資訊

於主程式再建立兩個 Student 物件 s1("John", Date.Date(6, 1, 1999), 90) 和 s2("Marry", Date.Date(10, 8, 1997), 80)

然後輸入 名字 與 年、月、日，分別修改 s1 的名字和修改 s2 的生日

最後利用 Student 物件中的 toString 進行輸出。





範例輸入：
"Jerry"
5
4
1991

範例輸出：
Jerry 6\1\1999 90
Marry 5\4\1991 80

'''

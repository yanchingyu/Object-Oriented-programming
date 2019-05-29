def isLeapYear(newYear):
     if newYear%4==0 and newYear%100!=0 or newYear%400==0:
         return True
     else:
         return False



for i in range(3):
    year = int(input())
    if(isLeapYear(year)):
        print("The ", year, " is leap year.")
    else:
        print("The ", year, " isn't leap year.")
"""
請以 for 迴圈輸入三個年份，且撰寫一函式 def isLeapYear(newYear) 函式判斷是否為閏年，若該年度為閏年，傳回True，否則傳回False。最後依照範例格式輸出即可。



範例：
The 2012 is leap year.
The 2011 isn't leap year.
The 2019 isn't leap year.

"""
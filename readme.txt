本仓库存储一些c语言练习题。
---------------------------------
a:打印图形
题目描述
编写程序，打印以下图形（行数n的值由键盘输入）

       *****

        ****

         ***

          **

           *
输入
	行数n的值

输出
	n行图形

样例输入
	5
样例输出
	*****
	 ****
	  ***
	   **
	    *
提示

输出图形中的星号（*）是英文符号
---------------------------------
b:求数列的和
题目描述
编写程序，计算并输出下式的结果，输出时要求保留三位小数。其中：n从键盘输入。
s=1+1/2! + 1/3! + 1/4! + ……+ 1/n！
输入
输入n的值

输出
输出求出的s值

样例输入
4
样例输出
1.708
---------------------------------
c:sn=a+aa+aaa+aaaa+......+aa.....a
题目描述
求sn=a+aa+aaa+aaaa+......+aa.....a的值，其中a是一个数字，例如：2+22+222+2222+22222(此时n=5)。n和a的值由键盘输入，请编程实现以上和过程。

输入
输入n和a的值。

输出
输出数列的和。

样例输入
5 4
样例输出
49380
---------------------------------
d:求2到500之间的所有完数
题目描述
编写一个程序，输出2到500之间的所有完数。所谓完数，是指该数的各因子之和正好等于该数本身。
输入
无
输出
2到500之间的完数。
---------------------------------
e:三个数排序
题目描述
从标准输入读取三个整数，按从大到小输出。
输入
输入有多组测试数据，每行有3个整数。
输出
输出从大到小排序后的结果。
样例输入
1 2 3
10 2 8
样例输出
3 2 1
10 8 2
---------------------------------
f:成绩转换
题目描述
输入一个整数成绩，请转换成五级制。
输入
输入有多组数据，每行一个整数（0<=n<=100）,代表一个百分制成绩。
输出
输出对应的结果。n<60 :E  60<=n<70: D   70<=n<80 : C  80<=n<90:B 90<=n<=100: A
样例输入
88
54
样例输出
B
E
---------------------------------
g:回文整数
题目描述
盘输入一个五位整数,判断是否为回文数。

输入
输入有多个测试数据，每行一个整数（10000<=n<=65535）。
输出
如果是回文数，则输出YES，否则NO。
样例输入
11111
12321
23456
样例输出
YES
YES
NO
---------------------------------
h:一元二次方程求解
题目描述
从键盘输入一元二次方程的系数a,b,c,编程求方程ax2+bx+c=0的解.

输入
输入有多组测试数据，每行三个整数a，b，c，分别代表方程的二次项系数、一次项系数和常数项。

输出
输出对应的解。如果有两个相等的解，请重复输出。如果有两个不等的解，请从小到输出。数据格式为宽度10，保留2位小数右对齐。
样例输入
1 2 1
2 6 4
样例输出
     -1.00     -1.00
     -2.00     -1.00
提示
输出对应的解。如果有两个相等的解，请重复输出。如果有两个不等的解，请从小到输出。数据格式为宽度10，保留2位小数右对齐。
---------------------------------
i:级数求和
题目描述
编写一个程序,求1+1/2+1/3+1/4+1/5+1/6+1/7……1/n的值.

输入
输入有多组数据，每行一个整数，代表n的值，10<=n<=100

输出
输出对应的结果。数据格式：宽度6，保留2位小数。

样例输入
10
20
样例输出
  2.93
  3.60
提示

输出对应的结果。数据格式：宽度6，保留2位小数。
---------------------------------
j:计算长方形面积
题目描述
从键盘输入长方形的长和宽，请编写程序计算此长方形的面积并输出。

说明：长和宽均为实数，输出结果小数点后保留两位。

输入
从键盘输入两个实数，以空格隔开。

输出
输出结果小数点后保留两位。

样例输入
3.5 2.5
样例输出
8.75
---------------------------------

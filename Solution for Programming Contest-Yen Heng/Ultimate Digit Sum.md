#  <u>Ultimate Digit Sum</u>

## <u>Question</u>

Hong Yee is playing a game with his friends. Each of them are required to randomly pick a paper which has a number written on it out of a box. The numbers in the box are ranged from $1 \le n \le 2^{50}$. The game mechanisms are listed below.

1. Player is required to pick a paper randomly.
2. If the digit $n$ is a multi-digit number, the digit sum of $N$ is the sum of all digits of $n$. 
3. If the digit sum of $n$ is a multi-digit number, the digits of this number can be further added to find its digit sum.
4.  The process can be repeated until a single-digit number is obtained, and this answer is called the ultimate digit sum of $N$.

宏毅正在与朋友进行一场游戏。他们每人都需从一个盒子里面随机抽取一张纸条。每张纸条上都会写着一个数字。盒子里的数字大小范围在$1 \le n \le 2^{50}$ 。游戏的机制如下。

1. 玩家需要随机抽取一张纸条。
2. 假如这数字$n$是一个多位数，其数字$N$是把此数$n$所有数字加起来的结果。
3. 假如这数字$n$相加结果是一个多位数，其数字可以再相加形成另一个数字之和。
4. 这样的过程可以持续直到最终找到了一个单位数的数字之和，此最终结果就称为最终数字之和$N$。

## <u>Example例子</u>

| Input(输入) | Output(输出) |
| :---------: | ------------ |
|     16      | 7            |
|     256     | 4            |
| 1073741824  | 1            |

## <u>Explanation解释</u>

1. 16 --> 1+6 =7
2. 256 --> 2+5+6=13 --> 1+3 =4
3. 1073741824 --> 1+0+7+3+7+4+1+1+8+2+4 = 37 --> 3+7 = 10 --> 1+0 = 1

## <u>Input</u>

Input an **integer $n$**, where $1 \le n \le 2^{50}$.

输入一个**整数** $N$, 满足 $1 \le n \le 2^{50}$.

## <u>Output</u>

Output the **ultimate sum of the digits of $N$** is obtained.

输出 **$N$ 的最终数字之和**。

## <u>Constraint 数据范围</u>

$1 \le n \le 2^{50}$
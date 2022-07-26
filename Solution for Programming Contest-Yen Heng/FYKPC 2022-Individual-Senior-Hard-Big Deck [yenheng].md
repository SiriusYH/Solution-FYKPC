### Senior-Hard-Question 3-Card Deck

Jeremy has given you 10 cards which are numbered 1 to 10 respectively. You are bored and you decided to write a program to count the number of ways to construct a sum by picking the card one or more times. However, every time you pick a card, you are required to put it back into the deck, shuffle and pick a card again.

For example, if n = 4 (sum=4), there are 8 ways:

1. 1 + 1 + 1 + 1 
2. 1 + 1 + 2 
3. 1 + 2 + 1 
4. 2 + 1 + 1
5. 2 + 2
6. 3 + 1 
7. 1 + 3 
8. 4 

You are required to **modulo the ways by 1e9+7**.

> 杰哥给了你10张卡片，分别编号为1到10。你很无聊，于是乎决定写一个程序，用于计算一次或多次选牌来得到一个总和为“n”的组合可能性。但是，你每次选牌之后，都需要把它放回牌组中，洗牌后再选牌。
>
> 例：如果n=4（总和=4），有8种可能性。
>
> 1. 1 + 1 + 1 + 1 
> 2. 1 + 1 + 2 
> 3. 1 + 2 + 1 
> 4. 2 + 1 + 1
> 5. 2 + 2
> 6. 3 + 1 
> 7. 1 + 3 
> 8. 4 
>
> 最终，你需要模除1e9+7。

### Input  format 输入格式

Input $n$ as the sum in the first line.

>在第一行输入$n$代表总和 。



### Constraints 限制

**$n$** $<$ **$1\text{e}9$**



### Output format 输出格式

Output the number of ways and modulo the ways by 1e9+7.

>输出可能性的值并且模除1e9+7。



### Sample 例子

| Input 输入 | Output 输出 |
| ---------- | ----------- |
| 4          | 8           |

There are $8$ ways to get the sum $4$.

The ways is shown below:

1.  $1+1+1+1$
2.  $1+1+2$
3.  $1+2+1$
4.  $2+1+1$
5.  $2+2$
6.  $3+1$
7.  $1+3$
8.  $4$
# MyLeetcode
This is my way to build up my code ability, and it must be!
## Add Two Numbers
this is the first problem that i solved by myself. 2333

I made a fault when I first submit it, I forgot to consider the situation 5+5, just a small problem

Time Complexity:O(n)

## Pow(x,n)

This problem made me very confused. at the very first, I used the most commen method to solve it, however I got <font color="red">TLE</font>. the datas for test are too big(where is the range of the test datas? ). And then, I used <font color="red">fast power</font> to handle this. However, failed again. ~~n could be a negative number???~~ Finally after all of the trap, I got accepted. :)

## The Longest Substring without Repeating Characters

It's so exciting that my code was accepted at the first submition. To solve this problem, I build a integer string to determin whather a character showed up before (to reduce the time complexity ). And then, use the sliding window to reduce the time complexity.

Time Complexity:O(2n)

## Palindrome Number

Thought I accepted it, I think my answer is not so perfect. because it is said that when using "Reverse Integer" might overflow, and I didn't solve this problem. So, I am confusied.

## String to Integer

This is the most disgusting problem I have met. I know that there must be some bug. but I didn't realise that the test data is so disgusting. However, the mistake I made is mainly on the boundry. And I finally know why problem 9 may have some problems.

Time Complexity:O(n)

## Container With Most Water

At the very first, I even can't understand the problem. And then, after carfully reading, I understood what kind of problem I should solve. Just find the rectangle whose area is the widest. I didn't try the most commen method, because I think it would run out of time. So, I used this kind of method <a href=https://segmentfault.com/a/1190000008824222>click me to see method</a>. without any accident, I got accept.
TimeComplexity:O(n)

## Valid Parentheses

Because of the network problem, I didn't finish yesterday's task, and task of today may be a little late. This problem was one of the original problem of post exam of SYSU. And to solve it, a stack is needed. because of using C, I wrote some basic function of stack, if you are using C++, just use the template stack, it can be more easy. 

To solve the problem, you need to visit every char in the string s, and if the char you are visiting is ( [  or {, just push them into the stack, and if you met ) ] }, you need check the top element of the stack to check is weather matched. if not, jump out of the loop, and return false, else you need pop out the current top element. if all of the char are visited, check the stack, if empty, congration, you got the valid parentheses.

## Topic: dynamic programming

Finally I got the basic knowledge of dp. Today, I used dp to solve tree problems on <a href="https://leetcode.com/problemset/all/"> LeetCode</a>. And they are all about dp. 

Before using dp, you need to find states set, which contained all of the states you may met when solving this problem. for example, when solving LIS problem, suppose that we got one substring (b1 b2 b3 ...) when dealing with the (i-1)th element. now you should determin wheather the ith element can make your answer grow greater. So we got two states, one is that ith element can make your answer grow greater, one is not.

Then, you need determin the state transfering function. Now, suppose the ith number of string dp determins the max length of increasing substring.  
 
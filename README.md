# Tree Friends
 Codeforces Problem
 Links: https://codeforces.com/problemset/problem/1272/A

A. Three Friends
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Three friends are going to meet each other. Initially, the first friend stays at the position 𝑥=𝑎, the second friend stays at the position 𝑥=𝑏 and the third friend stays at the position 𝑥=𝑐 on the coordinate axis 𝑂𝑥.

In one minute each friend independently from other friends can change the position 𝑥 by 1 to the left or by 1 to the right (i.e. set 𝑥:=𝑥−1 or 𝑥:=𝑥+1) or even don't change it.

Let's introduce the total pairwise distance — the sum of distances between each pair of friends. Let 𝑎′, 𝑏′ and 𝑐′ be the final positions of the first, the second and the third friend, correspondingly. Then the total pairwise distance is |𝑎′−𝑏′|+|𝑎′−𝑐′|+|𝑏′−𝑐′|, where |𝑥| is the absolute value of 𝑥.

Friends are interested in the minimum total pairwise distance they can reach if they will move optimally. Each friend will move no more than once. So, more formally, they want to know the minimum total pairwise distance they can reach after one minute.

You have to answer 𝑞 independent test cases.

Input
The first line of the input contains one integer 𝑞 (1≤𝑞≤1000) — the number of test cases.

The next 𝑞 lines describe test cases. The 𝑖-th test case is given as three integers 𝑎,𝑏 and 𝑐 (1≤𝑎,𝑏,𝑐≤109) — initial positions of the first, second and third friend correspondingly. The positions of friends can be equal.

Output
For each test case print the answer on it — the minimum total pairwise distance (the minimum sum of distances between each pair of friends) if friends change their positions optimally. Each friend will move no more than once. So, more formally, you have to find the minimum total pairwise distance they can reach after one minute.

Example
inputCopy
8
3 3 4
10 20 30
5 5 5
2 4 3
1 1000000000 1000000000
1 1000000000 999999999
3 2 5
3 2 6
outputCopy
0
36
0
0
1999999994
1999999994
2
4

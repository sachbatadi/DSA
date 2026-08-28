# Selection Sort

## Difficulty: Easy

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/selection-sort/1)

## Solved On
28 Aug 2026 at 01:51 pm

<h2><a href="https://www.geeksforgeeks.org/problems/selection-sort/1">Selection Sort</a></h2><h3>Difficulty Level: Easy</h3><hr><p><span style="font-size: 18px;">Given an array <strong>arr</strong>, use <strong>selection sort </strong>to sort arr[] in increasing order.</span></p>
<p><strong><span style="font-size: 18px;">Examples :</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [4, 1, 3, 9, 7]</span>
<span style="font-size: 18px;"><strong>Output: </strong>[1, 3, 4, 7, 9]</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>Maintain sorted (in bold) and unsorted subarrays. Select 1. Array becomes <strong>1</strong> 4 3 9 7. Select 3. Array becomes <strong>1 3</strong> 4 9 7. Select 4. Array becomes <strong>1 3 4</strong> 9 7. Select 7. Array becomes <strong>1 3 4 7</strong> 9. Select 9. Array becomes <strong>1 3 4 7 9</strong>.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]</span>
<span style="font-size: 18px;"><strong>Output: </strong>[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]<br></span></pre>
<pre><strong>Input: </strong>arr[] = [38, 31, 20, 14, 30]
<strong>Output: </strong>[14, 20, 30, 31, 38]</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>3<br></sup>1 ≤ arr[i] ≤ 10<sup>6</sup></span></p>
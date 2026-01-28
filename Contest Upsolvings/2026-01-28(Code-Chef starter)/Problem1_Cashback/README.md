# Cashback

**Topic:** Conditional Statements  
**Difficulty:** Easy  

## Problem Summary
A customer is buying a cake for `X` rupees.  
Cashback policy:  
- If the purchase is **at least 200 rupees**, the customer gets **50 rupees cashback**.  
- Otherwise, no cashback is applied.  

Calculate the **effective amount paid** after cashback.

---

## Approach / Solution Idea
1. Read the price `X`.  
2. If `X >= 200`, subtract `50` from `X`.  
3. Otherwise, keep `X` as is.  
4. Print the final amount.

This problem is straightforward and uses simple **conditional logic**.

---

## Time Complexity
O(1) — only one comparison and subtraction.

## Space Complexity
O(1) — only storing the input and result.




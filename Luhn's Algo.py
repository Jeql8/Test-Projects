#!/usr/bin/env python
# coding: utf-8

# In[45]:


credit_num = "none"
total_a = 0
total_b = 0

while credit_num.isnumeric() != True:
    credit_num = input("Enter a credit card number ")
    reverse = credit_num[::-1]
    a = str(reverse[1::2])
    b = str(credit_num[1::2])
    for digit in a:
        
        real_digit = int(digit) * 2   
    
        for num in str(real_digit):
            
            total_a += int(num)
    for digits in b:
        for nums in digits:
            total_b += int(nums)
    total_c = total_a + total_b
    total_c = str(total_c)
    if total_c[1] == "0":
        
        print("It's valid :) ")
    else:
        
        print("nah bruh")
    
    


# In[41]:


test_num = 4003600000000014
for a in test_num:
    print(a)


# In[25]:


print(3*2)


# In[ ]:





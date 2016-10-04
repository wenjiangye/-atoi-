class Solution {  
public:  
    int myAtoi(string str) {  
    const char *p = str.c_str();  
    int sign = 1, base = 0, i = 0;  
    while (p[i] == ' ') { i++; }   //    去除空白字符  
    if (p[i] == '-') {  
      sign = -1;    // 记住符号  
      i++;  
    }  
    else if(p[i] == '+')  
      i++;  
    else ;  
    while ((p[i] >= '0' && p[i] <= '9')) {  
        if (base >  INT_MAX / 10 || (base == INT_MAX / 10 && p[i] - '0' > 7))   
        {   //   2147483647  
            if (sign == 1)   
               return INT_MAX;  
            return INT_MIN;  
        }  
        base  = 10 * base + (p[i++] - '0');  
    }  
    return base * sign;  
}  
};  

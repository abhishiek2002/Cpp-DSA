# String Palindrome

👉 <a href="https://www.naukri.com/code360/problems/string-palindrome_624944?interviewProblemRedirection=true&search=&leftPanelTabValue=PROBLEM&count=25&sort_entity=order&sort_order=ASC&customSource=studio_nav&attempt_status=COMPLETED&page=2">Coding Ninja Problem Statement</a>

```cpp
bool checkPalindrome(char str[]) {
    int start=0, end = strlen(str)-1;

    while(start<end){
        if(str[start] != str[end]) return false;
        start++;
        end--;
    }

    return true;

}
```

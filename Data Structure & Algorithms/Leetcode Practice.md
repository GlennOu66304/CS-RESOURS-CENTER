# Leetcode Practice.
## Hash

1. First you need to seprate the package and Class into two single files;
<br>IntelliJ IDEA First Java Program(2. Create Package)
<br>https://www.javatpoint.com/intellij-idea-first-java-program

2. in order to run Hash code example in your intelliJ idea, You need to add the code 
```
import java.util.*;
```
and change the class to Udacity, like:
```
public class Udacity 
```
Full Code:
```
import java.util.*;

public class Udacity {
    public static void main(String[] args) {

        // Creating an empty Hashtable
        Hashtable<String, Integer> numbers
                = new Hashtable<String, Integer>();
        numbers.put("one", 1);
        numbers.put("two", 2);
        numbers.put("three", 3);

        Integer n = numbers.get("two");
        if (n != null) {
            System.out.println("two = " + n);
        }
    }
}
```
Class Hashtable<K,V>
<br>https://docs.oracle.com/javase/7/docs/api/java/util/Hashtable.html
<br>Hashtable in Java
<br>https://www.geeksforgeeks.org/hashtable-in-java/

## LeetCode 第 1 号问题：两数之和
LeetCode 第 1 号问题：两数之和
<br>https://github.com/MisterBooo/LeetCodeAnimation/blob/master/notes/LeetCode%E7%AC%AC1%E5%8F%B7%E9%97%AE%E9%A2%98%EF%BC%9A%E4%B8%A4%E6%95%B0%E4%B9%8B%E5%92%8C.md
<br>跟着程序员小吴图解 LeetCode 】LeetCode 第 1 号问题：两数之和
<br>https://www.bilibili.com/video/av51296602
<br>5分钟学算法：
<br>https://www.cxyxiaowu.com/

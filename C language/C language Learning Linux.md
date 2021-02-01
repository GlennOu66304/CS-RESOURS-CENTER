## C learning

### 1.C Language learning:
1. Terminal method: 
```
$ gcc sampleProgram.c -o sampleProgram
$ ./sampleProgram
```
[How to Write and Run a C Program in Linux](https://vitux.com/how-to-write-and-run-a-c-program-in-linux/)   
2. Visual Studio:  
[Method 2: How to run C programs in Linux using a code editor like Visual Studio Code](https://itsfoss.com/run-c-program-linux/)  
3. Mix way:
1.First, you need to use the Visual studio to compile the c project file;  

2.Second, you cd the project file into the terminal;  
```
cd '/home/glenn/Programs/hello'
```
3. Use command to check the result:  
```
/.hello
```

### 2.project guide learning
#### 1. Run the online Project in the local:
1.First, you need to use the Visual studio to compile the c project file;  

2.Second, you cd the project file into the terminal;  
```
cd '/home/glenn/Programs/hello'
```
3. Use command to check the result:  
```
/.hello
```


Main Reference  
[beginners-C-program-examples/Addition.c](https://github.com/gouravthakur39/beginners-C-program-examples/blob/master/Addition.c)  

#### 2.Other Project: 

```
gcc number.c -o number -lm
```

Main references:
[beginners-C-program-examples/combine_calculator.c](https://github.com/gouravthakur39/beginners-C-program-examples/blob/master/combine_calculator.c) 
[Compiling C program with math.h library in Linux.](https://www.includehelp.com/c-programming-questions/compiling-program-with-math-library-linux.aspx)  

References:  
[Top 7 Exciting Project ideas in C For Beginners [2021]](https://www.upgrad.com/blog/project-ideas-in-c-for-beginners/)  
[C Project Based Tutorials?](https://www.reddit.com/r/C_Programming/comments/872rlt/c_project_based_tutorials/)  
[50+ C/C++ Projects with Source Code](https://www.codewithc.com/c-projects-with-source-code/)  
### 3.Can not see the wifi in the Linux system:

1. First you need to use the blutooth only to share internet to the PC.
2. Run the code below to install the external drive:
```
sudo lshw -C network
sudo apt remove broadcom-sta-dkms bcmwl-kernel-source
sudo apt install firmware-b43-installer
```

3. Reboot the computer to see the wifi symbol;

[How to Fix no Wireless Network Issue in Ubuntu Linux](https://itsfoss.com/fix-no-wireless-network-ubuntu/)

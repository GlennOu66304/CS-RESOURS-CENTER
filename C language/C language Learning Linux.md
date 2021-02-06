## C learning 
2021.02.6 
## Linux internet extremely slow issue fixed: 
## Vim install
[Text editor Vim](http://www.linux-fuer-blinde.de/55-0-texteditor-vim.html)   

### internet speed test:  

main refernece:  
[speedtest-cli](https://wiki.ubuntuusers.de/speedtest-cli/)  
[How to resolve “dpkg: error processing /var/cache/apt/archives/python-apport_2.0.1-0ubuntu9_all.deb”?](https://askubuntu.com/questions/148383/how-to-resolve-dpkg-error-processing-var-cache-apt-archives-python-apport-2-0)  
[speedtest-cli – Internet Speed Test In Linux Terminal](http://www.linuxandubuntu.com/home/speedtest-cli-internet-speed-test-in-linux-terminal)  
[http://www.linuxandubuntu.com/home/speedtest-cli-internet-speed-test-in-linux-terminal](https://ostechnix.com/fix-sub-process-usr-bin-dpkg-returned-an-error-code-1-in-ubuntu/)  
### Main reference:  

[Fix very slow Internet on Ubuntu 18 easily.](https://securitronlinux.com/debian-testing/fix-very-slow-internet-on-ubuntu-18-easily/)  

### Reference:  
[linux下网速慢，但是在windows下网速正常，请问什么原因。?](https://www.zhihu.com/question/39738574)  
[Ubuntu 16.04 minimal - extremely slow internet connection](https://unix.stackexchange.com/questions/366220/ubuntu-16-04-minimal-extremely-slow-internet-connection)   
[Linux: Prefer IPv4 over IPv6 in dual-stack environment (and prevent problems when only IPv4 exists)](http://sf-alpha.bjgang.org/wordpress/2012/08/linux-prefer-ipv4-over-ipv6-in-dual-stack-environment-and-prevent-problems-when-only-ipv4-exists/)  


## Video content learning:
1.Do not forget to add the semicolon at the end of the code; 
2.if you want to add the \n, make sure it is inside of the dobuble quote;

Main refernce:  
[Mike Dane C playlist](https://www.youtube.com/watch?v=9kMr0EsltqU)  

## Book Reading learning:  
1.finish the short chapter first time;   
2.write down the key content list in the code block;  
3.write down the code according to your understanding;  
4.If you get stuck during writing the code, then go back to the certain paragraphs to look for the answer or borrow the power of the search engine;
5.Document down the diffcult part to the code reading, then Save the code into the github file;  

## Refinde boot install:
sudo add-apt-repository ppa:rodsmith/refind && sudo apt update && sudo apt install refind && sudo refind-mkdefault

Uninstall
[How to remove rEFInd drivers completely from my ubuntu?](https://askubuntu.com/questions/856773/how-to-remove-refind-drivers-completely-from-my-ubuntu)  
[Uninstalling rEFInd](https://www.rodsbooks.com/refind/installing.html#uinst_linux)  



## 2021.02.05 C learning Reading Note: 

## install the brave browser:  
[Unable to locate package brave-browser on Ubuntu 18.04.1 LTS (lubuntu)](https://askubuntu.com/questions/1085319/unable-to-locate-package-brave-browser-on-ubuntu-18-04-1-lts-lubuntu) 

## Bug fixing:  
[How To Fix Could Not Get Lock /Var/Lib/Dpkg/Lock Error On Ubuntu](https://phoenixnap.com/kb/fix-could-not-get-lock-error-ubuntu)  


Main reference:   
[C Programming Language, 2nd Edition by Brian W. Kernighan, Dennis M. Ritchie.pdf](https://github.com/kgisl/cs8251/blob/master/files/C%20Programming%20Language%2C%202nd%20Edition%20by%20Brian%20W.%20Kernighan%2C%20Dennis%20M.%20Ritchie.pdf)  
[The C Programming Language,Second Edition:](https://learning.oreilly.com/library/view/c-programming-language/9780133086249/cover.xhtml)  

Reference:  
[Learning Material:](https://github.com/GlennOu66304/CS-RESOURS-CENTER/blob/master/C%20language/C%20Learning.md)  
[如何学好C语言](https://coolshell.cn/articles/4102.html)
[C - Programming Language | Tutorial](https://www.youtube.com/watch?v=igv48oGvlPk&list=PLLAZ4kZ9dFpMlt_8ZAs3ltQNeVQ9WITia)  
[Algorithms in C(Robert Sedgewick).pdf](https://github.com/muditbac/Reading/blob/master/Algorithms%20in%20C(Robert%20Sedgewick).pdf)  
[CS50 2019 - Lecture 1 - C](https://www.youtube.com/watch?v=e9Eds2Rc_x8)  

## Compile the windows C Program

Bug fixing:  
1.[E: Unable to locate package mingw32, Linux Mint](https://unix.stackexchange.com/questions/367570/e-unable-to-locate-package-mingw32-linux-mint)  
2. [12 C Programming Cross Compiling for Windows On Linux](https://www.youtube.com/watch?v=r5NqaJ9d17w)  

sudo apt-get install mingw64-binutils mingw64-runtime

Main reference:  
[Ubuntu cross compilation for Windows](http://retroshare.sourceforge.net/wiki/index.php/Ubuntu_cross_compilation_for_Windows)  

## install code blocks
[How to Install Code Blocks on Ubuntu 16.04, Ubuntu 18.04, 19.04](https://www.linuxbabe.com/ubuntu/install-code-blocks-ubuntu-16-04-17-04#:~:text=Code%20Blocks%20is%20a%20free,on%20Linux%2C%20Mac%2C%20Windows.&text=Supports%20multiple%20compilers%20including%20GCC,system%20and%20optional%20Make%20support.)

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

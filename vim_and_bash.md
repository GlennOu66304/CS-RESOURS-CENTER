

## Vim in the mac:

## Vim full copy and full delete
```
全选（高亮显示）：按esc后，然后ggvG或者ggVG
全部复制：按esc后，然后ggyG
全部删除：按esc后，然后dG
```
You don't need to type the : just type the command then affect will apply.
[Vim full copy and full delete](https://article.itxueyuan.com/4k3Daa)  


## vim设置支持鼠标，光标定位，滚轮上下移动
```
:set mouse=a
set mouse=a
:set mouse-=a 
```
[vim设置支持鼠标，光标定位，滚轮上下移动](https://blog.csdn.net/weialemon/article/details/78894221)
[VIM学习笔记 鼠标(Mouse)](https://zhuanlan.zhihu.com/p/38477934) 

VI/VIM
[Shell Scripting Crash Course - Beginner Level](https://www.youtube.com/watch?v=v-F3YLd6oMw&ab_channel=TraversyMedia)   
## open a exising file from the system folder:
```
vim
esc to get out of the eidt mode
:e <filename> 
i to start to edit the file
```
You can simply type the  code below to check the file as well:
in the bash enviroment, you can type the ls to find the file you want to change,
```
ls
```
then you can read the file via the blow:
```
vim Todolist.md
```
[How do you open a file from within Vim?](https://stackoverflow.com/questions/23680778/how-do-you-open-a-file-from-within-vim)  
[File explorer](https://vim.fandom.com/wiki/File_explorer)   
if this file existen in the file, then it will open a file for you.

### open a folder or directory:  
```
$ cd ~/my/working/directory
$ vim .
```
Then it will take to the directory, if you want to goback to the previous directory,then you can esc to the normal mode, then type the code:
```
:Explore
```
You can change your location by the mouse or keyboard
[Opening a directory in vim](https://stackoverflow.com/questions/5930636/opening-a-directory-in-vim)  
[How do I open the directory of the current open file?](https://superuser.com/questions/31677/how-do-i-open-the-directory-of-the-current-open-file)  
### save a file you did a change:

you need to press the esc to get out from the edit mode, then press the 
:x or :wq to save the change.  
[How To Save A File In Vi / Vim & Exit](https://phoenixnap.com/kb/how-to-vim-save-quit-exit)   
[A Day with Vim Tutor (vimtutor)](https://levelup.gitconnected.com/a-day-with-vim-tutor-vimtutor-25aa2e6ce52c)   
[VIM editor](https://www.vim.org/)   

## Resource List:  
[How to install VIM in OS X El Capitan Mac](https://www.youtube.com/watch?v=qxvfOIFVGuU&ab_channel=Founderatwork)  

## paste content from other resource:(from command line or sublime)  
```
ESC
:set paste
i
command + v
```
[I believe that this question deserves a more objective and graphical answer:](https://stackoverflow.com/questions/11489428/how-to-make-vim-paste-from-and-copy-to-systems-clipboard?page=1&tab=votes#tab-top)  

### VIM internal paste:  
[Copy and Paste in Vim](https://tosbourn.com/copy-paste-vim/)
### Shell in your mac:
Check your shell list:
```
cat /etc/shells
```
change it back to ZSH:
```
chsh -s /bin/zsh
```
change it back to bash:
```
chsh -s /bin/bash
```
[How to Change the Default Shell to Bash on macOS Catalina](https://www.howtogeek.com/444596/how-to-change-the-default-shell-to-bash-in-macos-catalina/)   
[What is ZSH, and Why Should You Use It Instead of Bash?](https://www.howtogeek.com/362409/what-is-zsh-and-why-should-you-use-it-instead-of-bash/#:~:text=ZSH%2C%20also%20called%20the%20Z,switching%20over%20is%20a%20breeze.)
[10 Need to Know Mac Terminal Commands](https://scotch.io/bar-talk/10-need-to-know-mac-terminal-commands)   

## Change a file's name  by using the bash:
in the same directory,try the command below
```
vim jack
ls
mv jack jack.md
ls
```
## Resource List:  
[How to install VIM in OS X El Capitan Mac](https://www.youtube.com/watch?v=qxvfOIFVGuU&ab_channel=Founderatwork)  




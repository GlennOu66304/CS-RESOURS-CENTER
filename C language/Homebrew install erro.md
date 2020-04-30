# Homebrew install erro

1.First you need to refer the link below to try installing homebrew:
<br>1.Homebrew building Emacs:
<br>https://github.com/GlennOu66304/CS-RESOURS-CENTER/blob/master/C%20language/Emacs%20and%20C%20language.md

2.If you can not downlaod the resource from above, try Utilizing the Chinese Homebrew version to install it.
```
zhanghuiqiao@zhanghuiqiaodeMacBook-Pro ~ % /bin/zsh -c "$(curl -fsSL https://gitee.com/cunkai/HomebrewCN/raw/master/Homebrew.sh)"

              开始执行Brew自动安装程序
             [cunkai.wang@foxmail.com]
           [2020-04-30 21:11:35][10.15]
       https://zhuanlan.zhihu.com/p/111014448


请选择一个下载镜像，例如中科大，输入1回车。
源有时候不稳定，如果git克隆报错重新运行脚本选择源。cask非必须，有部分人需要。
1、中科大下载源 2、清华大学下载源 3、阿里巴巴下载源(缺少cask源)
请输入序号: 1
你选择了中国科学技术大学下载源
==> 通过命令删除之前的brew、创建一个新的Homebrew文件夹
(设置开机密码：在左上角苹果图标->系统偏好设置->"用户与群组"->更改密码)
(如果提示This incident will be reported. 在"用户与群组"中查看是否管理员)
请输入开机密码，输入过程不显示，输入完后回车
Password:
-> 创建文件夹 /usr/local/Homebrew
此步骤成功
==> 删除之前brew环境，重新创建
-> 创建文件夹 /usr/local/Caskroom
此步骤成功
-> 创建文件夹 /usr/local/Cellar
此步骤成功
-> 创建文件夹 /usr/local/var/homebrew
此步骤成功
-> 创建文件夹 /usr/local/var/homebrew/linked
此步骤成功
git version 2.24.2 (Apple Git-127)

下载速度觉得慢可以ctrl+c重新运行脚本选择下载源
==> 克隆Homebrew基本文件(32M+)


      提示：发现你电脑设置了Git代理，如果Git报错，请运行下面两句话：

              git config --global --unset https.proxy

              git config --global --unset http.proxy
  
Cloning into '/usr/local/Homebrew'...
fatal: unable to access 'https://mirrors.ustc.edu.cn/brew.git/': Failed to connect to 127.0.0.1 port 1088: Connection refused
此步骤失败 尝试再次运行自动脚本选择其他下载源或者切换网络
zhanghuiqiao@zhanghuiqiaodeMacBook-Pro ~ % git config --global --unset https.proxy
zhanghuiqiao@zhanghuiqiaodeMacBook-Pro ~ % git config --global --unset http.proxy
zhanghuiqiao@zhanghuiqiaodeMacBook-Pro ~ % /bin/zsh -c "$(curl -fsSL https://gitee.com/cunkai/HomebrewCN/raw/master/Homebrew.sh)"

              开始执行Brew自动安装程序
             [cunkai.wang@foxmail.com]
           [2020-04-30 21:12:53][10.15]
       https://zhuanlan.zhihu.com/p/111014448


请选择一个下载镜像，例如中科大，输入1回车。
源有时候不稳定，如果git克隆报错重新运行脚本选择源。cask非必须，有部分人需要。
1、中科大下载源 2、清华大学下载源 3、阿里巴巴下载源(缺少cask源)
请输入序号: 1
你选择了中国科学技术大学下载源
==> 通过命令删除之前的brew、创建一个新的Homebrew文件夹
(设置开机密码：在左上角苹果图标->系统偏好设置->"用户与群组"->更改密码)
(如果提示This incident will be reported. 在"用户与群组"中查看是否管理员)
请输入开机密码，输入过程不显示，输入完后回车
-> 创建文件夹 /usr/local/Homebrew
此步骤成功
==> 删除之前brew环境，重新创建
-> 创建文件夹 /usr/local/Caskroom
此步骤成功
-> 创建文件夹 /usr/local/Cellar
此步骤成功
-> 创建文件夹 /usr/local/var/homebrew
此步骤成功
-> 创建文件夹 /usr/local/var/homebrew/linked
此步骤成功
git version 2.24.2 (Apple Git-127)

下载速度觉得慢可以ctrl+c重新运行脚本选择下载源
==> 克隆Homebrew基本文件(32M+)

未发现Git代理（属于正常状态）
Cloning into '/usr/local/Homebrew'...
remote: Enumerating objects: 135773, done.
remote: Total 135773 (delta 0), reused 0 (delta 0) | 2.01 MiB/s 
Receiving objects: 100% (135773/135773), 33.11 MiB | 1.49 MiB/s, done.
Resolving deltas: 100% (100064/100064), done.
此步骤成功
==> 创建brew的替身
此步骤成功
==> 克隆Homebrew Core(224M+) 
此处如果显示Password表示需要再次输入开机密码，输入完后回车
Cloning into '/usr/local/Homebrew/Library/Taps/homebrew/homebrew-core'...
remote: Enumerating objects: 714784, done.
remote: Total 714784 (delta 0), reused 0 (delta 0)
Receiving objects: 100% (714784/714784), 231.37 MiB | 1.83 MiB/s, done.
Resolving deltas: 100% (474814/474814), done.
Updating files: 100% (5218/5218), done.
此步骤成功
==> 克隆Homebrew Cask(248M+) 类似AppStore 
此处如果显示Password表示需要再次输入开机密码，输入完后回车
Cloning into '/usr/local/Homebrew/Library/Taps/homebrew/homebrew-cask'...
remote: Enumerating objects: 435092, done.
remote: Total 435092 (delta 0), reused 0 (delta 0)
Receiving objects: 100% (435092/435092), 263.35 MiB | 1.73 MiB/s, done.
Resolving deltas: 100% (310871/310871), done.
此步骤成功
==> 配置国内下载地址
此步骤成功

==> 安装完成，brew版本

10.15
brew -v

Homebrew 2.2.14-14-g0404ce2-dirty
Homebrew/homebrew-core (git revision ad6dd60; last commit 2020-04-30)
Homebrew/homebrew-cask (git revision c4e14; last commit 2020-04-30)
Brew前期配置成功

==> brew update

Already up-to-date.

        上一句如果提示Already up-to-date表示成功
            Brew自动安装程序运行完成
              国内地址已经配置完成

                初步介绍几个brew命令

        本地软件库列表：brew ls
        查找软件：brew search google（其中google替换为要查找的软件关键字）
        查看brew版本：brew -v  更新brew版本：brew update

        Formulae（方案库 例如python）
        安装方案库：brew install curl（其中curl替换为要安装的软件库名称）
        卸载方案库：brew uninstall curl（其中curl替换为要卸载的软件库名称）

        Casks   （界面软件 例如谷歌浏览器）
        安装软件：brew cask install visual-studio-code（其中visual-studio-code替换为安装的软件名字，例如google-chrome）
        卸载软件：brew cask uninstall visual-studio-code（其中visual-studio-code替换为要卸载的软件名字，例如google-chrome）

        查找命令安装的位置：which brew（brew可以换成任何命令，包括brew安装的）

现在可以输入命令open ~/.zshrc 或者 open ~/.bash_profile 整理一下重复的语句(运行 echo $SHELL 可以查看应该打开那一个文件修改)

        https://zhuanlan.zhihu.com/p/111014448  欢迎来给点个赞
    
zhanghuiqiao@zhanghuiqiaodeMacBook-Pro ~ % 
```

<br>Homebrew国内如何自动安装（国内地址）
<br>https://zhuanlan.zhihu.com/p/111014448

3.Quick find a file in Mac finder:Shift + Command + G
Possible Link you can refre:
<br>git clone出错：Failed to connect to github.com port 443 Operation timed out
<br>https://www.crifan.com/git_clone_failed_to_connect_to_github_com_port_443_operation_timed_out/
<br>Failed to connect to github.com port 443: Timed out [English]
<br>https://blog.victorsilva.com.uy/failed-to-connect-to-github/
<br>安装 homebrew 报错 curl: (7) Failed to connect to raw.githubusercontent.com port 443: Operation #193
<br>https://github.com/itgoyo/500Days-Of-Github/issues/193

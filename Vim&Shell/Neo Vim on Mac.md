# Neo vim on Mac                              

## WordPress manage my blog content

server choose:

1.Hongkong server

2.Hositinger

3.Digital ocean

4.oracle

5.

English content 

Chinese Content will focus on the Wechat,CSDN,Zhihu

Github Blog



content language choose

## Theme choose

1.[设计笔记](https://biji.io/)

2.[我的博客从 Ghost 迁移回 WordPress | 优化记录](https://luolei.org/migrate-from-ghost-to-wordpress/)

3.[Cosy主题](https://www.nicetheme.cn/store/cosy)

4.[**Relive-Pro主题**](https://www.xintheme.com/theme/14046.html)



render the content





**Plugin management**

install the vim plug:

```bash
curl -fLo ~/.vim/autoload/plug.vim --create-dirs https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
//link the project
ln -snf ~/.vim ~/.config/nvim

```

install the plugin 

```bash
nvim ~/.config/nvim/init.vim
//wrtite the below into the vim file
call plug#begin()
Plug 'vim-airline/vim-airline'
call plug#end()

```



[#1，安装插件管理器](https://wiki.eryajf.net/pages/4733.html#_1-%E5%AE%89%E8%A3%85%E6%8F%92%E4%BB%B6%E7%AE%A1%E7%90%86%E5%99%A8)

quit the nvim terminal 

```bash
:q //first time quit
:q! //second time quit
```



**brew install package error**



```bash
brew update-reset
//or 
export HOMEBREW_BOTTLE_DOMAIN=''
```

```bash
brew upgrade --fetch-HEAD tree-sitter luajit neovim
//if the neovim is not installed
sudo brew install --HEAD neovim
which nvim
```



[homebrew curl: (22) The requested URL returned error: 404](https://www.machunjie.com/macos/1032.html)

[修复homebrew安装软件404问题](https://www.tinkol.com/372)



**change the iterm2's font**

[How to change iTerm2 font size? (oh my zsh, powerlevel10k)](https://www.reddit.com/r/zsh/comments/iaw8w9/how_to_change_iterm2_font_size_oh_my_zsh/)



**change the iterm background image**

[iTerm2 Background image and split panes](https://superuser.com/questions/803895/iterm2-background-image-and-split-panes)



base on the road map on the trello, to build a Neo vim editor for the javascript,

React, Python,Java development enviroment 



dev is life:[How to set up Neovim 0.5 (LSP, Treesitter, fuzzy finder, etc)](https://www.youtube.com/watch?v=FW2X1CXrU1w)

[How to set up Neovim 0.5 + Modern plugins (LSP, Treesitter, Fuzzy finder, etc)](https://blog.inkdrop.app/how-to-set-up-neovim-0-5-modern-plugins-lsp-treesitter-etc-542c3d9c9887)



[Vim in the mac:](https://github.com/GlennOu66304/CS-RESOURS-CENTER/blob/62d01d51a64d6ec7bca4bc3f2872c8d3e0679ccd/vim_and_bash.md)



## Uninstall the Space Vim

```javascript
curl -sLf https://spacevim.org/install.sh | bash -s -- --uninstall
```



[Can you safely uninstall spacevim? ](https://github.com/SpaceVim/SpaceVim/issues/1845)



**Foote Note(article on Mediium)**

[Neo vim on Mac](https://medium.com/@1564468177/neo-vim-on-mac-edcfa4812cad)
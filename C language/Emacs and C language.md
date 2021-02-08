# Emacs and C language

### Emacs
[7.1 How do I install Emacs?](https://www.gnu.org/software/emacs/manual/html_node/efaq/Installing-Emacs.html)  
[How to install emacs 24.3 on Ubuntu?](https://askubuntu.com/questions/297170/how-to-install-emacs-24-3-on-ubuntu)  

### Tutorail  
[Harley Hahn's Emacs Field Guide](https://sci-hub.se/https://doi.org/10.1007/978-1-4842-1703-0#)    
[GNU Emacs Pocket Reference](https://learning.oreilly.com/library/view/gnu-emacs-pocket/1565924967/)  
[Learning GNU Emacs, Second Edition](https://learning.oreilly.com/library/view/learning-gnu-emacs/1565921526/)  
[Learning GNU Emacs, 3rd Edition](https://learning.oreilly.com/library/view/learning-gnu-emacs/0596006489/)  


## 1.Homebrew building Emacs:

1.installed the homebrew:

Terminal running Process:
```
ztdeMacBook-Air:~ zt$ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"
==> This script will install:
/usr/local/bin/brew
/usr/local/share/doc/homebrew
/usr/local/share/man/man1/brew.1
/usr/local/share/zsh/site-functions/_brew
/usr/local/etc/bash_completion.d/brew
/usr/local/Homebrew
==> The following existing directories will be made group writable:
/usr/local/etc
/usr/local/share/man/man3
/usr/local/share/man/man5
/usr/local/share/man/man7
==> The following existing directories will have their owner set to zt:
/usr/local/etc
/usr/local/share/man/man3
/usr/local/share/man/man5
/usr/local/share/man/man7
==> The following existing directories will have their group set to admin:
/usr/local/share/man/man3
/usr/local/share/man/man5
/usr/local/share/man/man7
==> The following new directories will be created:
/usr/local/sbin
/usr/local/var
/usr/local/opt
/usr/local/share/zsh
/usr/local/share/zsh/site-functions
/usr/local/var/homebrew
/usr/local/var/homebrew/linked
/usr/local/Cellar
/usr/local/Caskroom
/usr/local/Homebrew
/usr/local/Frameworks

Press RETURN to continue or any other key to abort
Password:
==> /usr/bin/sudo /bin/chmod u+rwx /usr/local/etc /usr/local/share/man/man3 /usr/local/share/man/man5 /usr/local/share/man/man7
==> /usr/bin/sudo /bin/chmod g+rwx /usr/local/etc /usr/local/share/man/man3 /usr/local/share/man/man5 /usr/local/share/man/man7
==> /usr/bin/sudo /usr/sbin/chown zt /usr/local/etc /usr/local/share/man/man3 /usr/local/share/man/man5 /usr/local/share/man/man7
==> /usr/bin/sudo /usr/bin/chgrp admin /usr/local/share/man/man3 /usr/local/share/man/man5 /usr/local/share/man/man7
==> /usr/bin/sudo /bin/mkdir -p /usr/local/sbin /usr/local/var /usr/local/opt /usr/local/share/zsh /usr/local/share/zsh/site-functions /usr/local/var/homebrew /usr/local/var/homebrew/linked /usr/local/Cellar /usr/local/Caskroom /usr/local/Homebrew /usr/local/Frameworks
==> /usr/bin/sudo /bin/chmod g+rwx /usr/local/sbin /usr/local/var /usr/local/opt /usr/local/share/zsh /usr/local/share/zsh/site-functions /usr/local/var/homebrew /usr/local/var/homebrew/linked /usr/local/Cellar /usr/local/Caskroom /usr/local/Homebrew /usr/local/Frameworks
==> /usr/bin/sudo /usr/sbin/chown zt /usr/local/sbin /usr/local/var /usr/local/opt /usr/local/share/zsh /usr/local/share/zsh/site-functions /usr/local/var/homebrew /usr/local/var/homebrew/linked /usr/local/Cellar /usr/local/Caskroom /usr/local/Homebrew /usr/local/Frameworks
==> /usr/bin/sudo /usr/bin/chgrp admin /usr/local/sbin /usr/local/var /usr/local/opt /usr/local/share/zsh /usr/local/share/zsh/site-functions /usr/local/var/homebrew /usr/local/var/homebrew/linked /usr/local/Cellar /usr/local/Caskroom /usr/local/Homebrew /usr/local/Frameworks
==> /usr/bin/sudo /bin/mkdir -p /Users/zt/Library/Caches/Homebrew
==> /usr/bin/sudo /bin/chmod g+rwx /Users/zt/Library/Caches/Homebrew
==> /usr/bin/sudo /usr/sbin/chown zt /Users/zt/Library/Caches/Homebrew
==> Downloading and installing Homebrew...
remote: Enumerating objects: 71, done.
remote: Counting objects: 100% (71/71), done.
remote: Compressing objects: 100% (67/67), done.
Receiving objects: 100% (134606/134606), 32.41 MiB | 11.00 KiB/s, done.
remote: Total 134606 (delta 12), reused 55 (delta 3), pack-reused 134535
Resolving deltas: 100% (98881/98881), done.
From https://github.com/Homebrew/brew
 * [new branch]      master     -> origin/master
 * [new tag]             0.1        -> 0.1
 * [new tag]             0.2        -> 0.2
 * [new tag]             0.3        -> 0.3
 * [new tag]             0.4        -> 0.4
 * [new tag]             0.5        -> 0.5
 * [new tag]             0.6        -> 0.6
 * [new tag]             0.7        -> 0.7
 * [new tag]             0.7.1      -> 0.7.1
 * [new tag]             0.8        -> 0.8
 * [new tag]             0.8.1      -> 0.8.1
 * [new tag]             0.9        -> 0.9
 * [new tag]             0.9.1      -> 0.9.1
 * [new tag]             0.9.2      -> 0.9.2
 * [new tag]             0.9.3      -> 0.9.3
 * [new tag]             0.9.4      -> 0.9.4
 * [new tag]             0.9.5      -> 0.9.5
 * [new tag]             0.9.8      -> 0.9.8
 * [new tag]             0.9.9      -> 0.9.9
 * [new tag]             1.0.0      -> 1.0.0
 * [new tag]             1.0.1      -> 1.0.1
 * [new tag]             1.0.2      -> 1.0.2
 * [new tag]             1.0.3      -> 1.0.3
 * [new tag]             1.0.4      -> 1.0.4
 * [new tag]             1.0.5      -> 1.0.5
 * [new tag]             1.0.6      -> 1.0.6
 * [new tag]             1.0.7      -> 1.0.7
 * [new tag]             1.0.8      -> 1.0.8
 * [new tag]             1.0.9      -> 1.0.9
 * [new tag]             1.1.0      -> 1.1.0
 * [new tag]             1.1.1      -> 1.1.1
 * [new tag]             1.1.10     -> 1.1.10
 * [new tag]             1.1.11     -> 1.1.11
 * [new tag]             1.1.12     -> 1.1.12
 * [new tag]             1.1.13     -> 1.1.13
 * [new tag]             1.1.2      -> 1.1.2
 * [new tag]             1.1.3      -> 1.1.3
 * [new tag]             1.1.4      -> 1.1.4
 * [new tag]             1.1.5      -> 1.1.5
 * [new tag]             1.1.6      -> 1.1.6
 * [new tag]             1.1.7      -> 1.1.7
 * [new tag]             1.1.8      -> 1.1.8
 * [new tag]             1.1.9      -> 1.1.9
 * [new tag]             1.2.0      -> 1.2.0
 * [new tag]             1.2.1      -> 1.2.1
 * [new tag]             1.2.2      -> 1.2.2
 * [new tag]             1.2.3      -> 1.2.3
 * [new tag]             1.2.4      -> 1.2.4
 * [new tag]             1.2.5      -> 1.2.5
 * [new tag]             1.2.6      -> 1.2.6
 * [new tag]             1.3.0      -> 1.3.0
 * [new tag]             1.3.1      -> 1.3.1
 * [new tag]             1.3.2      -> 1.3.2
 * [new tag]             1.3.3      -> 1.3.3
 * [new tag]             1.3.4      -> 1.3.4
 * [new tag]             1.3.5      -> 1.3.5
 * [new tag]             1.3.6      -> 1.3.6
 * [new tag]             1.3.7      -> 1.3.7
 * [new tag]             1.3.8      -> 1.3.8
 * [new tag]             1.3.9      -> 1.3.9
 * [new tag]             1.4.0      -> 1.4.0
 * [new tag]             1.4.1      -> 1.4.1
 * [new tag]             1.4.2      -> 1.4.2
 * [new tag]             1.4.3      -> 1.4.3
 * [new tag]             1.5.0      -> 1.5.0
 * [new tag]             1.5.1      -> 1.5.1
 * [new tag]             1.5.10     -> 1.5.10
 * [new tag]             1.5.11     -> 1.5.11
 * [new tag]             1.5.12     -> 1.5.12
 * [new tag]             1.5.13     -> 1.5.13
 * [new tag]             1.5.14     -> 1.5.14
 * [new tag]             1.5.2      -> 1.5.2
 * [new tag]             1.5.3      -> 1.5.3
 * [new tag]             1.5.4      -> 1.5.4
 * [new tag]             1.5.5      -> 1.5.5
 * [new tag]             1.5.6      -> 1.5.6
 * [new tag]             1.5.7      -> 1.5.7
 * [new tag]             1.5.8      -> 1.5.8
 * [new tag]             1.5.9      -> 1.5.9
 * [new tag]             1.6.0      -> 1.6.0
 * [new tag]             1.6.1      -> 1.6.1
 * [new tag]             1.6.10     -> 1.6.10
 * [new tag]             1.6.11     -> 1.6.11
 * [new tag]             1.6.12     -> 1.6.12
 * [new tag]             1.6.13     -> 1.6.13
 * [new tag]             1.6.14     -> 1.6.14
 * [new tag]             1.6.15     -> 1.6.15
 * [new tag]             1.6.16     -> 1.6.16
 * [new tag]             1.6.17     -> 1.6.17
 * [new tag]             1.6.2      -> 1.6.2
 * [new tag]             1.6.3      -> 1.6.3
 * [new tag]             1.6.4      -> 1.6.4
 * [new tag]             1.6.5      -> 1.6.5
 * [new tag]             1.6.6      -> 1.6.6
 * [new tag]             1.6.7      -> 1.6.7
 * [new tag]             1.6.8      -> 1.6.8
 * [new tag]             1.6.9      -> 1.6.9
 * [new tag]             1.7.0      -> 1.7.0
 * [new tag]             1.7.1      -> 1.7.1
 * [new tag]             1.7.2      -> 1.7.2
 * [new tag]             1.7.3      -> 1.7.3
 * [new tag]             1.7.4      -> 1.7.4
 * [new tag]             1.7.5      -> 1.7.5
 * [new tag]             1.7.6      -> 1.7.6
 * [new tag]             1.7.7      -> 1.7.7
 * [new tag]             1.8.0      -> 1.8.0
 * [new tag]             1.8.1      -> 1.8.1
 * [new tag]             1.8.2      -> 1.8.2
 * [new tag]             1.8.3      -> 1.8.3
 * [new tag]             1.8.4      -> 1.8.4
 * [new tag]             1.8.5      -> 1.8.5
 * [new tag]             1.8.6      -> 1.8.6
 * [new tag]             1.9.0      -> 1.9.0
 * [new tag]             1.9.1      -> 1.9.1
 * [new tag]             1.9.2      -> 1.9.2
 * [new tag]             1.9.3      -> 1.9.3
 * [new tag]             2.0.0      -> 2.0.0
 * [new tag]             2.0.1      -> 2.0.1
 * [new tag]             2.0.2      -> 2.0.2
 * [new tag]             2.0.3      -> 2.0.3
 * [new tag]             2.0.4      -> 2.0.4
 * [new tag]             2.0.5      -> 2.0.5
 * [new tag]             2.0.6      -> 2.0.6
 * [new tag]             2.1.0      -> 2.1.0
 * [new tag]             2.1.1      -> 2.1.1
 * [new tag]             2.1.10     -> 2.1.10
 * [new tag]             2.1.11     -> 2.1.11
 * [new tag]             2.1.12     -> 2.1.12
 * [new tag]             2.1.13     -> 2.1.13
 * [new tag]             2.1.14     -> 2.1.14
 * [new tag]             2.1.15     -> 2.1.15
 * [new tag]             2.1.16     -> 2.1.16
 * [new tag]             2.1.2      -> 2.1.2
 * [new tag]             2.1.3      -> 2.1.3
 * [new tag]             2.1.4      -> 2.1.4
 * [new tag]             2.1.5      -> 2.1.5
 * [new tag]             2.1.6      -> 2.1.6
 * [new tag]             2.1.7      -> 2.1.7
 * [new tag]             2.1.8      -> 2.1.8
 * [new tag]             2.1.9      -> 2.1.9
 * [new tag]             2.2.0      -> 2.2.0
 * [new tag]             2.2.1      -> 2.2.1
 * [new tag]             2.2.10     -> 2.2.10
 * [new tag]             2.2.11     -> 2.2.11
 * [new tag]             2.2.12     -> 2.2.12
 * [new tag]             2.2.13     -> 2.2.13
 * [new tag]             2.2.2      -> 2.2.2
 * [new tag]             2.2.3      -> 2.2.3
 * [new tag]             2.2.4      -> 2.2.4
 * [new tag]             2.2.5      -> 2.2.5
 * [new tag]             2.2.6      -> 2.2.6
 * [new tag]             2.2.7      -> 2.2.7
 * [new tag]             2.2.8      -> 2.2.8
 * [new tag]             2.2.9      -> 2.2.9
Updating files: 100% (1875/1875), done.
HEAD is now at b11d2b56f Merge pull request #7361 from Homebrew/dependabot/bundler/Library/Homebrew/parser-2.7.1.1
-e:1:in `<main>': undefined method `canonical_segments' for #<Gem::Version "2.3.3"> (NoMethodError)
==> Downloading https://homebrew.bintray.com/bottles-portable-ruby/portable-ruby-2.6.3.mavericks.bottle.tar.gz
##########################                                                36.2%
==> Pouring portable-ruby-2.6.3.mavericks.bottle.tar.gz
==> Homebrew is run entirely by unpaid volunteers. Please consider donating:
  https://github.com/Homebrew/brew#donations
==> Tapping homebrew/core
Cloning into '/usr/local/Homebrew/Library/Taps/homebrew/homebrew-core'...
```
If you are using VPN and the commands stucked here, you need to close your VPN, then your commands will continue running.
```
remote: Enumerating objects: 4, done.
remote: Counting objects: 100% (4/4), done.
remote: Compressing objects: 100% (4/4), done.
error: RPC failed; curl 56 LibreSSL SSL_read: SSL_ERROR_SYSCALL, errno 54
fatal: the remote end hung up unexpectedly
fatal: early EOF
fatal: index-pack failed
Error: Failure while executing; `git clone https://github.com/Homebrew/homebrew-core /usr/local/Homebrew/Library/Taps/homebrew/homebrew-core` exited with 128.
Error: Failure while executing; `/usr/local/bin/brew tap homebrew/core` exited with 1.
Failed during: /usr/local/bin/brew update --force
==> Installation successful!

==> Homebrew has enabled anonymous aggregate formulae and cask analytics.
Read the analytics documentation (and how to opt-out) here:
  https://docs.brew.sh/Analytics
No analytics data has been sent yet (or will be during this `install` run).

==> Homebrew is run entirely by unpaid volunteers. Please consider donating:
  https://github.com/Homebrew/brew#donations

==> Next steps:
- Run `brew help` to get started
- Further documentation: 
    https://docs.brew.sh
```

Fix installing issue:

```
ztdeMacBook-Air:~ zt$ git clone https://github.com/Homebrew/homebrew-core /usr/local/Homebrew/Library/Taps/homebrew/homebrew-core --depth=1
Cloning into '/usr/local/Homebrew/Library/Taps/homebrew/homebrew-core'...
remote: Enumerating objects: 5177, done.
remote: Counting objects: 100% (5177/5177), done.
remote: Compressing objects: 100% (4969/4969), done.
remote: Total 5177 (delta 48), reused 321 (delta 9), pack-reused 0
Receiving objects: 100% (5177/5177), 4.19 MiB | 14.00 KiB/s, done.
Resolving deltas: 100% (48/48), done.
Updating files: 100% (5196/5196), done.
```

2. To check if you have home brew:
```
ztdeMacBook-Air:~ zt$ brew help
Example usage:
  brew search [TEXT|/REGEX/]
  brew info [FORMULA...]
  brew install FORMULA...
  brew update
  brew upgrade [FORMULA...]
  brew uninstall FORMULA...
  brew list [FORMULA...]

Troubleshooting:
  brew config
  brew doctor
  brew install --verbose --debug FORMULA

Contributing:
  brew create [URL [--no-fetch]]
  brew edit [FORMULA...]

Further help:
  brew commands
  brew help [COMMAND]
  man brew
  https://docs.brew.sh
ztdeMacBook-Air:~ zt$ 
```

Homebrew install Emacs
```
ztdeMacBook-Air:~ zt$ brew cask install emacs
Updating Homebrew...
==> Tapping homebrew/cask
Cloning into '/usr/local/Homebrew/Library/Taps/homebrew/homebrew-cask'...
remote: Enumerating objects: 75, done.
remote: Counting objects: 100% (75/75), done.
remote: Compressing objects: 100% (68/68), done.
error: RPC failed; curl 56 LibreSSL SSL_read: SSL_ERROR_SYSCALL, errno 54
fatal: the remote end hung up unexpectedly
fatal: early EOF
fatal: index-pack failed
Error: Failure while executing; `git clone https://github.com/Homebrew/homebrew-cask /usr/local/Homebrew/Library/Taps/homebrew/homebrew-cask` exited with 128.
Follow the instructions here:
  https://github.com/Homebrew/homebrew-cask#reporting-bugs
/usr/local/Homebrew/Library/Homebrew/utils.rb:265:in `safe_system'
/usr/local/Homebrew/Library/Homebrew/tap.rb:273:in `install'
/usr/local/Homebrew/Library/Homebrew/cask/cmd.rb:142:in `run'
/usr/local/Homebrew/Library/Homebrew/cask/cmd.rb:92:in `run'
/usr/local/Homebrew/Library/Homebrew/cmd/cask.rb:9:in `cask'
/usr/local/Homebrew/Library/Homebrew/brew.rb:110:in `<main>'
```
Debug homebrew install error with "brew doctor"',find the posssible file causing brew file then delete it.
```
ztdeMacBook-Air:~ zt$ brew doctor
Please note that these warnings are just used to help the Homebrew maintainers
with debugging if you file an issue. If everything you use Homebrew for is
working fine: please don't worry or file an issue; just ignore this. Thanks!

Warning: "config" scripts exist outside your system or Homebrew directories.
`./configure` scripts often look for *-config scripts to determine if
software packages are installed, and which additional flags to use when
compiling and linking.

Having additional scripts in your path can confuse software installed via
Homebrew if the config script overrides a system or Homebrew-provided
script of the same name. We found the following "config" scripts:
  /Library/Frameworks/Python.framework/Versions/2.7/bin/python2-config
  /Library/Frameworks/Python.framework/Versions/2.7/bin/python2.7-config
  /Library/Frameworks/Python.framework/Versions/2.7/bin/python-config
  /opt/ImageMagick/bin/MagickCore-config
  /opt/ImageMagick/bin/MagickWand-config
  /opt/ImageMagick/bin/Magick++-config
  /opt/ImageMagick/bin/Wand-config
  /opt/ImageMagick/bin/Magick-config

Warning: Unbrewed header files were found in /usr/local/include.
If you didn't put them there on purpose they could cause problems when
building Homebrew formulae, and may need to be deleted.

Unexpected header files:
  /usr/local/include/node/android-ifaddrs.h
  /usr/local/include/node/libplatform/libplatform-export.h
  /usr/local/include/node/libplatform/libplatform.h
  /usr/local/include/node/libplatform/v8-tracing.h
  /usr/local/include/node/node.h
  /usr/local/include/node/node_api.h
  /usr/local/include/node/node_api_types.h
  /usr/local/include/node/node_buffer.h
  /usr/local/include/node/node_object_wrap.h
  /usr/local/include/node/node_version.h
  /usr/local/include/node/openssl/aes.h
  /usr/local/include/node/openssl/archs/BSD-x86/opensslconf.h
  /usr/local/include/node/openssl/archs/BSD-x86_64/opensslconf.h
  /usr/local/include/node/openssl/archs/VC-WIN32/opensslconf.h
  /usr/local/include/node/openssl/archs/VC-WIN64A/opensslconf.h
  /usr/local/include/node/openssl/archs/aix-gcc/opensslconf.h
  /usr/local/include/node/openssl/archs/aix64-gcc/opensslconf.h
  /usr/local/include/node/openssl/archs/darwin-i386-cc/opensslconf.h
  /usr/local/include/node/openssl/archs/darwin64-x86_64-cc/opensslconf.h
  /usr/local/include/node/openssl/archs/linux-aarch64/opensslconf.h
  /usr/local/include/node/openssl/archs/linux-armv4/opensslconf.h
  /usr/local/include/node/openssl/archs/linux-elf/opensslconf.h
  /usr/local/include/node/openssl/archs/linux-ppc/opensslconf.h
  /usr/local/include/node/openssl/archs/linux-ppc64/opensslconf.h
  /usr/local/include/node/openssl/archs/linux-x32/opensslconf.h
  /usr/local/include/node/openssl/archs/linux-x86_64/opensslconf.h
  /usr/local/include/node/openssl/archs/linux32-s390x/opensslconf.h
  /usr/local/include/node/openssl/archs/linux64-s390x/opensslconf.h
  /usr/local/include/node/openssl/archs/solaris-x86-gcc/opensslconf.h
  /usr/local/include/node/openssl/archs/solaris64-x86_64-gcc/opensslconf.h
  /usr/local/include/node/openssl/asn1.h
  /usr/local/include/node/openssl/asn1_mac.h
  /usr/local/include/node/openssl/asn1t.h
  /usr/local/include/node/openssl/bio.h
  /usr/local/include/node/openssl/blowfish.h
  /usr/local/include/node/openssl/bn.h
  /usr/local/include/node/openssl/buffer.h
  /usr/local/include/node/openssl/camellia.h
  /usr/local/include/node/openssl/cast.h
  /usr/local/include/node/openssl/cmac.h
  /usr/local/include/node/openssl/cms.h
  /usr/local/include/node/openssl/comp.h
  /usr/local/include/node/openssl/conf.h
  /usr/local/include/node/openssl/conf_api.h
  /usr/local/include/node/openssl/crypto.h
  /usr/local/include/node/openssl/des.h
  /usr/local/include/node/openssl/des_old.h
  /usr/local/include/node/openssl/dh.h
  /usr/local/include/node/openssl/dsa.h
  /usr/local/include/node/openssl/dso.h
  /usr/local/include/node/openssl/dtls1.h
  /usr/local/include/node/openssl/e_os2.h
  /usr/local/include/node/openssl/ebcdic.h
  /usr/local/include/node/openssl/ec.h
  /usr/local/include/node/openssl/ecdh.h
  /usr/local/include/node/openssl/ecdsa.h
  /usr/local/include/node/openssl/engine.h
  /usr/local/include/node/openssl/err.h
  /usr/local/include/node/openssl/evp.h
  /usr/local/include/node/openssl/hmac.h
  /usr/local/include/node/openssl/idea.h
  /usr/local/include/node/openssl/krb5_asn.h
  /usr/local/include/node/openssl/kssl.h
  /usr/local/include/node/openssl/lhash.h
  /usr/local/include/node/openssl/md4.h
  /usr/local/include/node/openssl/md5.h
  /usr/local/include/node/openssl/mdc2.h
  /usr/local/include/node/openssl/modes.h
  /usr/local/include/node/openssl/obj_mac.h
  /usr/local/include/node/openssl/objects.h
  /usr/local/include/node/openssl/ocsp.h
  /usr/local/include/node/openssl/opensslconf.h
  /usr/local/include/node/openssl/opensslv.h
  /usr/local/include/node/openssl/ossl_typ.h
  /usr/local/include/node/openssl/pem.h
  /usr/local/include/node/openssl/pem2.h
  /usr/local/include/node/openssl/pkcs12.h
  /usr/local/include/node/openssl/pkcs7.h
  /usr/local/include/node/openssl/pqueue.h
  /usr/local/include/node/openssl/rand.h
  /usr/local/include/node/openssl/rc2.h
  /usr/local/include/node/openssl/rc4.h
  /usr/local/include/node/openssl/ripemd.h
  /usr/local/include/node/openssl/rsa.h
  /usr/local/include/node/openssl/safestack.h
  /usr/local/include/node/openssl/seed.h
  /usr/local/include/node/openssl/sha.h
  /usr/local/include/node/openssl/srp.h
  /usr/local/include/node/openssl/srtp.h
  /usr/local/include/node/openssl/ssl.h
  /usr/local/include/node/openssl/ssl2.h
  /usr/local/include/node/openssl/ssl23.h
  /usr/local/include/node/openssl/ssl3.h
  /usr/local/include/node/openssl/stack.h
  /usr/local/include/node/openssl/symhacks.h
  /usr/local/include/node/openssl/tls1.h
  /usr/local/include/node/openssl/ts.h
  /usr/local/include/node/openssl/txt_db.h
  /usr/local/include/node/openssl/ui.h
  /usr/local/include/node/openssl/ui_compat.h
  /usr/local/include/node/openssl/whrlpool.h
  /usr/local/include/node/openssl/x509.h
  /usr/local/include/node/openssl/x509_vfy.h
  /usr/local/include/node/openssl/x509v3.h
  /usr/local/include/node/pthread-barrier.h
  /usr/local/include/node/stdint-msvc2008.h
  /usr/local/include/node/tree.h
  /usr/local/include/node/uv-aix.h
  /usr/local/include/node/uv-bsd.h
  /usr/local/include/node/uv-darwin.h
  /usr/local/include/node/uv-errno.h
  /usr/local/include/node/uv-linux.h
  /usr/local/include/node/uv-os390.h
  /usr/local/include/node/uv-posix.h
  /usr/local/include/node/uv-sunos.h
  /usr/local/include/node/uv-threadpool.h
  /usr/local/include/node/uv-unix.h
  /usr/local/include/node/uv-version.h
  /usr/local/include/node/uv-win.h
  /usr/local/include/node/uv.h
  /usr/local/include/node/v8-debug.h
  /usr/local/include/node/v8-inspector-protocol.h
  /usr/local/include/node/v8-inspector.h
  /usr/local/include/node/v8-platform.h
  /usr/local/include/node/v8-profiler.h
  /usr/local/include/node/v8-testing.h
  /usr/local/include/node/v8-util.h
  /usr/local/include/node/v8-value-serializer-version.h
  /usr/local/include/node/v8-version-string.h
  /usr/local/include/node/v8-version.h
  /usr/local/include/node/v8.h
  /usr/local/include/node/v8config.h
  /usr/local/include/node/zconf.h
  /usr/local/include/node/zlib.h
ztdeMacBook-Air:~ zt$ brew doctor
Please note that these warnings are just used to help the Homebrew maintainers
with debugging if you file an issue. If everything you use Homebrew for is
working fine: please don't worry or file an issue; just ignore this. Thanks!

Warning: Broken symlinks were found. Remove them with `brew cleanup`:
  /usr/local/bin/python-config
  /usr/local/bin/python2-config
  /usr/local/bin/python2.7-config
ztdeMacBook-Air:~ zt$ brew cleanup
Pruned 3 symbolic links from /usr/local
ztdeMacBook-Air:~ zt$ brew doctor
Your system is ready to brew.
ztdeMacBook-Air:~ zt$ brew install youtube-dl
```
4.Reference Link:

Install Homebrew
<br>https://brew.sh/

I have problem with installation. Please help me!
<br>https://discourse.brew.sh/t/i-have-problem-with-installation-please-help-me/2906


Trouble install Homebrew
## II. directly using the universal binaries version.
Emacs For Mac OS X
<br>https://emacsformacosx.com/

### III. Macports installed the Emacs.
Emacs Mac Port
<br>https://github.com/railwaycat/homebrew-emacsmacport
Reference Link:

Emacs GNU EmacsDownload & installation
<br>https://www.gnu.org/software/emacs/download.html

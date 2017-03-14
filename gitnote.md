## git

 1.什么是git?
  * git 是一个分布版本控制软件，最初目的是为了更好的管理Linux内核开发而设计，是目前世界上最先进的分布式控制系统。
## git 安装
 ubuntu linux 安装方法：
 ``` sh
  $ sudo apt-get install git
 ```
 Mac ox 安装方法：
 ```sh
  $ brew install git
 ```
 
 ## 创建git本地仓库
 ```sh
  1. $ mkdir git // 创建git目录
  2. $ cd git // 进入git目录
  3. $ mkdir c// 在git目录中创建目录c
  4. $ cd c // 进入目录c
  5. $ git init // 使用git init 命令，将当前目录创建成git仓库
  6. $ ls -al // 查看隐藏文件
     .git
 ```
 
 ## 增加文件
 1.复制已有的文件到当前目录里：
 ```sh
  $ cp ../../c/*.c .   // ../表示返回上一目录，*.c表示该目录中全部.c的文件，‘ .’表示复制到当前目录里。
 ```
 2.创建一个新的文件。
 ```sh
  $ touch hello.c
  $ vim hello.c   // 输出hello world字符串的c语言的程序（代码）
 ```
 
 ## 查看目录状态
 查看当前目录下的文件在git仓库中的状态。
 ```sh
  $ git status
 ```
 
 ## 跟踪文件
 将当前目录下的所有文件进行跟踪。
 ```sh
  $ git add .
 ```
 
 ## 配置个人用户信息
 为提交增加个人用户信息。
 ```sh
  $ git config --global user.nanme "liuhongliang" //添加自己的名字。
  $ git config --global user.email "liuhongliangyu@outlook.com" //添加自己的邮箱。
  $ git config --global core.editor vim // 添加自己常用的编译器。
 ```
 ## 提交
 向本地git仓库提交，跟踪文件。
 ```sh
  $ git commit // 提交文件，并且填写相关信息。
  
   First commit
   
   Init commit
 ```
 
 ## 查看提交信息
 查看提交相关信息。
 ```sh
  $ gir log
  
    第一行：commit ID
    第二行：提交作者名字进和email
    第三行：提交时间
    第四行：提交信息标题
    第五行：提交信息具体内容
 ```
 
 ## git diff
 1.查看修改源代码。
 ```sh
  $ git diff
 ```
 2.两个提交版本之间作比较
 ```sh
   $ git diff commitID-1 commitID-2
 ```
 3.理解Patch标记格式的含义。
  * patch多指补丁的意思，在这里更多的指程序有一些bug，需要我们进行fixed，那fixed源代码文件就是patch。patch实际上是保存两个文件的差异。

## 删除文件
1.删除文件后，恢复文件。
```sh
  $ rm -rf hello.c // 强制删除hello.c 文件。
  $ git status // 查看git库中文件的状态
  $ git checkout hello.c // 恢复先前删掉的文件
```
2.从版本库里删除文件。（真正删除文件）
```sh
  $ git rm hello.c (or) rm hello.c //删除文件
  $ git status // 查看状态
  $ git add . // 跟踪文件
  $ git commit // 提交（提交保存后， 在github将查不到删除文件，并且不能恢复）
```

## 版本之间的切换
 
 根据commitID，可以进行版本切换。
 ```sh
   $ git reset --hard commitID
 ```
 
 ## 忽略文件
 
 忽略不需要跟踪到git仓库里的文件。
 ```sh
   $ touch .gitignore // 创建隐藏文件.gitignore
   $ vim .gitignore // 进入.gitignore 在文件内编辑a.out
   ----
   a.out
   ----
   $ git add . // 保存退出，并跟踪文件。
   $ git commit // 提交文件。（提交后，如果以后i提交文件或目录中含有a.out文件，则自动忽略，不提交）
 ```
 
## girhub

1. 注册github帐号
    1.注册邮箱，注意不要使用QQ邮箱。
2.创建gitc仓库
3.从github将创建的git仓库克隆到本地。
```sh
  $ git clone https://github.com/username/gitc.git // username = github用户名（liuhongliangyu）
```
4.将本地仓库与github仓库进行同步，将本地提交推送到服务器上。
```sh
  $  git push origin master /将本地提交推送到服务器上
    * input username:  // 输入名字 （liuhongliangyu）
    * input password:   // 输入密码（github 的登陆密码）
```
5.更新本地仓库，与github仓库进行同步。将服务器提交拉取到本地。
```sh
  $ git pull
```
## 常用命令
![命令](https://ss0.bdstatic.com/70cFvHSh_Q1YnxGkpoWK1HF6hhy/it/u=3364715791,2380613895&fm=23&gp=0.jpg)


## MarkDown语法
1.什么是MarkDown？
  * MarkDown 是一种轻量级标记语言，允许人们”使用易读易写的纯文本格式编辑文档，然后转换成有效的XHTML或者HTML文档“。
  

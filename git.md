## 创建安装git
```sh
$ sudo apt-get install git
```
## 创建本地git仓库
```sh
mkdir git // 创建git目录
cd git // 进入git目录
mkdir gitc // 创建gitc目录
git init // 初始化空的git仓库.git //这个目录中存放着git管理工具用到的所有信息和基本配置信息，所以不要胡乱修改，否则git库就被破坏了。
touch .gitignore// 创建隐藏文件.gitignore
vim .gitignore // 编辑.gitignore，在文件内添加a.out，即在上传是忽略不必要上传的文件。
```
## 上传github仓库

1. 将新建文件上传到本地仓库中
    1. 将新建文件拷贝到git目录中相应位置
        * cp -r ~/ .。
        * 注：cp -r:拷贝；~:根目录；/后是根目录中子目录；.：表示当前所在目录，并注意‘.’前有‘空格’。
    1. 上传到本地仓库。
        * git add . // 返回到gitc目录下，上传。
        * git commit // 提交，填写所上传文件的信息。
     
1. 上传到github仓库。

    在gitc目录中
    ```sh
    $ git push origin marster
    ```
      * username:  // 输入github用户名    
      * password:  // 输入github登陆密码

## 拉取

将github中更新的文件拉取到本地仓库中。
```sh
$ git pull
```
 

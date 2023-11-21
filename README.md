# gcc-hentai

让你的 GCC 变得更可爱！

本项目通过修改 GCC 的翻译文件，让 GCC 编译器的输出信息变得更加可爱。

目前已经完成修改的信息并不多，欢迎大家前来投稿~进一步调教~！

## 前置依赖
- GNU GCC（建议版本 13.2.0）
- GNU Gettext

## 编译

```shell
msgfmt gcc.po -o gcc.mo
```

## 使用方法

### Linux

1. 基于你的发行版，安装以下软件包：`g++` （或者是 `gcc`）和 `gettext`

2. [编译](#编译)得到`gcc.mo`

3. 找到你的 `gcc` 语言文件存放位置（默认应该是 `/usr/share/locale/zh_CN/LC_MESSAGES/gcc.mo`），建议将它备份（`mv gcc.mo gcc.mo_bak`）

4. 将编译得到的`gcc.mo`覆盖原来的语言文件（`cp gcc.mo <GCC语言文件位置>`）

此时你的 GCC 就应该已经变得可爱了～

如果你的系统并不使用中文，你可能需要在使用 GCC 时临时将 `LANGUAGE` 设置成 `zh_CN.UTF-8`。

### Windows

目前我只成功修改了 [Cygwin](https://www.cygwin.com/) 项目里的 GCC。

1. 安装 Cygwin。下载并运行 [setup-x86_64.exe](https://www.cygwin.com/setup-x86_64.exe)，记得除了默认安装以外，还需要安装 `gcc-core`，`gcc-g++` 和 `gettext`。假设这一步你的 Cygwin 安装目录（注意不是软件包下载目录）为 `<DIR>`（默认应该是 `C:/cygwin`）

2. 将目录 `<DIR>/bin` 目录添加到 `Path` 环境变量，并额外增加一条环境变量 `LANG`，设置为 `zh_CN.UTF-8`

3. [编译](#编译)得到`gcc.mo`，用得到的 `gcc.mo` 替换 `<DIR>/usr/share/locale/zh_CN/LC_MESSAGES/gcc.mo`（建议事先对其进行备份）。

如果使用 `Scoop` 安装, 可忽略上面操作一步到位:
```
scoop install https://raw.githubusercontent.com/Weidows-projects/scoop-3rd/main/bucket/cygwin-libs-hentai.json
```

此时你的 GCC 就应该已经变得可爱了～

### 不替换原有语言包

在 `/locale` 目录下，新建一个目录（例如：`zh_CN_hentai`），仿照原有路径，将 `gcc.mo` 放入 `LC_MESSAGES/` 目录中

这时可以将环境变量 `LANGUAGE` 设置为对应目录名称来让 GCC 变可爱

*样例对应 `gcc.mo` 的路径为： `/usr/share/locale/zh_CN_hentai/LC_MESSAGES/gcc.mo`*  
*`LANGUAGE=zh_CN_hentai`*

在 Linux 和 Windows 上均已测试可用
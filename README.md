# gcc-hentai
让你的 GCC 变得更可爱！

本项目通过修改 GCC 的翻译文件，让 GCC 编译器的输出信息变得更加可爱。

目前已经完成修改的信息并不多，欢迎大家前来投稿~进一步调教~！

# 前置依赖
- GNU GCC（建议版本 13.2.0）
- GNU Gettext

# 使用方法
## Linux

首先基于你的发行版，安装以下软件包：`g++` （或者是 `gcc`）和 `gettext`。

然后找到你的 `gcc` 语言文件存放位置（默认应该是 `/usr/share/locale/zh_CN/LC_MESSAGES/gcc.mo`），建议将它备份。

再用以下命令编译项目里的 `po` 文件并用它覆盖原来的语言文件：`msgfmt gcc.mo -o gcc.po && sudo cp gcc.po <GCC语言文件位置>`。

此时你的 GCC 就应该已经变得可爱了～

如果你的系统并不使用中文，你可能需要在使用 GCC 时临时将 `LANGUAGE` 设置成 `zh_CN.UTF-8`。

## Windows

目前我只成功修改了 [Cygwin](https://www.cygwin.com/) 项目里的 GCC。

首先安装 Cygwin，运行 [setup-x86_64.exe](https://www.cygwin.com/setup-x86_64.exe)，记得除了默认安装以外，还需要安装 `gcc-core`，`gcc-g++` 和 `gettext`。假设这一步你的 Cygwin 安装目录（注意不是软件包下载目录）为 `<DIR>`（默认应该是 `C:/cygwin`）

然后将目录 `<DIR>/bin` 目录添加到 `Path` 环境变量，并额外增加一条环境变量 `LANG`，设置为 `zh_CN.UTF-8`。

再在克隆本项目的目录打开一个终端，运行 `msgfmt gcc.po -o gcc.mo`，用得到的 `gcc.mo` 替换 `<DIR>/usr/share/locale/zh_CN/LC_MESSAGES/gcc.mo`（建议事先对其进行备份）。

此时你的 GCC 就应该已经变得可爱了～

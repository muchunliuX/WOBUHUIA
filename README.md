# WOBUHUIA

学习 C 语言的练习仓库。

## 环境

| 工具 | 版本 | 位置 |
|---|---|---|
| gcc | 16.2.0 | `D:\w64devkit\bin\gcc.exe` |
| gdb | 17.2 | `D:\w64devkit\bin\gdb.exe` |
| VS Code | 1.133.0 | `D:\软件\Microsoft VS Code` |

> 环境变量 `Path` 中已包含 `D:\w64devkit\bin`，可在终端直接使用 `gcc` 命令。

## 目录结构

```
.
├── .vscode/          VS Code 配置
│   ├── tasks.json    编译任务
│   └── launch.json   调试配置
├── src/              源代码
│   └── hello.c       示例程序
├── build/            编译输出（已 gitignore）
├── .gitignore
└── README.md
```

## 快速开始

### 1. 编译并运行

打开 `src/hello.c`，然后：

- **`Ctrl+Shift+B`** — 编译当前文件
- 菜单 **终端 → 运行任务 → `C: 编译并运行当前文件`** — 编译并执行

也可以手动在终端执行：

```bash
cd src
gcc hello.c -o hello.exe -Wall -Wextra
./hello.exe
```

### 2. 调试

在代码行号左侧点一下打**断点**（出现红点），按 **`F5`**，选择 `C: 调试当前文件 (gdb)`。

调试时可用的按键：

| 按键 | 作用 |
|---|---|
| `F5` | 继续运行 |
| `F10` | 单步跳过 |
| `F11` | 单步进入 |
| `Shift+F5` | 停止调试 |

### 3. 多文件编译

把 `.c` 文件都放进 `src/`，运行任务 `C: 编译 src 全部文件`，输出为 `build/program.exe`。

## 编译参数说明

| 参数 | 含义 |
|---|---|
| `-g` | 生成调试信息（调试必需） |
| `-Wall` | 开启常用警告 |
| `-Wextra` | 开启额外警告 |
| `-o` | 指定输出文件名 |

## 提交代码到 GitHub

```bash
git add .
git commit -m "描述你做了什么"
git push
```

> 注意：推送需要开启 VPN（本仓库已配置代理 `127.0.0.1:7897`）。

## 备注

`.gitignore` 已配置 C/C++、Python、Node.js、Java 的常见忽略规则，编译产物（`.exe`、`.o` 等）不会上传到 GitHub。

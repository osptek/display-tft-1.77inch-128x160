<p align="left"><img alt="OSPTEK" src="../../images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 1.77″ TFT 显示屏 128×160（YDP177F001-V1）</h1>

<p align="center"><b>TFT 模组 · SPI · ST7735S</b></p>

<p align="center"><a href="./README_EN.md">English</a> | 简体中文 · <a href="../../README.md">规格族索引</a></p>

<p align="center">
  <img alt="Interface: SPI" src="https://img.shields.io/badge/Interface-SPI-27AE60?style=flat-square" />
  <img alt="Driver: ST7735S" src="https://img.shields.io/badge/Driver-ST7735S-E7352C?style=flat-square" />
</p>

<p align="center"><img alt="OSPTEK 1.77 寸 128×160 TFT 模组宣传图" src="./images/recommend-optimized.png" width="640" /></p>

## 目录

- [规格参数](#规格参数)
- [相关资料](#相关资料)
- [仓库结构](#仓库结构)
- [购买链接](#购买链接)
- [技术支持](#技术支持)

---

## 规格参数

| 项目 | 规格 |
| ---- | ---- |
| 尺寸 | 1.77 英寸 |
| 类型 | TFT |
| 分辨率 | 128×160 |
| 外形尺寸 | 34.7 x 46.7 x 2.3 mm |
| 有效显示区域 | 28.03 x 35.04 mm |
| 接口 | SPI |
| 驱动 IC | ST7735S |
| 触摸驱动 | — |

> 完整外形尺寸、FPC 定义、供电与时序以产品规格书 / 驱动手册为准。

## 相关资料

| 分类 | 文件 |
| ---- | ---- |
| 规格文档 | [`ST_7735_S_V1_1_20111121_216e4c50b7.pdf`](./datasheets/ST_7735_S_V1_1_20111121_216e4c50b7.pdf) |
| 规格文档 | [`YDP177F001-V1.pdf`](./datasheets/YDP177F001-V1.pdf) |
| 初始化代码 | [`1.77寸初始化CTC+ST7735S.c`](./code/1.77%E5%AF%B8%E5%88%9D%E5%A7%8B%E5%8C%96CTC%2BST7735S.c) |

## 仓库结构

```text
display-tft-1.77inch-128x160/ # 仓库根（导航见 ../../README.md，示例工程见根目录 examples/）
└── versions/
    └── YDP177F001-V1/        # 本料号完整资料
        ├── README.md
        ├── README_EN.md
        ├── osptek.yml
        ├── images/
        ├── datasheets/       # 产品规格书 + 驱动/触摸 IC 数据手册
        └── code/             # 初始化参考代码
```

## 购买链接

见[仓库首页](../../README.md#购买链接)。

## 技术支持

见[仓库首页](../../README.md#技术支持)。

---

<p align="center"><sub>© 2026 OSPTEK 鱼鹰光电 · 本仓库资料采用 CC BY 4.0 许可</sub></p>

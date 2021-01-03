# Shopee_Charge_Calculate

## 程式說明
此程式目的在於計算蝦皮拍賣交易的各種手續費，最後得到實際要刊登的價格

## 範例
假設條件如下：

* 實收1200NT$、運費為60NT$、非服飾商品（交易手續費2%）、一般付款（金流服務費1%）

以上條件計算出手續費為38NT$

最後以1238NT$價格刊登，就可以實收1200元

## 手續費說明
依照蝦皮官方所給予的資訊，手續費分為交易手續費和金流服務費

- 交易手續費
  - 服飾商品
    - 商品價格 * 3%
  - 除服飾外商品
    - 商品價格 * 2%
- 金流服務費
  - 一般付款（貨到付款、匯款．．．）
    - (商品價格 + 運費) * 1%
  - 第三方付款（行動支付、信用卡．．．）
    - (商品價格 + 運費) * 2%
    
最終價格如下
  - 商品價格 + 交易手續費 + 金流服務費

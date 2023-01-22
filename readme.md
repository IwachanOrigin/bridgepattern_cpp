# bridgepattern cpp demo code

## Overview

    Bridge Patternの使い方

## 使いどころ
    
    複雑化していくクラス階層を共通インターフェイスを通して同じように利用したいときに使えます。  
    今回の例では、WriterクラスからWriteImplクラスを保持するように実装しています。  
    Writerクラスは単にWriterImplクラスを使うためだけに存在するインターフェイスです。  
    Writerクラスがmain関数とWriterImplクラスの橋渡しをやってくれている形になります。  
    このパターンのように間に一つ、抽象化されたクラスを挟む使い方をすることで、クラス間の依存性を限りなく疎の状態にすることができます。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/bridgepattern_cpp/blob/master/LICENSE)


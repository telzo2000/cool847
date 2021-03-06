# cool847ビルドガイド

## ◯同封されているもの

スイッチプレート　１枚<br>
PCB １枚<br>
M2スペーサー10mm 5個<br>
M2ネジ15mm 5本<br>
M2ネジ４mm 3本<br>
M2スペーサー8mm １個<br>
M2ワッシャー 1枚<br>
<br>

## ◯別途に購入するもの（１）
ウレタンケーブル25cm<br>
ダイオード　47本<br>
MXソケット　47個<br>
タクトスイッチ　1個<br>
キースイッチ　47個<br>
キーキャップ<br>
スタビライザー２U ３個<br>
pro micro １個<br>
スプリングピンヘッダ（マックエイトコンスルー）２個<br>
フルカラーシリアルLEDテープ　２枚 または、SK6812MINI-E　10個<br>

※これらのものについては、[遊舎工房](https://shop.yushakobo.jp)、[TALP KEYBOARDs](https://talpkeyboard.stores.jp)、[KOCHI KEYBOARD](https://kochikeyboard.stores.jp)等国内で自作キーボードに関する部品等を取り扱っているお店で購入することができます。M2スペーサー10mmは、外径の小さいものが最適です[KOCHI KEYBOARD](https://kochikeyboard.stores.jp)で[取り扱っているもの](https://kochikeyboard.stores.jp/items/5f8aabbdd24eee436e27e967)を推奨します。
<br>

## ◯別途に購入するもの（２）
[マイクロUSB端子（オス）](https://akizukidenshi.com/catalog/g/gC-07666/)<br>
[USB タイプC基板](https://akizukidenshi.com/catalog/g/gK-15426/)<br>
※これらのものについては、[秋月電子通商](https://akizukidenshi.com/catalog/)で購入することができます。

## ◯別途に購入するもの（3）
ケース
<br>
※GH60系60％キーボードケース（POKER互換とも）を使うことを前提になっています。
国内では[遊舎工房](https://shop.yushakobo.jp)や[TALP KEYBOARDs](https://talpkeyboard.stores.jp)等で、海外では[Ali Expresse](https://best.aliexpress.com/)等で同じようなケースを材質ごとに、見つけることができます。
<br>
現在、遊舎工房やTALP KEYBOARDsにあるプラスチックケース（※１）、木製ケース、KBDFansのTOFUケース、MelGeek mojo60ケース、LightEdgeケースでの使用は確認しました。
<br>
cool847がケース全てに使えるか確認することは、個人の裁量を超えます。購入者の自己責任でお願いします。
<br>
※１　手元にある、以前遊舎工房で購入した透明プラスチックケースと、
最近TALP KEYBOARDsで購入したINK黒色のプラスチックケースは、
見た目が同じなので、構造も同じと思っていました。
しかし、内側の形状が違うことがわかりました。<br>
両者のホームページで使用されている画像は、同じ形状のものです。
最購入したTALP KEYBOARDsのプラスチックケースは、[KBDfans](https://kbdfans.com/collections/all/products/60-ink-black-plastic-case-1?_pos=7&_fid=ee5e5c1cb&_ss=c
)で取り扱っている、新しい形状のものでした。<br>
新しい形状のプラスチックケースは、問題なく使えます。<br>
古い形状のプラスチックケースの場合は、pro microに差し込む、マイクロUSB端子（オス）付近が干渉します。
ケースの一部を改造が必要となります。
<br>

## ◯ファームウェア

このキーボードはQMKというキーボード用のソフトウェアで動作するようにプログラミングしています。<br>
[Yoichiro Tanaka@yoichiro](https://twitter.com/yoichiro)さん等が開発した[REMAP](https://remap-keys.app/)が使用できます。
<br>
pro microとPCをUSBケーブルで繋ぎ、google chromeで[REMAP](https://remap-keys.app/)サイトへアクセスしてください。<br>

![](img/img00079.jpg)

画面中央の「KEYBOARD CATALOG」をクリックしてください。<br>
画面が変わりましたら、左上の「Keyboard Name」に「cool」と
入力して、下部の「SEARCH」をクリックしてください。
<br>
coolシリーズのキーボードが表示されます。
![](img/img00080.jpg)

この中から、該当するキーボードを選び、クリックしてください。
<br>
例えば、cool844であれば、次の画面に変わります。
そこでタブの「FIRMWARE」をクリックすると、
![](img/img00081.jpg)
このように、via用hexファイルが表示されます。
「FLASH」をクリックすると、
![](img/img00082.jpg)
Flash Firmwareが起動して、pro microへの書き込みができます。
<br>
以上で、pro microへのファームウェアの書き込みは完了です。
<br>
REMAPのおかげで、自作キーボードのファームウェアの書き込み、キーレイアウトの変更が大変、簡単になりました。
<br>


次にgoogle chromeが動くパソコンとcool847をUSBケーブルでつなぎます。<br>
そのあと、[REMAP](https://remap-keys.app/configure)にアクセスして、 


![](img/remap001.png)
画面中央の「＋KEYBOARD」をクリックしてください。<br>
<br>
![](img/remap002.png)
キーボードとパソコンが繋がっていれば、次のような表示でます。
![](img/remap003.png)
cool847を選び、「接続」をクリックしてください。<br>


![](img/remap004.png)


そうすると、REMAPのサイト上で、cool847のキーレイアウトを編集することができます。

## ◯組み立て

### １　表裏面の確認
スイッチプレートとPCBは、表面の右上にcool 847と印字されています。特にPCBは、diode 、socketと印字されている面が裏面です。

### ２　ダイオードのハンダ付け
PCB 裏面にダイオード（リードタイプ）のハンダ付けをします。ダイオードの足を曲げて取り付けて、ハンダ付けをします。ダイオードの足は、下面から「diode」と印刷された部分の穴に差し込みます。上面に伸びたダイオードの足は切り離してください。ダイオードには極性があります。ダイオードの黒い帯がある側が「diode」の文字の後ろになるようにハンダ付けしてください。ハンダ付けに自信がない場合、フラックスを利用すると、上手にハンダ付けができます。その後、フラックスクリーナーで綺麗に拭き取ることをお勧めします。<br>
リードのないダイオード（SMDタイプ）も同様に使用できます。
向き（極性）があります。
下の画像を参考にしてください。
![](img/img00004.jpg)


### ３　MXソケットのハンダ付け
PCB 裏面にMXソケットのハンダ付けをします。PCB 裏面の端子箇所に多めにフラックスを塗布して、予備ハンダをしてください。MXソケットをsocket と印字を隠すように置いて、ハンダゴテを当てて、予備ハンダを溶かしながら、ハンダ付けをしてください。


### ４　タクトスイッチの取り付け
PCB裏面にresetと書かれた箇所があります。そこにタクトスイッチをハンダ付けしてください。

### ５　pro microの取り付け
本製品ではコンスルー（スプリングピンヘッダ）を使用してのpro microの装着を推奨しています。
コンスルー（スプリングピンヘッダ）の向きに気をつけて使用してください。画像を参考にして、pro microの向きに注意してください。<br>
pro microを装着したさ、pro microの基板がたくさん載っている側が下向きになります。cool844と同じ付け方になります。

### ６ ドーターボードの作成と取り付け
マイクロUSB端子（オス）付きケーブルがある場合は最初、ケーブルの黒い皮膜を２cmほど残してむいてください。<br>
黒い皮膜があると、ケーブルの取り回しが不便です。<br>
中より出てきた、赤、白、緑、黒色のケーブルを、[USB タイプC基板](https://akizukidenshi.com/catalog/g/gK-15426/)のVBUS、D-、D+、GNDの順にハンダ付けをします。<br>

![](img/img00005.jpg)

ウレタンケーブルや[マイクロUSB端子（オス）](https://akizukidenshi.com/catalog/g/gC-07666/)で作成する場合、
ドーターボードの作成は[こちら](https://github.com/telzo2000/Hello_keyboard/blob/main/dbforcool844/buildlog.md)になります。
<br>
（令和3年10月27日追記）取り付けの際、PCBとUSBタイプC基板との間隔を３〜４mmにしてください。
<br>
この間隔は、ケースのUSB挿し込み口と位置を合わせてからハンダ付けをしてください。
<br>
次の画像（試作品）を参考にしてください。<br>

![](img/IMG_4257.jpg)
![](img/IMG_4255.jpg)
![](img/IMG_4256.jpg)

### ７　スタビライザーの取り付け
PCB表面３箇所に、２Uのスタビライザーを取り付けます。スタビライザーに事前に、ルブしておくことをお勧めします。

### ８　キースイッチの取り付け<br>
最初にキースイッチ５個をトッププレートの５箇所（四隅と一番手前）に差し込みます。一度に全部のキースイッチを取り付けて、その後にPCBにハンダ付けしたMXソケットに差し込むとうまくいかないことが予想されます。５箇所で一度PCBにハンダ付けしたMXソケットに差し込み、残りのキースイッチをトッププレート、PCBの順に差し込んでください。それぞれのキースイッチの足がきちんとMXソケットの基板の穴に差し込まれていることを確認してください。差し込むときに、足が曲がってしまうことがあります。その場合は、ボタンを押しても入力されません。一度キースイッチを外して、足の修正または新しいキースイッチに交換等対処してください。

### 9-a フルカラーシリアルLEDテープの取り付け
PCB裏面に、テープの裏面の保護紙を剥がして貼り付けます。その後、それぞれの端子にハンダを山盛りにして導通させてください。

![](img/img00006.jpg)
![](img/img00007.jpg)

この後、ファームウェアを入れて、入力できるかテストをしてください。

### 9-b SK6812MINI-Eの取り付け
10箇所、取り付けることができます。ハンダゴテの温度を低めに設定してください。
高い温度ですと、破損する可能性があります。<br>
この後、ファームウェアを入れて、入力できるかテストをしてください。

### 10　ネジ、スペーサーの取り付け
スイッチプレート表面からネジを通して、スペーサーも通しておきます。５箇所全て、その状態にします。<br>
ケースにスイッチプレート等を差し込んで、ネジを締めます。締めたり、緩めたりを繰り返すうちに、ネジ山が上手に溝に入り込んで、締めることができます。プラスチック製ケースではスイッチプレートがケース壁面上部より１mm程度下がった位置で、ネジは締まりました。締めすぎて、ネジ山を壊さないよう、注意してください。

![](img/img00011.jpg)


### 11　右奥箇所のねじ止め
ケース右奥箇所の固定のため、PCBの一部に作成されたプレート（リーフ）を切り離してください。<br>
![](img/img00008.jpg)

![](img/img00009.jpg)

このパーツをM2ネジ４mm２本、ワッシャー１枚、M2スペーサー８mmを組み合わせて、次のようにしてください。<br>

![](img/img00010.jpg)
下のイメージ画像は、断面です。
![](img/img08.png)

### 12 ケースへの固定
リーフを付けた汎用ケースに、出来上がったcool847を上から嵌め込み、
5箇所のネジを締めてください。できる限り中央から、外側に向かった順で締める方がよいです。
合わせて、リーフ部分のネジ締めを、してください。
こちらはM2ネジ４mmになります。

![](img/img00012.jpg)
![](img/img00013.jpg)
![](img/img00014.jpg)
![](img/img00015.jpg)

完成です。<br>
楽しいキーボードライフを。

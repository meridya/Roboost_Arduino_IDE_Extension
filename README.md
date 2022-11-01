# ![Build Status](Images/SoSmart.png)
- [English](#english)
# Türkçe

- [Arduino IDE için Robust Maker kart paketi](#arduino-ide-için-robust-maker-kart-paketi)
- [Desteklenen Kartlar ve Özellikleri](#desteklenen-kartlar-ve-özellikleri)
- [Paket Kurulum Adımları](#paket-kurulum-adımları)
- [Arduino IDE Uyumlu Sürümler](#arduino-ide-uyumlu-sürümler)
- [Sorumluluk Reddi](#sorumluluk-reddi)
- [Önemli Uyarı](#önemli-uyarı)
- [Geliştieme Kartı](#geliştirme-kartı)
- - [Kapsam](#kapsam)
- - [Ürün Parametreleri](#ürün-parametreleri)
- - [Mekanik](#mekanik)
- - [Pin Açıklamaları](#pin-açıklamaları)
- - [Geliştirme Kartı Pin Şeması](#geliştirme-kartı-pin-şeması)
- - [Genel Bakış](#genel-bakış)
# Arduino IDE için Robust Maker kart paketi
Bu depo, Robust Maker kart için ide tanımlayıcıyı içerir.

# Desteklenen Kartlar ve Özellikleri

| NuMaker Kartları | Zengin Çevresel Birimler |USB Port Desteği | Debugger |
| -------------- | ---------------- |---------| ----------------------------------------------- |
| **NUC240 Pro** | ✔️                |  ✔  | ✔️                                               |
| **NUC240**     | ✔️                |  ❌  | ❌                                               |


# Paket Kurulum Adımları
1.  https://www.arduino.cc/en/Main/Software Arduio IDE indirilip Kurulur.
2. Arduino yazılımı çift tıkla çalıştırılır, ardından **Dosya->Terçihler** seçilir.
![1](Images/1.png)
3. Aşağıdaki URL'yi 'Ek Pano Yönetici URL'leri' giriş alanına yapıştırın:
![2](Images/2.png)
`https://raw.githubusercontent.com/meridya/Roboost_Arduino_IDE_Extension/master/package_roboost_index.json`
![3](Images/3.png)
4. Under **Araçlar->Kart->Kart Yöneticisi**, 
![4](Images/4.png)
`Robust Maker` aranır, **Kur** işlemi seçilir.
![5](Images/5.png)
5. Artık Robust Maker'ı seçebilir ve Arduino IDE'de kullanabilirsiniz.

# Arduino IDE Uyumlu Sürümler
* 1.8.15
* 1.8.10
* 1.8.8
* 1.8.5

# Sorumluluk Reddi
Yazılım, performans veya sonuçlara ilişkin garanti olmaksızın "OLDUĞU GİBİ" sunulur ve performans veya sonuçlara ilişkin tüm risk "SİZE" aittir.
SoSmart, satılabilirlik, belirli bir amaca uygunluk ve fikri mülkiyet haklarının ihlal edilmemesine ilişkin tüm garantiler 
dahil ancak bunlarla sınırlı olmamak üzere Yazılım, kullanımı veya işletimi ile ilgili açık, ima edilen veya başka türlü tüm garantileri reddeder.

# Önemli Uyarı
SoSmart Ürünleri, herhangi bir arıza veya arızanın insan yaşamının kaybına, bedensel yaralanmaya veya ciddi maddi hasara neden olabilecek sistemlerde veya ekipmanlarda kullanılması amaçlanmamıştır veya bu ürünler için garanti verilmemektedir. Bu tür uygulamalar "Güvensiz Kullanım" olarak kabul edilir.

Güvenli olmayan kullanım şunları içerir, ancak bunlarla sınırlı değildir: cerrahi uygulama için ekipman, atom enerjisi kontrol aletleri, uçak veya uzay gemisi aletleri, araç kullanımı için tasarlanmış dinamik, fren veya güvenlik sistemlerinin kontrolü veya çalıştırılması, trafik sinyal aletleri, her türlü güvenlik cihazı ve yaşamı desteklemeyi veya sürdürmeyi amaçlayan diğer uygulamalar.

Tüm Güvensiz Kullanımların riski müşteriye ait olacaktır ve müşterinin Güvensiz Kullanımı sonucunda üçüncü şahısların SoSmart üzerinde hak iddia etmesi durumunda, müşteri SoSmart'ın bu nedenle uğradığı zararları ve yükümlülükleri tazmin edecektir.

Lütfen tüm verilerin ve özelliklerin önceden haber verilmeksizin değiştirilebileceğini unutmayın. Bu veri sayfasında adı geçen tüm ürün ve şirketlerin ticari markaları ilgili sahiplerine aittir.

# Geliştirme Kartı

### Kapsam

Bu döküman Geliştirme Kart'ının tanımını ve çalışma prensibini açıklar.

### Ürün Parametreleri

-  Çalışma Gerilimi: DC +5V
-  Çalışma Sıcaklığı:-40 ℃ ~ +105 ℃ 
-  İşlemci Mimarisi: ARM® Cortex™-M0 core
-  Çalışma Frekansı: 72MHz'e kadar çalışır.
-  Seri haberleşme : 4 adet UART 1 adet SPI 2 adet I^2C 1 adet USB 1 adet LIN 1 adet CAN
- 4 adet PWM pini
- 7 adet ADC pini
- APROM 64 KB
- RAM 8KB
- DATA FLASH 4KB
- ISP ROM 8KB
- I/O 31 adet.
- Timer (32 bit) 4 adet.
- USB ve hassas zamanlama işlemi için harici 4~24 MHz yüksek hızlı kristal osilatör.
- RTC işlevi ve düşük güç sistemi için harici 32.768 kHz düşük hızlı kristal osilatör.

### Mekanik

![gkd](Images/gkd.png)
![gk3dön](Images/gk3dön.png)
![gk3darka](Images/gk3darka.png)

### Pin Açıklamaları

|Pin Numarası|Pin Adı|Pin Tipi|Açıklama|
|------|------|------|------|
|1|Vbat|P|Batarya ile besleme pimi|
|2|X32_OUT|O|Harici 32.768 kHz kristal osilatör çıkış pini.|
|3|X32_IN|I|Harici 32.768 kHz kristal osilatör giriş pini.|
|4|PA.11-I2C1_SCL-CAN1_RXD|I/O-I/O-I|Genel amaçlı dijital I/O pini-I2C1 Clok pimi-CAN1 için data alıcı giriş pini|
|5|PA.10-I2C1_SDA-CAN1_TXD|I/O-I/O-O|Genel amaçlı dijital I/O pini-I2C0 Clok pimi-CAN1 için data verici çıkış pini|
|6|PA.9-I2C0_SCL|I/O-I/O|Genel amaçlı dijital I/O pini-I2C0 için clock pini|
|7|PA.8-I2C0_SDA|I/O-I/O|Genel amaçlı dijital I/O pini-I2C0 için data giriş-çıkış pini|
|8|PB.4-UART1_RXD|I/O-I|Genel amaçlı dijital I/O pini-UART1 için data alıcı pini|
|9|PB.5-UART1_TXD|I/O-O|Genel amaçlı dijital I/O pini-UART1 için data verici pini|
|10|LDO_CAP|P|LDO çıkış pini|
|11|VDD|P|I/O için güç kaynağı PLL ve dijital devre için LDO kaynağı|
|12|Vss|P|Dijital devre için topraklama pini|
|13|USB_VBUS|USB|USB HOST yada HUB için güç kaynağı|
|14|USB_Vdd33_CAP|USB|Dahili güç regülatörü çıkışı 3.3 V dekuplaj pini|
|15|USB_D-|USB|USB diferansiyel sinyali D-|
|16|USB_D+|USB|USB diferansiyel sinyali D+|
|17|PB.0-UART0_RXD|I/O-I|Genel amaçlı dijital I/O pini-UART0 için data alıcı pini|
|18|PB.1-UART0_TXD|I/O-O|Genel amaçlı dijital I/O pini-UART0 için data verici pini|
|19|PD.6-CAN0_RXD|I/O-I|Genel amaçlı dijital I/O pini-CAN0 için data alıcı pini|
|20|PD.7-CAN0_TXD|I/O-I|Genel amaçlı dijital I/O pini-CAN0 için data verici pini|
|21|PC.3-SPI_MOSI0-I2S_DO|I/O-I/O-O|Genel amaçlı dijital I/O pini-1.SPI0 MOSI (Master Out, Slave In) pini-I2S data çıkışı|
|22|PC.2-SPI0_MISO0-I2S_DI|I/O-I/O-I|Genel amaçlı dijital I/O pini-1.SPI0 MISO (Master out, Slave In) pini-I2S data girişi|
|23|PC.1-SPI0_CLK-I2S_BCLK|I/O-I/O-I/O|Genel amaçlı dijital I/O pini-SPI0 seri clock pini-I2S bit clock pini|
|24|PC.0-SPI0_SS0-I2S_LRCLK|I/O-I/O-I/O|Genel amaçlı dijital I/O pini-1.SPI0 slave seçme pini-I2S sol-sağ kanal clock|
|25|PA.15-PWM3-I2S_MCLK|I/O-I/O-O|Genel amaçlı dijital I/O pini- PWM3 çıkışı-I2S master clock çıkış pini|
|26|PA.14-PWM2|I/O-I/O|Genel amaçlı dijital I/O pini- PWM2 çıkışı|
|27|PA.13-PWM1-UART5_TXD|I/O-I/O-O|Genel amaçlı dijital I/O pini-PWM1 çıkışı-UART5 için data verici pini|
|28|PA.12-PWM0-UART5_RXD|I/O-I/O-I|Genel amaçlı dijital I/O pini-PWM0 çıkışı-UART5 için data alıcı pini|
|29|ICE_DAT|I/O|Seri hata ayıklayıcı veri pini|
|30|ICE_CLK|I| Seri hata ayıklayıcı clock pini|
|31|AVss|AP|Analog devre için topraklama pini|
|32|PA.0-ADC0-SC0_PWR|I/O-AI-O|Genel amaçlı dijital I/O pini-ADC0 analog girişi-SmardCard0 güç girişi|
|33|PA.1-ADC1-SC0_RST|I/O-AI-O|Genel amaçlı dijital I/O pini-ADC1 analog girişi-SmartCard0 reset pini|
|34|PA.2-ADC2-SC0_CLK-UART3_TXD|I/O-AI-O-O|Genel amaçlı dijital I/O pini-ADC2 analog girişi-SmartCard0 clock pini-UART3 için data verici pini|
|35|PA.3-ADC3-SC0_DAT-UART3_RXD|I/O-AI-O-I|Genel amaçlı dijital I/O pini-ADC3 analog girişi|SmartCard0 veri pini|UART3 için data alıcı pini|
|36|PA.4-ADC4|I/O-AI|Genel amaçlı dijital I/O pini-ADC4 analog girişi|
|37|PA.5-ADC5|I/O-AI|Genel amaçlı dijital I/O pini-ADC5 analog girişi|
|38|PA.6-ADC6|I/O-AI|Genel amaçlı dijital I/O pini-ADC6 analog girişi|
|39|Vref|AP|ADC için voltaj referans pini|
|40|AVdd|AP|Dahili analog devre için güç kaynağı|
|41|PC.7-ACMP0_N|I/O-AI|Genel amaçlı I/O pini-Comparator0 negatif giriş pini|
|42|PC.6-ACMP0_P-SC-CD|I/O-AI-I|Genel amaçlı dijital I/O pini-Comprator0 pozitid giriş pini-SmartCard0 kart algılama pini|
|43|PB.15-INT1-TM0_EXT-TM0|I/O-I-I-O|Genel amaçlı dijital I/O pini-Harici interrupt1 giriş pini-Timer0 harici  giriş pini-TM0 geçiş çıkış pini|
|44|PF.0-XT1_OUT|I/O-O|Genel amaçlı dijital I/O pini-Harici 4~24 MHz(yüksek hızlı) kristal osilatör çıkış pini|
|45|PF.1-XT1_IN|I/O-I|Genel amaçlı dijital I/O pini- Harici 4~24 MHz(yüksel hızlı) kristal osilatör giriş pini|
|46|nRESET|I|Harici sıfırlama girişi: Active Low|
|47|PVss|P|PLL ground|
|48|PB.8-STADC-TM0-CLKO|I/O-I-I/O-O|Genel amaçlı dijital I/O pini-ADC dahili tetikleme giriş pini-Timer0 olay sayacı girişi / geçiş çıkışı- Frekans bölücü clock çıkış pini|

### Geliştirme Kartı Pin Şeması

![gk1](Images/GK1.jpg)

### Genel Bakış 

Geliştirme Kartı çevre ile etkileşime giren sistemler yapmada, sensörlerden gelen verileri kullanarak yapılacak uygulamalarda, akıllı ev sistemleri oluşturmada, hareketli nesneler tasarlama gibi birçok alanda kullanım özelliği gösterebilir. Prototiplemeye imkan sağlaması, çeşitli devrelerde rahatça kullanılabilmesi için gerekli pinler devre kartı sayesinde dışarıya alınmıştır. Jumper kablolar ile bağlantıları yapılabilir. Mikrodenetleyici olarak NUC240LD2AE kullanılmıştır.

**Kopya (C) 2022 SoSmart Technology Corp. All rights reserved**

# English

- [Robust Maker Board Package for Arduino IDE](#robust-maker-board-package-for-arduino-ide)
- [Supported Boards & Features](#supported-boards--features)
- [Board Package Installation Steps](#board-package-installation-steps)
- [Compatible Versions of Arduino IDE](#compatible-versions-of-arduino-ide)
- [Disclaimer](#disclaimer)
- [Important Notice](#important-notice)

# Robust Maker board package for Arduino IDE
This repository contains the package descriptor for Robust Maker boards

# Supported Boards & Features

| NuMaker Boards | Rich peripherals | Debugger |
| -------------- | ---------------- | ----------------------------------------------- |
| **NUC240 Pro** | ✔️                | ✔️                                               |
| **NUC240**     | ✔️                | ❌                                               |


# Board Package Installation Steps
1. Download and Install Arduino IDE from https://www.arduino.cc/en/Main/Software
2. Double-click arduino.exe, and then go to **File->Preferences**
![1](Images/1.png)
3. Paste following URL to 'Additional Boards Manager URLs' input field: 
![2](Images/2.png)
`https://raw.githubusercontent.com/meridya/Roboost_Arduino_IDE_Extension/master/package_roboost_index.json`
![3](Images/3.png)
4. Under **Tools->Board->Boards Manger**, 
![4](Images/4.png)
search `Robust Maker`, click **Install**
![5](Images/5.png)
5. You can now select Robust Maker and install it in Arduino IDE.

# Compatible Versions of Arduino IDE
* 1.8.15
* 1.8.10
* 1.8.8
* 1.8.5

# Disclaimer
The Software is furnished "AS IS", without warranty as to performance or results, and
the entire risk as to performance or results is assumed by YOU. SoSmart disclaims all
warranties, express, implied or otherwise, with regard to the Software, its use, or
operation, including without limitation any and all warranties of merchantability, fitness
for a particular purpose, and non-infringement of intellectual property rights.

# Important Notice
SoSmart Products are neither intended nor warranted for usage in systems or equipment,
any malfunction or failure of which may cause loss of human life, bodily injury or severe
property damage. Such applications are deemed, "Insecure Usage".

Insecure usage includes, but is not limited to: equipment for surgical implementation,
atomic energy control instruments, airplane or spaceship instruments, the control or
operation of dynamic, brake or safety systems designed for vehicular use, traffic signal
instruments, all types of safety devices, and other applications intended to support or
sustain life.

All Insecure Usage shall be made at customer's risk, and in the event that third parties
lay claims to SoSmart as a result of customer's Insecure Usage, customer shall indemnify
the damages and liabilities thus incurred by SoSmart.

Please note that all data and specifications are subject to change without notice. All the
trademarks of products and companies mentioned in this datasheet belong to their respective
owners.


**Copyright (C) 2022 SoSmart Technology Corp. All rights reserved**

# Custom Turbo Boost Gauge using ESP32S3 with Round Waveshare IPS Display
Custom Turbo Boost Gauge using ESP32S3 with Round Waveshare IPS Display



**YouTube video: https://youtu.be/cZTx7T9uwA4**


## Links from the video:
- Boost pressure sensor: https://s.click.aliexpress.com/e/_DBD9ak3
- Display with enclosure: https://s.click.aliexpress.com/e/_DkQiwQf
- Display without enclosure: https://s.click.aliexpress.com/e/_DEe0YJv
- Display documentation: https://www.waveshare.com/wiki/ESP32-S3-LCD-1.28
- Reddit post: https://www.reddit.com/r/arduino/comments/1bsl0l5/waveshare_esp32s3_128in_lcd_display_with_wifi/
- Online image converter (to C code): http://www.rinkydinkelectronics.com/t_imageconverter565.php
- Adapter board (1.27mm to 2.54mm Pitch): https://s.click.aliexpress.com/e/_Dc74hqb
- Image2cpp (convert array to image): https://javl.github.io/image2cpp/
- Photopea (online graphics editor like Photoshop): https://www.photopea.com/


## Related videos:
- Boost pressure Arduino + OLED: https://youtu.be/JXmw1xOlBdk
- Pitch Roll Indicator: https://youtu.be/S_ppdbb0poQ
- Custom Shifter Knob with Display: https://www.youtube.com/playlist?list=PLjQRaMdk7pBb6r6xglZb92DGyWJTgBVaV

![THUMB_diy_boost_pressure_gauge_B](https://github.com/upiir/custom_boost_gauge_esp32/assets/117754156/e899b691-7cfe-4f21-853d-03f3aa8d6c6b)



## Small Animations:

![boost_gauge_red_bezel](https://github.com/upiir/custom_boost_gauge_esp32/assets/117754156/b5eee7e9-96d4-4a94-abc9-69828083c2f3)

![boost_gauge_red_exposed](https://github.com/upiir/custom_boost_gauge_esp32/assets/117754156/df065611-1374-4b77-b75c-942e51522103)

![boost_gauge_violet_bezel](https://github.com/upiir/custom_boost_gauge_esp32/assets/117754156/ac0acb6d-ecd2-4826-98cf-5f4ffc570849)

![boost_gauge_violet_exposed](https://github.com/upiir/custom_boost_gauge_esp32/assets/117754156/5738d644-d8a0-44e6-9bbf-483f86d5b743)

## Upload Code
### Arduino
- Download and install ![Arduino IDE](https://www.arduino.cc/en/software).
- Install ESP32 on the Arduino IDE as shown below, and you can refer to ![this link](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html).
- Fill in the following link in the Additional Boards Manager URLs section of the Settings screen under File -> Preferences and save.
  ```
  https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
  ```
  ![ESP32-C3-Zero -05.jpg](https://www.waveshare.com/w/upload/a/a1/ESP32-C3-Zero_-05.jpg)

- Search esp32 on Board Manager to install, and restart Arduino IDE to take effect.
  ![ESP32-S3-Touch-LCD-4.3-Ar.jpg](https://www.waveshare.com/w/upload/5/59/ESP32-S3-Touch-LCD-4.3-Ar.jpg)
- Open the Arduino IDE and note that Tools in the menu bar selects the corresponding **16MB Flash** and enables **QSPI PSRAM**, as shown in the following figure.
  ![ESP32-S3-LCD-4.3-Ar02.jpg](https://www.waveshare.com/w/upload/c/cd/ESP32-S3-LCD-4.3-Ar02.jpg)

#### Library Installation
- TFT_SPI, lvgl libraries need to be configured after installation, it is recommended to directly use the TFT_eSPI_Setups, TFT_eSPI, lvgl folder in ![Esp32-s3-lcd-1.28-lib](https://files.waveshare.com/wiki/ESP32-S3-LCD-1.28/Esp32-s3-lcd-1.28-lib.zip) and copy it to the C:\Users\xxxx\Documents\Arduino\libraries directory. xxxx represents the user name of your computer, please be careful in identifying it.
  ![ESP32-S3-Touch-LCD-1.28-01.jpg](https://www.waveshare.com/w/upload/f/f6/ESP32-S3-Touch-LCD-1.28-01.jpg)

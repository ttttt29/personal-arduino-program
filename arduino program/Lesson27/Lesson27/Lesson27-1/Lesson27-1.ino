/*
27 模拟输出3 - for
太极创客
www.taichi-maker.com

此程序用于太极创客<<零基础入门学用Arduino教程>> 
27 模拟输出3 - for

演示如何通过for循环语句实现LED明暗交替（呼吸灯）效果。

2017-04-28
*/
void setup() {
  pinMode(9, OUTPUT);      //设置9号引脚为输出模式
  Serial.begin(9600);     //启动串口通讯
}

void loop() {
  // LED由暗到明
  for (int brightness = 0; brightness <= 255; brightness++){
    analogWrite(9, brightness);   
    Serial.println(brightness);
    delay(10);
  }
  
  // LED由明到暗  
  for (int brightness = 255; brightness >=0 ; brightness--){
    analogWrite(9, brightness);
    Serial.println(brightness);
    delay(10);
  }
}

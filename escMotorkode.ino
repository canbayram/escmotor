#include <Servo.h> ///Servo kütüphanesi çağırma
Servo myEsc;       ///ESC isimlendirme
int potpin = 0;    ///Pot'un bağlı olduğu pini isimlendirme
int val;           ///Pot'un analog değerini kayıt etmek için değişken tanımlama
void setup() {  
myEsc.attach(8);   /// Esc mizin hangi pin'e bağlı olduğunu tanıtma

}

void loop() {
  val = analogRead(potpin);             ///Potun değerini Analog pinden okuyup değişkene atama
  val = map(val, 0, 1023, 1000, 2000);  ///Potun değerini esc pwm değerine oranlama
  myEsc.writeMicroseconds(val);         ///Oranlanmış değeri Esc ye gönderme
  delay(15);                           
}

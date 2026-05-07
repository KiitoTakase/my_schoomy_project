#include <SchooMyUtilities.h> // スクーミー専用の便利ツールを読み込む

SchooMyUtilities scmUtils = SchooMyUtilities(); // ツールを使えるように準備

void setup() {
  Serial.begin(9600);   // PCとの通信速度を設定
  pinMode(10, OUTPUT);  // 10番ピンを「出力（電気を出す）」モードに設定
  digitalWrite(10, HIGH); // 10番ピンに電気を流す（光る！）
}

void loop() {
  // ここに書いたことは、電源が入っている間ずっと繰り返されます
}

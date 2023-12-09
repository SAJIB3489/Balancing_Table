#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;

int pos = 0;

void setup() {
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
}

void loop() {
  // Move forward for 8 seconds
  for (int i = 0; i <= 180; i += 1) {
    myservo1.write(i);
    myservo2.write(i);
    myservo3.write(i);
    delay(44); // Adjust the delay for smoother motion
  }
  
  delay(8000); // Wait for 8 seconds

  // Move backward for 10 seconds
  for (int i = 180; i >= 0; i -= 1) {
    myservo1.write(i);
    myservo2.write(i);
    myservo3.write(i);
    delay(50); // Adjust the delay for smoother motion
  }

  delay(10000); // Wait for 10 seconds
}


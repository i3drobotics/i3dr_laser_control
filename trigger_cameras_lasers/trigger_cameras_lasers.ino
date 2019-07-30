void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // Set digital pin as output pins
  pinMode(3, OUTPUT);
  
}

void loop() {

  
  digitalWrite(2, HIGH);   // trigger the LASERS
  delay(250);
  
  
  digitalWrite(3, HIGH);   // trigger the camera
  delay(50); // wait for 100ms
  
  digitalWrite(3, LOW);    // CAMERA_LOW
  delay(50);

  
  digitalWrite(2, LOW);   // LASERS OFF
  delay(50);

  digitalWrite(3, HIGH);   // trigger the camera
  delay(50); // wait for 100ms

  digitalWrite(3, LOW);   // trigger the camera
  delay(50); // wait for 100ms


  


  
  // put your main code here, to run repeatedly:

}

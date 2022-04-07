/*
 AET Chang'e and Hou'Yi Enclosure
 Team Name: The Jade Rabbits
 Team Members: Jose Nerio, Anja Danke, Jessica Chen
 Description: button, servo, and LED program
 */

//Servo Code library
 #include<Servo.h>;

//VARIABLES
Servo myServo;
const int buttonPin =7;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9); //using .attach to initialize servo to pin 9
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //if button is pressed, swivel servo 180 degrees
  if(digitalRead(buttonPin) == HIGH){
    myServo.write(180);
  }else{
    myServo.write(0);
  }

}

//Define buttons used.
#define KEY_LEFT_CTRL 1

#define KEY_F6 63 //Button 1
#define KEY_F7 64 //Button 2
#define KEY_F8 65 //Button 3
#define KEY_F13 104 //Button 4
#define KEY_F14 105 //Button 5
#define KEY_F15 106 //Button 6
#define KEY_F16 107 //Button 7
#define KEY_F17 108 //Button 8
#define KEY_F18 109 //Button 9
#define KEY_F19 110 //Button 10
#define KEY_F20 111 //Button 11
#define KEY_F21 112 //Button 12
#define KEY_F22 113 //Button 13
#define KEY_F23 114 //Button 14
#define KEY_F24 115 //Button 15

uint8_t buf[8] = {0}; //Keyboard timing buffer.

//Define pins used.
#define BUTTON_1 2
#define BUTTON_2 3
#define BUTTON_3 4
#define BUTTON_4 5
#define BUTTON_5 6
#define BUTTON_6 7
#define BUTTON_7 8
#define BUTTON_8 9
#define BUTTON_9 10
#define BUTTON_10 11
#define BUTTON_11 12
#define BUTTON_12 13
#define BUTTON_13 A0
#define BUTTON_14 A1
#define BUTTON_15 A2

int state = 1; //Base state for reference.

void setup()
{
  Serial.begin(9600); //Baud rate for keyboard.
  
  //Define the pinMode for each pin.
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);

  //Sets the starting value of each pin, on start up.
  digitalWrite(BUTTON_1, HIGH);
  digitalWrite(BUTTON_2, HIGH);
  digitalWrite(BUTTON_3, HIGH);
  digitalWrite(BUTTON_4, HIGH);
  digitalWrite(BUTTON_5, HIGH);
  digitalWrite(BUTTON_6, HIGH);
  digitalWrite(BUTTON_7, HIGH);
  digitalWrite(BUTTON_8, HIGH);
  digitalWrite(BUTTON_9, HIGH);
  digitalWrite(BUTTON_10, HIGH);
  digitalWrite(BUTTON_11, HIGH);
  digitalWrite(BUTTON_12, HIGH);
  digitalWrite(BUTTON_13, HIGH);
  digitalWrite(BUTTON_14, HIGH);
  digitalWrite(BUTTON_15, HIGH);

  delay(200); //Wait before continuing on with the code.
}

void loop()
{
  state = digitalRead(BUTTON_1);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F6; //Presses F6 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_2);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F7; //Presses the F7 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_3);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; // Presses ctrl key.
    buf[2] = KEY_F8; //Presses the F8 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_4);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F13; //Presses the F13 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_5);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F14; //Presses the F14 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_6);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F15; //Presses the F15 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_7);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F16; //Presses the F16 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_8);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F17; //Presses the F17 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_9);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F18; //Presses the F18 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_10);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F19; //Presses the F19 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_11);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F20; //Presses the F20 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_12);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F21; //Presses the F21 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_13);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F22; //Presses the F22 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_14);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F23; //Presses the F23 Key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }

  state = digitalRead(BUTTON_15);
  if(state != 1)
  {
    buf[0] = KEY_LEFT_CTRL; //Presses ctrl key.
    buf[2] = KEY_F24; //Presses the F24 key.
    Serial.write(buf, 8); //Sends Keypress.
    releaseKey(); //Calls the releaseKey method.
  }
}

//Used to release keys.
void releaseKey()
{
  buf[0] = 0; //Resets number.
  buf[2] = 0; //Resets number.
  Serial.write(buf, 8); //Release key.
  delay(200);
}

/* 
  Button Mouse Click
  
  Using push button connected to pin D5 to produce a mouse click.
 
*/


// Set pin numbers:
const int mouseButton = 5;     // 5 is the pushbutton pin number

int range = 5;
int responseDelay = 10;

void setup() {
  // Initialize button imput
  pinMode(mouseButton, INPUT);
  Mouse.begin();
}

void loop() {
  int clickState = digitalRead(mouseButton);
  
  // If mouse button is pressed
  if (clickState == HIGH) {
    // if the mouse is not pressed, press it:
    if (!Mouse.isPressed(MOUSE_LEFT)) {
      Mouse.press(MOUSE_LEFT); 
    }
  } 
  // else the mouse button is not pressed:
  else {
    // if the mouse is pressed, release it:
    if (Mouse.isPressed(MOUSE_LEFT)) {
      Mouse.release(MOUSE_LEFT); 
    }
  }
}

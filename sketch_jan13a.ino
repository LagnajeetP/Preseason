void setup() {
  // put your setup code here, to run once:

}

enum State {
  UP, DOWN
}

State myState = UP;
int i = 0;

void loop() {
  // put your main code here, to run repeatedly:

  if (myState == UP){
    i++
    if (i == 100){
      myState = DOWN
    }
  }
  if (myState == DOWN) {
    i--
    if (i == 0){
      myState = UP
    }
  }



}

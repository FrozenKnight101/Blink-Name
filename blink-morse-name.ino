#define LED_PIN D7

int time_delay = 400;

int Length_Dit = time_delay;
int Length_Dah = 3*time_delay;

int symbol = time_delay;
int letter = 3*time_delay;
int word = 7*time_delay;

void blink_name();
void blink(int time_duration);
void blink_A();
void blink_B();
void blink_H();
void blink_Y();

void setup()
 {
    pinMode(LED_PIN, OUTPUT);
 }
 

 
void loop()
 {
    blink_name();
    delay(word); 
 }
 
void blink( int time_duration)
 {
    digitalWrite(LED_PIN, HIGH);
    delay(time_duration);
    digitalWrite(LED_PIN, LOW);
 }

void blink_A()
{
    blink(Length_Dit);
    delay(symbol);
    blink(Length_Dah);
    delay(symbol);
}

void blink_B()
{
    blink(Length_Dah);
    delay(symbol);
    blink(Length_Dit);
    delay(symbol);
    blink(Length_Dit);
    delay(symbol);
    blink(Length_Dit);
    delay(symbol);
}

void blink_H()
{
    blink(Length_Dit);
    delay(symbol);
    blink(Length_Dit);
    delay(symbol);
    blink(Length_Dit);
    delay(symbol);
    blink(Length_Dit);
    delay(symbol);
}



void blink_Y()
{
    blink(Length_Dah);
    delay(symbol);
    blink(Length_Dit);
    delay(symbol);
    blink(Length_Dah);
    delay(symbol);
    blink(Length_Dah);
    delay(symbol);
    
}

void blink_name()
 {
     blink_A();
     delay(letter);
     blink_B();
     delay(letter);
     blink_H();
     delay(letter);
     blink_A();
     delay(letter);
     blink_Y();
     delay(letter);
     
 }
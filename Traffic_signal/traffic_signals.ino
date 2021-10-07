int redPin = 2;
int yellowPin = 3;
int greenPin = 4;
int buttonPin = 5;

int state = 0;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  if (digitalRead(buttonPin))
  {
    if (state == 0)
    {
      setLights(1, 0, 0);
      state = 1;
    }
    else if (state == 1)
    {
      setLights(1, 1, 0);
      state = 2;
    }
    else if (state == 2)
    {
      setLights(0, 0, 1);
      state = 3;
    }
    else if (state == 3)
    {
      setLights(0, 1, 0);
      state = 0;
    }
  	delay(1000);
  }
}

void setLights(int red, int yellow, int green)
{
  digitalWrite(redPin, red);
  digitalWrite(yellowPin, yellow);
  digitalWrite(greenPin, green);
}
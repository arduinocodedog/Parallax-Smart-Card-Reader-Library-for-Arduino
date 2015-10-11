#include "SmartCardReader.h"

bool SmartCardReader::IsCardDetected()
{
	return Get(CD);
}

bool SmartCardReader::Get(int Pin)
{
  return digitalRead(Pin);
}

void SmartCardReader::Set_Low(int Pin)
{
  digitalWrite(Pin, LOW);
  delayMicroseconds(DelayAmt);
}

void SmartCardReader::Set_High(int Pin)
{
  digitalWrite(Pin, HIGH);
  delayMicroseconds(DelayAmt);
}

void SmartCardReader::Input(int Pin)
{
  pinMode(Pin, INPUT);
}

void SmartCardReader::Output(int Pin)
{
  pinMode(Pin, OUTPUT);
}

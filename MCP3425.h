/******************************************************************************
MCP3425.h
Library for MCP3425 ADC
Bobby Schulz @ Northern Widget LLC & UMN
2/20/2018

MCP3425 is a 18 bit ADC, PGA, and various modes of resolution operation in order to facilitate various data rates

"Simplicity is prerquisite for reliability"
-Edsger W. Dijkstra

Distributed as-is; no warranty is given.
******************************************************************************/

#ifndef MCP3425_h
#define MCP3425_h

#include "Arduino.h"

#define CONTINUIOUS 1
#define SINGLE_SHOT 0

class MCP3425
{
  public:

    MCP3425(int _ADR);
    MCP3425(void);

    int Begin(void);

    long GetVoltageRaw();

    float GetVoltage();

    int SetGain(int DesiredGain);

    int SetResolution(int DesiredResolution);

    int SetMode(int Mode);

  private:
    int ADR;
    int GetConfig();

};

#endif
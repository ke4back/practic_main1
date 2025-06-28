#pragma once

using namespace System;

public ref class Route {
public:
    property int Index;
    property int Number;
    property String^ Destination;
    property String^ Date;
    property String^ Time;
    property int SeatsCount;
    property int Price;
};

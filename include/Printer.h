#pragma once

// Target Interface
class Printer {
   public:
    virtual void print() = 0;
    virtual ~Printer() = default;
};
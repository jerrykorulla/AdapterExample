#pragma once

#include "Printer.h"

#include <memory>

class OldPrinter; // Forward declaration

// Adapter
class PrinterAdapter : public Printer {
    private:
     std::shared_ptr<OldPrinter> oldPrinter;

    public:
     PrinterAdapter(std::shared_ptr<OldPrinter> op);
     void print() override;
};

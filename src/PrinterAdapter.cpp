#include "PrinterAdapter.h" // Include the header for PrinterAdapter
#include "OldPrinter.h" // Include the header for OldPrinter

PrinterAdapter::PrinterAdapter(std::shared_ptr<OldPrinter> op):oldPrinter(op) {
    // Constructor implementation
}

void PrinterAdapter::print() {
    // Call the method from the OldPrinter class
    oldPrinter->printText();
}
// Note: The actual implementation of OldPrinter::printText() should be in OldPrinter.cpp
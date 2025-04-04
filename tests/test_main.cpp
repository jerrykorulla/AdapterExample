#include "../include/PrinterAdapter.h" // Include the header for PrinterAdapter
#include "../include/OldPrinter.h" // Include the header for OldPrinter
#include "../include/Printer.h" // Include the header for Printer

#include <gtest/gtest.h>

TEST(AdditionTest, HandlesPositiveNumbers) { 
    std::shared_ptr<OldPrinter> oldPrinter = std::make_shared<OldPrinter>();
    std::shared_ptr<Printer> adaptedPrinter = std::make_shared<PrinterAdapter>(oldPrinter);
    adaptedPrinter->print(); // Call the print method of the adapted printer
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

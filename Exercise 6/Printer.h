//
// Created by Kolio on 10/8/2026.
//

#ifndef LAB2_PRINTER_H
#define LAB2_PRINTER_H
#include <iostream>
#include <ostream>

#include "Scanner.h"

class Scanner;

class Printer {
    private: bool usbInUse;
    public: Printer() {
        usbInUse = false;
    }
    void plugUsb() {
        if (usbInUse) {
            std::cout << "USB InUse" << std::endl;
            return;
        }
        usbInUse = true;
    }
    void unplugUsb() {
        if (!usbInUse) {
            std::cout << "No USB to unplug!" << std::endl;
        }
        usbInUse = false;
    }
    friend bool isUsbBusy(const Printer &p, const Scanner &s);


};


#endif //LAB2_PRINTER_H

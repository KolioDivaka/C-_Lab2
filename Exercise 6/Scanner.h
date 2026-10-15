//
// Created by Kolio on 10/8/2026.
//

#ifndef LAB2_SCANNER_H
#define LAB2_SCANNER_H
#include <iostream>

#include "Printer.h"


class Printer;

class Scanner {
    private: bool usbInUse;
    public:
    Scanner() {
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


#endif //LAB2_SCANNER_H

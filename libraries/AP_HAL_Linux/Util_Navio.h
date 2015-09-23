#pragma once

#include "Util.h"

class Linux::LinuxUtilNavio : public Linux::LinuxUtil {
public:
    LinuxUtilNavio();
    /* return the Raspberry Pi version */
    int get_rpi_version() const;

protected:
    // Called in the constructor once
    int _check_rpi_version();

private:
    int _rpi_version = 0;
};

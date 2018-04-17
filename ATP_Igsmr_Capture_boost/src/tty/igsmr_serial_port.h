#ifndef __igsmr_serial_port_h
#define __igsmr_serial_port_h

#include "boost/shared_ptr.hpp"
#include "tty_reader.h"
#include "collection_data.h"

class IgsmrSerialPort: public TtyReader {
public:
    enum SourceType {
        DTE = 0,
        DCE = 1,
    };

private:
    int mt_index_;              // MTIndex
    SourceType data_source_;    // DataSource

public:
    IgsmrSerialPort(int mt_index, SourceType data_source);

    boost::shared_ptr<CollectionData> readData(); 
};

#endif

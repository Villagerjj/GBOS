#include <gb/gb.h>
// extra system variables
uint8_t ChkDsk;
BOOLEAN UsedClusters[250];
uint8_t IDCords[360];

//icon cords stores the icon data, nothing more, nothing less
//uint8_t ProIDCords[360];
// stores the id of a program at the propper cords.
uint8_t RAMDISK[360];
//uint32_t DISKSPACE;
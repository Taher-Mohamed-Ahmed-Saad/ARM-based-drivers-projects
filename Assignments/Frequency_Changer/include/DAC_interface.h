/*////////////////////////////////////////////////////////////////////////////// */
/* Author : Eslam Ehab Aboutaleb                                                 */
/* Version: V01                                                                  */
/* Date: 21-9-2020                                                               */
/*////////////////////////////////////////////////////////////////////////////// */

#ifndef DAC_INTERFACE_H
#define DAC_INTERFACE_H

/************************************************************************************************************* */

void DAC_vInit(void);
void DAC_vConvert(const uint8 *Sound , uint16 SoundSize);

#endif

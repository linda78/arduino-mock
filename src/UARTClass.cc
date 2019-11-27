/* 
 * File:   UARTClass.cpp
 * Author: Linda.Muemken
 * 
 * Created on 21. November 2019, 08:30
 */

#include "arduino-mock/UARTClass.h"

//static UArtClassMock* gUArtClassMock = NULL;
//UArtClassMock* UArtClassMockInstance() {
//  if(!gUArtClassMock) {
//    gUArtClassMock = new UArtClassMock();
//  }
//  return gUArtClassMock;
//}
//
//void releaseUArtClassMock() {
//  if(gUArtClassMock) {
//    delete gUArtClassMock;
//    gUArtClassMock = NULL;
//  }
//}
//
//
//bool UArtClass_::printToCout = false;
//
//void UArtClass_::setPrintToCout(bool flag) {
//  printToCout = flag;
//}
//
//void UArtClass_::begin(uint32_t baud_count) {
//  assert (gUArtClassMock != NULL);
//  gUArtClassMock->begin(bad_count);
//}
//
//void UArtClass_::begin(uint32_t baud_count, uint8_t config) {
//  assert (gUArtClassMock != NULL);
//  gUArtClassMock->begin(bad_count, config);
//}
//
//void UArtClass_::end() {
//  assert (gUArtClassMock != NULL);
//  gUArtClassMock->end();
//}
//
//int UArtClass_::available() {
//  assert (gUArtClassMock != NULL);
//  return gUArtClassMock->available();
//}
//
//int UArtClass_::availableForWrite() {
//  assert (gUArtClassMock != NULL);
//  return gUArtClassMock->availableForWrite();
//}
//
//size_t UArtClass_::write(uint8_t n) {
//  if (printToCout) {
//    std::cout << n;
//    return 0;
//  }
//  assert (gUArtClassMock != NULL);
//  return gUArtClassMock->print(n);
//}
//
//size_t UArtClass_::write(const uint8_t *buffer, size_t size) {
//  if (printToCout) {
//    std::cout << buffer;
//    return 0;
//  }
//  assert (gUArtClassMock != NULL);
//  return gUArtClassMock->print(buffer, size);
//}
//
//// Preinstantiate Objects
//UArtClass_ Serial;

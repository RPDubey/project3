#ifndef SOURCE_LOGGER_H_
#define SOURCE_LOGGER_H_

#include"circbuf.h"
#include"common.h"





/*************************************************************************
@brief:BLocked logging through UART

Takes a pointer to a sequence of bytes, length, and logs it out through UART
@param:pointer to dat, num of data
@return:return_enum
*************************************************************************/
return_enum log_data(unsigned_byte*,size_t);



/*************************************************************************
@brief:BLocked logging through UART

Takes a C string, logs it out through UART to terminal
@param:pointer to string array
@return:return_enum
*************************************************************************/
return_enum log_string(char*);




/*************************************************************************
@brief:BLocked logging through UART

Takes an integer and logs it out through UART using itoa()
@param:integer
@return:return_enum
*************************************************************************/
return_enum log_integer(int);



/*************************************************************************
@brief:BLocked logging through UART

blocks until current buffer is empty
@param:none
@return:return_enum
*************************************************************************/
return_enum log_flush();


/*************************************************************************
@brief:Non BLocked logging through Buffer

stores logging data in circular buffer
@param:pointer to data to be logged, C buffer to be logged into
@return:return_enum
*************************************************************************/
CB_enum log_item(log_data_struct* , CB_t*);


#endif /* SOURCE_LOGGER_H_ */

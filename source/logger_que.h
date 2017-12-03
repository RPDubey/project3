/*******************************************************************************
@file:logger_q.h
@brief:An abstraction for circular buffer operations implemented in cirLQuf.c

This file provides definitions for functions and external variables of file
cirLQuf.c
@author:Ravi Dubey
@date:10/21/2017
*******************************************************************************/


#ifndef SOURCE_LOGGER_QUE_H_
#define SOURCE_LOGGER_QUE_H_

#include"stdlib.h"
#include"common.h"

/*******************************************************************************
@brief:Implements adding items to circular buffer
This function takes data to be added to the circular buffer and the poiner to
the circulr buffer and adds the data to this LQ.
@param:Pointer to LQ, pointer to data to be added to this LQ
@return:CB_enum enumaration that specifies success failure etc.
*******************************************************************************/
CB_enum LQ_buffer_add_item( LQ_t* , log_data_struct );


/*******************************************************************************
@brief:Implements removing items from circular buffer
This function gives pointer to the circular buffer from which the data has to be
removed and the variable in which the removed data has to be stored.
@param:Pointer to LQ, pointer to the variable where popped data has to be saved
@return:CB_enum enumaration that specifies success failure etc.
*******************************************************************************/
CB_enum LQ_buffer_remove_item(LQ_t* , log_data_struct*);


/*******************************************************************************
@brief:Implements checking whether circular buffer is full
This function takes poiner tothe circulr buffer and checks for full state.
@param:Pointer to LQ
@return:CB_enum enumaration that specifies success failure etc.
*******************************************************************************/
CB_enum LQ_is_full(LQ_t*);



/*******************************************************************************
@brief:Implements checking whether circular buffer is Empty
This function takes poiner tothe circulr buffer and checks for Empty state.
@param:Pointer to LQ
@return:CB_enum enumaration that specifies success failure etc.
*******************************************************************************/
CB_enum LQ_is_empty(LQ_t*);


/*******************************************************************************
@brief:Implements seeking data in circular buffer at particular location
This function takes pointer to a circular buffer, and position from head to peek
into and  pointer where this data will be stored.
@param:Pointer to LQ,position from head to seek into, pointer to adress where
the data has to be stored.
@return:CB_enum enumaration that specifies success failure etc.
*******************************************************************************/
CB_enum LQ_peek(LQ_t* ,size_t, log_data_struct* );



/*******************************************************************************
@brief:Implements initiatin a circular buffer
This function poiner to the circulr buffer and size to be reserved for the LQ
in Bytes.
@param:Pointer to LQ, size of buffer in bytes.
@return:CB_enum enumaration that specifies success failure etc.
*******************************************************************************/
CB_enum LQ_init(LQ_t* LQ_ptr , size_t LQ_size);



/*******************************************************************************
@brief:Implements destroying the circular buffer
This function takes pointer to the circular buffer to be destroyed
@param:Pointer to LQ
@return:CB_enum enumaration that specifies success failure etc.
*******************************************************************************/
CB_enum LQ_destroy(LQ_t* LQ_ptr);


/*******************************************************************************
@brief:Implements printinting LQ functions returns
This function takes return of type CB_enum
@param:CB_enum type enum
@return:void
*******************************************************************************/
void print_CB_enum(CB_enum);


#endif /* SOURCE_LOGGER_QUE_H_ */

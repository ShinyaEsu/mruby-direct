/*
** mrb_direct.c - Direct class
**
** Copyright (c) Shinya Esu 2014
**
** See Copyright Notice in LICENSE
*/

#include <stdio.h>
#include <stdint.h>
#include "direct.h"

uint8_t direct_write8(volatile uint8_t *addr, uint8_t dat)
{
	*addr = dat;
	return dat;
}

uint8_t direct_set_bit8(volatile uint8_t *addr, uint8_t dat)
{
	*addr |= dat;
	return dat;
}

uint8_t direct_clear_bit8(volatile uint8_t *addr, uint8_t dat)
{
	*addr &= ~dat;
	return dat;
}

uint16_t direct_write16(volatile uint16_t *addr, uint16_t dat)
{
	*addr = dat;
	return dat;
}

uint16_t direct_set_bit16(volatile uint16_t *addr, uint16_t dat)
{
	*addr |= dat;
	return dat;
}

uint16_t direct_clear_bit16(volatile uint16_t *addr, uint16_t dat)
{
	*addr &= ~dat;
	return dat;
}

uint32_t direct_write32(volatile uint32_t *addr, uint32_t dat)
{
	*addr = dat;
	return dat;
}

uint32_t direct_set_bit32(volatile uint32_t *addr, uint32_t dat)
{
	*addr |= dat;
	return dat;
}

uint32_t direct_clear_bit32(volatile uint32_t *addr, uint32_t dat)
{
	*addr &= ~dat;
	return dat;
}

uint8_t direct_read8(volatile uint8_t *addr)
{
	return *addr;
}


uint16_t direct_read16(volatile uint16_t *addr)
{
	return *addr;
}


uint32_t direct_read32(volatile uint32_t *addr)
{
	return *addr;
}

uint8_t direct_check_bit8(volatile uint8_t *addr,uint8_t dat)
{
	return ((*addr & dat) ? 1 : 0);
}

uint8_t direct_check_bit16(volatile uint16_t *addr,uint16_t dat)
{
	return ((*addr & dat) ? 1 : 0);
}

uint8_t direct_check_bit32(volatile uint32_t *addr,uint32_t dat)
{
	return ((*addr & dat) ? 1 : 0);
}

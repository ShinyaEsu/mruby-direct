/*
** mrb_direct.c - Direct class
**
** Copyright (c) Shinya Esu 2014
**
** See Copyright Notice in LICENSE
*/

#include <stdint.h>
#include "mruby.h"
#include "mruby/data.h"
#include "mrb_direct.h"
#include "direct.h"

uint32_t 
mrb_direct_get_address32(mrb_state *mrb,mrb_value val)
{
	uint32_t addr;

	if (mrb_fixnum_p(val))
	{
		addr = (uint32_t)(mrb_cptr(val));
	}
	else
	if (mrb_float_p(val))
	{
		addr = (uint32_t)(mrb_float(val));
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
	}

	return addr;
}
uint8_t
mrb_direct_get_data8(mrb_state *mrb,mrb_value val)
{
	uint8_t dat;
	dat = (uint8_t)(mrb_fixnum(val));
	return dat;
}
uint16_t
mrb_direct_get_data16(mrb_state *mrb,mrb_value val)
{
	uint16_t dat;
	dat = (uint16_t)(mrb_fixnum(val));
	return dat;
}
uint32_t
mrb_direct_get_data32(mrb_state *mrb,mrb_value val)
{
	uint32_t dat;
	if (mrb_fixnum_p(val))
	{
		dat = (uint32_t)(mrb_cptr(val));
	}
	else
	if (mrb_float_p(val))
	{
		dat = (uint32_t)(mrb_float(val));
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
	}
	return dat;
}

mrb_value
mrb_direct_write8(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint8_t *addr;
	uint8_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint8_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = mrb_direct_get_data8(mrb,argv[1]);

		direct_write8(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_set8(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint8_t *addr;
	uint8_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint8_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = mrb_direct_get_data8(mrb,argv[1]);

		direct_set8(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_clear8(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint8_t *addr;
	uint8_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint8_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = mrb_direct_get_data8(mrb,argv[1]);

		direct_clear8(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_write16(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint16_t *addr;
	uint16_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint16_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = mrb_direct_get_data16(mrb,argv[1]);
		direct_write16(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_set16(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint16_t *addr;
	uint16_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint16_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = mrb_direct_get_data16(mrb,argv[1]);

		direct_set16(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_clear16(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint16_t *addr;
	uint16_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint16_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = mrb_direct_get_data16(mrb,argv[1]);

		direct_clear16(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_write32(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint32_t *addr;
	uint32_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint32_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = (uint32_t)(mrb_direct_get_data32(mrb,argv[1]));

		direct_write32(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_set32(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint32_t *addr;
	uint32_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint32_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = (uint32_t)(mrb_direct_get_data32(mrb,argv[1]));

		direct_set32(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_clear32(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint32_t *addr;
	uint32_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint32_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = (uint32_t)(mrb_direct_get_data32(mrb,argv[1]));

		direct_clear32(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_read8(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint8_t *addr;
	uint8_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 1)
	{
		addr = (volatile uint8_t *)mrb_direct_get_address32(mrb,argv[0]);

		dat = direct_read8(addr);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return mrb_fixnum_value(dat);
}

mrb_value
mrb_direct_read16(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint16_t *addr;
	uint16_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 1)
	{
		addr = (volatile uint16_t *)mrb_direct_get_address32(mrb,argv[0]);

		dat = direct_read16(addr);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return mrb_fixnum_value(dat);
}

mrb_value
mrb_direct_read32(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint32_t *addr;
	uint32_t dat;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 1)
	{
		addr = (volatile uint32_t *)mrb_direct_get_address32(mrb,argv[0]);

		dat = direct_read32(addr);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return mrb_fixnum_value(dat);
}

mrb_value
mrb_direct_check8(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint8_t *addr;
	uint8_t dat;
	int ret_val;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint8_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = mrb_direct_get_data8(mrb,argv[1]);

		ret_val = direct_check8(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	if (ret_val==1)
	{
		return mrb_true_value();
	}
	else
	{
		return mrb_false_value();
	}
}

mrb_value
mrb_direct_check16(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint16_t *addr;
	uint16_t dat;
	int ret_val;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint16_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = mrb_direct_get_data16(mrb,argv[1]);

		ret_val = direct_check16(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	if (ret_val==1)
	{
		return mrb_true_value();
	}
	else
	{
		return mrb_false_value();
	}
}

mrb_value
mrb_direct_check32(mrb_state *mrb, mrb_value self)
{
	mrb_value *argv;
	mrb_int argc;
	int iargc;
	volatile uint32_t *addr;
	uint32_t dat;
	int ret_val;

	mrb_get_args(mrb, "*",&argv, &argc);
	iargc = (int)argc;

	if (iargc == 2)
	{
		addr = (volatile uint32_t *)mrb_direct_get_address32(mrb,argv[0]);
		dat = (uint32_t)(mrb_direct_get_data32(mrb,argv[1]));

		ret_val = direct_check32(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	if (ret_val==1)
	{
		return mrb_true_value();
	}
	else
	{
		return mrb_false_value();
	}
}

void
mrb_mruby_direct_gem_init(mrb_state *mrb)
{
	struct RClass *direct;

	direct = mrb_define_module(mrb, "Direct");
	mrb_define_class_method(mrb, direct, "write8", mrb_direct_write8, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "set8", mrb_direct_set8, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "clear8", mrb_direct_clear8, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "write16", mrb_direct_write16, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "set16", mrb_direct_set16, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "clear16", mrb_direct_clear16, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "write32", mrb_direct_write32, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "set32", mrb_direct_set32, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "clear32", mrb_direct_clear32, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "read8", mrb_direct_read8, ARGS_REQ(1));
	mrb_define_class_method(mrb, direct, "read16", mrb_direct_read16, ARGS_REQ(1));
	mrb_define_class_method(mrb, direct, "read32", mrb_direct_read32, ARGS_REQ(1));
	mrb_define_class_method(mrb, direct, "check8", mrb_direct_check8, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "check16", mrb_direct_check16, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "check32", mrb_direct_check32, ARGS_REQ(2));
}

void
mrb_mruby_direct_gem_final(mrb_state *mrb)
{
}

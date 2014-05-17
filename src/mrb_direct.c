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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint8_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint8_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = (uint8_t)(mrb_fixnum(argv[1]));

		direct_write8(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_set_bit8(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint8_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint8_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = (uint8_t)(mrb_fixnum(argv[1]));

		direct_set_bit8(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_clear_bit8(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint8_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint8_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = (uint8_t)(mrb_fixnum(argv[1]));

		direct_clear_bit8(addr, dat);
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint16_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint16_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = (uint16_t)(mrb_fixnum(argv[1]));

		direct_write16(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_set_bit16(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint16_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint16_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = (uint16_t)(mrb_fixnum(argv[1]));

		direct_set_bit16(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_clear_bit16(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint16_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint16_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = (uint16_t)(mrb_fixnum(argv[1]));

		direct_clear_bit16(addr, dat);
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint32_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint32_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		if (mrb_fixnum_p(argv[1]))
		{
			dat = (uint32_t)(mrb_cptr(argv[1]));
		}
		else
		if (mrb_float_p(argv[1]))
		{
			dat = (uint32_t)(mrb_float(argv[1]));
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		direct_write32(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_set_bit32(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint32_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint32_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		if (mrb_fixnum_p(argv[1]))
		{
			dat = (uint32_t)(mrb_fixnum(argv[1]));
		}
		else
		if (mrb_float_p(argv[1]))
		{
			dat = (uint32_t)(mrb_float(argv[1]));
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		direct_set_bit32(addr, dat);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
}

mrb_value
mrb_direct_clear_bit32(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint32_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint32_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		if (mrb_fixnum_p(argv[1]))
		{
			dat = (uint32_t)(mrb_fixnum(argv[1]));
		}
		else
		if (mrb_float_p(argv[1]))
		{
			dat = (uint32_t)(mrb_float(argv[1]));
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		direct_clear_bit32(addr, dat);
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint8_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint8_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint16_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint16_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint32_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint32_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = direct_read32(addr);
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return mrb_fixnum_value(dat);
}

mrb_value
mrb_direct_check_bit8(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint8_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint8_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = (uint8_t)(mrb_fixnum(argv[1]));

		ret_val = direct_check_bit8(addr, dat);
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
mrb_direct_check_bit16(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint16_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint16_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		dat = (uint16_t)(mrb_fixnum(argv[1]));

		ret_val = direct_check_bit16(addr, dat);
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
mrb_direct_check_bit32(mrb_state *mrb, mrb_value self)
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
		if (mrb_fixnum_p(argv[0]))
		{
			addr = (volatile uint32_t *)(mrb_cptr(argv[0]));
		}
		else
		if (mrb_float_p(argv[0]))
		{
			uint32_t tmp = (volatile uint32_t)(mrb_float(argv[0]));
			addr = (volatile uint32_t *)tmp;
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		if (mrb_fixnum_p(argv[1]))
		{
			dat = (uint32_t)(mrb_fixnum(argv[1]));
		}
		else
		if (mrb_float_p(argv[1]))
		{
			dat = (uint32_t)(mrb_float(argv[1]));
		}
		else
		{
			mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong argument");
		}

		ret_val = direct_check_bit32(addr, dat);
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
	mrb_define_class_method(mrb, direct, "set_bit8", mrb_direct_set_bit8, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "clear_bit8", mrb_direct_clear_bit8, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "write16", mrb_direct_write16, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "set_bit16", mrb_direct_set_bit16, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "clear_bit16", mrb_direct_clear_bit16, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "write32", mrb_direct_write32, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "set_bit32", mrb_direct_set_bit32, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "clear_bit32", mrb_direct_clear_bit32, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "read8", mrb_direct_read8, ARGS_REQ(1));
	mrb_define_class_method(mrb, direct, "read16", mrb_direct_read16, ARGS_REQ(1));
	mrb_define_class_method(mrb, direct, "read32", mrb_direct_read32, ARGS_REQ(1));
	mrb_define_class_method(mrb, direct, "check_bit8", mrb_direct_check_bit8, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "check_bit16", mrb_direct_check_bit16, ARGS_REQ(2));
	mrb_define_class_method(mrb, direct, "check_bit32", mrb_direct_check_bit32, ARGS_REQ(2));
}

void
mrb_mruby_direct_gem_final(mrb_state *mrb)
{
}

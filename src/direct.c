#include <stdint.h>
#include "mruby.h"

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
		addr = (volatile uint8_t *)(mrb_fixnum(argv[0]));
		dat = (uint8_t)(mrb_fixnum(argv[1]));
		*addr = dat;
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
		addr = (volatile uint8_t *)(mrb_fixnum(argv[0]));
		dat = (uint8_t)(mrb_fixnum(argv[1]));
		*addr |= dat;
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
		addr = (volatile uint8_t *)(mrb_fixnum(argv[0]));
		dat = (uint8_t)(mrb_fixnum(argv[1]));
		*addr &= ~dat;
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
		addr = (volatile uint16_t *)(mrb_fixnum(argv[0]));
		dat = (uint16_t)(mrb_fixnum(argv[1]));
		*addr = dat;
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
		addr = (volatile uint16_t *)(mrb_fixnum(argv[0]));
		dat = (uint16_t)(mrb_fixnum(argv[1]));
		*addr |= dat;
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
		addr = (volatile uint16_t *)(mrb_fixnum(argv[0]));
		dat = (uint16_t)(mrb_fixnum(argv[1]));
		*addr &= ~dat;
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
		addr = (volatile uint32_t *)(mrb_fixnum(argv[0]));
		dat = (uint32_t)(mrb_fixnum(argv[1]));
		*addr = dat;
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
		addr = (volatile uint32_t *)(mrb_fixnum(argv[0]));
		dat = (uint32_t)(mrb_fixnum(argv[1]));
		*addr |= dat;
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
		addr = (volatile uint32_t *)(mrb_fixnum(argv[0]));
		dat = (uint32_t)(mrb_fixnum(argv[1]));
		*addr &= ~dat;
	}
	else
	{
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");
	}

	return self;
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
}

void
mrb_mruby_direct_gem_final(mrb_state *mrb)
{
}

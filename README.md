# mruby-direct  
Direct class
## install by mrbgems 
- add conf.gem line to `build_config.rb` 

```ruby
MRuby::Build.new do |conf|

    # ... (snip) ...

    conf.gem :git => 'https://github.com/ShinyaEsu/mruby-direct.git'
end
```
## example 
```ruby
include Direct

# GPIO addr(from stm32f4.h)
PERIPH_BASE = 0x40000000
AHB1PERIPH_BASE = PERIPH_BASE + 0x00020000
GPIOD_BASE = AHB1PERIPH_BASE + 0x0C00
GPIOD_BSRRL = GPIOD_BASE + 0x18
GPIOD_BSRRH = GPIOD_BASE + 0x1A

# GPIO pin(from stm32f4xx_gpio.h)
GPIO_PIN12 = 0x1000
GPIO_PIN13 = 0x2000
GPIO_PIN14 = 0x4000
GPIO_PIN15 = 0x8000

# LED1 ON
write16(GPIOD_BSRRL,GPIO_PIN12)
# LED1 OFF
write16(GPIOD_BSRRH,GPIO_PIN12)
```

## License
under the MIT License:
- see LICENSE file

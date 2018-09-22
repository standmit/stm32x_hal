#ifndef STM32_MPU6050LIB_STM32X_HAL_STM32X_HAL_H_
#define STM32_MPU6050LIB_STM32X_HAL_STM32X_HAL_H_

#if 	defined (STM32F030x6) || \
		defined (STM32F030x8) || \
    	defined (STM32F031x6) || \
		defined (STM32F038xx) || \
    	defined (STM32F042x6) || \
		defined (STM32F048xx) || \
		defined (STM32F070x6) || \
    	defined (STM32F051x8) || \
		defined (STM32F058xx) || \
    	defined (STM32F071xB) || \
		defined (STM32F072xB) || \
		defined (STM32F078xx) || \
		defined (STM32F070xB) || \
    	defined (STM32F091xC) || \
		defined (STM32F098xx) || \
		defined (STM32F030xC)
#include "stm32f0xx_hal.h"

#elif 	defined (STM32F100xB) || \
		defined (STM32F100xE) || \
		defined (STM32F101x6) || \
		defined (STM32F101xB) || \
		defined (STM32F101xE) || \
		defined (STM32F101xG) || \
		defined (STM32F102x6) || \
		defined (STM32F102xB) || \
		defined (STM32F103x6) || \
		defined (STM32F103xB) || \
		defined (STM32F103xE) || \
		defined (STM32F103xG) || \
		defined (STM32F105xC) || \
		defined (STM32F107xC)
#include "stm32f1xx_hal.h"

#elif	defined (STM32F205xx) || \
		defined (STM32F215xx) || \
		defined (STM32F207xx) || \
		defined (STM32F217xx)
#include "stm32f2xx_hal.h"

#elif	defined (STM32F301x8) || \
		defined (STM32F302x8) || \
		defined (STM32F318xx) || \
		defined (STM32F302xC) || \
		defined (STM32F303xC) || \
		defined (STM32F358xx) || \
		defined (STM32F303x8) || \
		defined (STM32F334x8) || \
		defined (STM32F328xx) || \
		defined (STM32F302xE) || \
		defined (STM32F303xE) || \
		defined (STM32F398xx) || \
		defined (STM32F373xC) || \
		defined (STM32F378xx)
#include "stm32f3xx_hal.h"

#elif	defined (STM32F405xx) || \
		defined (STM32F415xx) || \
		defined (STM32F407xx) || \
		defined (STM32F417xx) || \
		defined (STM32F427xx) || \
		defined (STM32F437xx) || \
		defined (STM32F429xx) || \
		defined (STM32F439xx) || \
		defined (STM32F401xC) || \
		defined (STM32F401xE) || \
		defined (STM32F410Tx) || \
		defined (STM32F410Cx) || \
		defined (STM32F410Rx) || \
		defined (STM32F411xE) || \
		defined (STM32F446xx) || \
		defined (STM32F469xx) || \
		defined (STM32F479xx) || \
		defined (STM32F412Cx) || \
		defined (STM32F412Rx) || \
		defined (STM32F412Vx) || \
		defined (STM32F412Zx) || \
		defined (STM32F413xx) || \
		defined (STM32F423xx)
#include "stm32f4xx_hal.h"

#elif	defined (STM32F756xx) || \
		defined (STM32F746xx) || \
		defined (STM32F745xx) || \
		defined (STM32F767xx) || \
		defined (STM32F769xx) || \
		defined (STM32F777xx) || \
		defined (STM32F779xx) || \
		defined (STM32F722xx) || \
		defined (STM32F723xx) || \
		defined (STM32F732xx) || \
		defined (STM32F733xx) || \
		defined (STM32F730xx) || \
		defined (STM32F750xx)
#include "stm32f7xx_hal.h"

#elif	defined (STM32H743xx) || \
		defined (STM32H753xx) || \
		defined (STM32H750xx)
#include "stm32h7xx_hal.h"

#elif	defined (STM32L011xx) || \
		defined (STM32L021xx) || \
		defined (STM32L031xx) || \
		defined (STM32L041xx) || \
		defined (STM32L051xx) || \
		defined (STM32L052xx) || \
		defined (STM32L053xx) || \
		defined (STM32L061xx) || \
		defined (STM32L062xx) || \
		defined (STM32L063xx) || \
		defined (STM32L071xx) || \
		defined (STM32L072xx) || \
		defined (STM32L073xx) || \
		defined (STM32L081xx) || \
		defined (STM32L082xx) || \
		defined (STM32L083xx)
#include "stm32l0xx_hal.h"

#else
#warning Target MCU is undefined. The __FILE__ is useless.

#endif

#endif /* STM32_MPU6050LIB_STM32X_HAL_STM32X_HAL_H_ */

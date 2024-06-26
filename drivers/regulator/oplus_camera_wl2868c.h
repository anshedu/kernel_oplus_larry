#ifndef _WL2868C_H_
#define _WL2868C_H_

#define WL2868C_CHIP_REV_ADDR    0x00
#define FAN53870_CHIP_REV_ADDR   0x01
#define WL28681C_CHIP_REV_ADDR   0x00

#define WL2868C_DIC_ADDR         0x02

#define WL2868C_LDO_I2C_ADDR     0x2F
#define FAN53870_LDO_I2C_ADDR    0x35
#define WL28681C_LDO_I2C_ADDR    0x35

#define CAMERA_LDO_WL2868C  0x82 //VERID
#define CAMERA_LDO_FAN53870 0x01
#define CAMERA_LDO_WL28681C  0x0D //VERID

#define LDO1_OUT_ADDR    0x04 //EXT_LDO1

#define WL2868C_LDO1_OUT_ADDR    0x03 //EXT_LDO1

#define WL28681C_LDO1_OUT_ADDR   0x04 //EXT_LDO1

#define LDO21_SEQ_ADDR   0x0B
#define LDO43_SEQ_ADDR   0x0C
#define LDO65_SEQ_ADDR   0x0D
#define LDO07_SEQ_ADDR   0x0E

#define WL2868C_LDO21_SEQ_ADDR   0x0A
#define WL2868C_LDO43_SEQ_ADDR   0x0B
#define WL2868C_LDO65_SEQ_ADDR   0x0C
#define WL2868C_LDO07_SEQ_ADDR   0x0D

#define FAN53870_LDO_EN_ADDR         0x03  //bit0:LDO1 ~ bit6:LDO7
#define WL2868C_LDO_EN_ADDR          0x0E  //bit0:LDO1 ~ bit6:LDO7
#define WL28681C_LDO_EN_ADDR         0x03  //bit0:LDO1 ~ bit6:LDO7
#define WL2868C_LDO_SEQ_CTRL_ADDR    0x0F

#define WL2868C_PRINT pr_info //printk

typedef enum {
	EXT_NONE=-1,
	EXT_LDO1,
	EXT_LDO2,
	EXT_LDO3,
	EXT_LDO4,
	EXT_LDO5,
	EXT_LDO6,
	EXT_LDO7,
	EXT_MAX
} EXT_SELECT;

/* DTS state */
typedef enum {
	WL2868C_GPIO_STATE_ENP0,
	WL2868C_GPIO_STATE_ENP1,
	WL2868C_GPIO_STATE_MAX,	/* for array size */
} WL2868C_GPIO_STATE;

#endif /* _WL2868C_H_*/


SPI_CLK      = 0
SPI_MOSI     = 1
SPI_MISO     = 2
SPI_CS       = 3
RST_N        = 4
UNUSED0      = 5
LOCK_DETECT  = 6
DEBUG        = 7

I2C_SCL      = 8
I2C_SDA_IN   = 9
I2C_SDA_OUT  = 10
PWR_CTRL0    = 11
PWREN_A      = 12
PWR_CTRL1    = 13
PWREN_B      = 14
NOTRESET     = 15

AGC_GAIN0    = 16
AGC_GAIN1    = 17
AGC_GAIN2    = 18
AGC_GAIN3    = 19
AGC_GAIN4    = 20
AGC_GAIN5    = 21
AGC_GAIN6    = 22
AGC_IRQ      = 23

AGC_CMD0     = 24
AGC_CMD1     = 25
AGC_CMD2     = 26
AGC_CLK      = 27
TX_RX_SW     = 28
BF_RTN       = 29
BF_INC       = 30
BF_RST       = 31

# CTRL interface definitions
CTRL_MODES  = [0,1]
CTRL_DATA   = {'grp':None, 'shift':None, 'pins':None}
CTRL_STROBE = {'grp':'D', 'shift':4, 'pins':{0:0x10, 1:0x10, 2:None, 3:None}}


# Pin used for device reset
DEVICE_NRESET_PIN = NOTRESET

# Moderboard type
MB_TYPE = 'MB1'

# FTDI initial and final pin state
# ADBUS
GPIO_STATE_INITIAL_A = 0x00008fdb
GPIO_STATE_FINAL_A = 0x8fdb0000
GPIO_STATE_A = GPIO_STATE_INITIAL_A + GPIO_STATE_FINAL_A

# BDBUS
GPIO_STATE_INITIAL_B = 0x00001313
GPIO_STATE_FINAL_B = 0x13130000
GPIO_STATE_B = GPIO_STATE_INITIAL_B + GPIO_STATE_FINAL_B

# CDBUS
GPIO_STATE_INITIAL_C = 0x000000ff
GPIO_STATE_C = GPIO_STATE_INITIAL_C

# DDBUS
GPIO_STATE_INITIAL_D = 0x000000ff
GPIO_STATE_D = GPIO_STATE_INITIAL_D
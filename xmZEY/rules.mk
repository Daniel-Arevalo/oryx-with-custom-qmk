# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NO_USB_STARTUP_CHECK = yes
NKRO_ENABLE = no
MOUSEKEY_ENABLE = no
TAP_DANCE_ENABLE = yes
SPACE_CADET_ENABLE = no
COMBO_ENABLE = yes
DYNAMIC_TAPPING_TERM_ENABLE = yes
LAYER_LOCK_ENABLE = yes
SRC += features/achordion.c

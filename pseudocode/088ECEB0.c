/* Entry 0x088ECEB0 | file offset 0x000E9E88 | FUN_088eceb0 | bytes 96 */

undefined4 FUN_088eceb0(undefined *param_1,undefined *param_2)

{
  PTR_FUN_089d7ef8 = param_1;
  PTR_FUN_089d7efc = param_2;
  if (DAT_089d7f00 == (undefined1 *)0x0) {
    DAT_089d7f00 = (undefined1 *)FUN_088820d8(0x1e0);
    if (DAT_089d7f00 == (undefined1 *)0x0) {
      return 0;
    }
    *DAT_089d7f00 = 0;
  }
  return 1;
}


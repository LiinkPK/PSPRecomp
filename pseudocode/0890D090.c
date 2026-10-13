/* Entry 0x0890D090 | file offset 0x0010A068 | FUN_0890d090 | bytes 388 */

void FUN_0890d090(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0x80;
  *(undefined1 *)((int)param_2 + 9) = 0x80;
  *param_2 = 0;
  if ((param_3 & 1) != 0) {
    param_2[1] = param_2[1] | 0x80;
  }
  if ((param_3 & 2) != 0) {
    param_2[1] = param_2[1] | 0x20;
  }
  if ((param_3 & 4) != 0) {
    param_2[1] = param_2[1] | 0x10;
  }
  if ((param_3 & 8) != 0) {
    param_2[1] = param_2[1] | 0x40;
  }
  if ((param_3 & 0x10) != 0) {
    param_2[1] = param_2[1] | 0x2000;
  }
  if ((param_3 & 0x20) != 0) {
    param_2[1] = param_2[1] | 0x4000;
  }
  if ((param_3 & 0x40) != 0) {
    param_2[1] = param_2[1] | 0x8000;
  }
  if ((param_3 & 0x80) != 0) {
    param_2[1] = param_2[1] | 0x1000;
  }
  if ((param_3 & 0x100) != 0) {
    param_2[1] = param_2[1] | 0x100;
  }
  if ((param_3 & 0x200) != 0) {
    param_2[1] = param_2[1] | 0x200;
  }
  if ((param_3 & 0x400) != 0) {
    param_2[1] = param_2[1] | 8;
  }
  if ((param_3 & 0x800) != 0) {
    param_2[1] = param_2[1] | 1;
  }
  if ((param_3 & 0x1000) != 0) {
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if ((param_3 & 0x2000) != 0) {
    *(undefined1 *)(param_2 + 2) = 0xff;
  }
  if ((param_3 & 0x4000) != 0) {
    *(undefined1 *)((int)param_2 + 9) = 0;
  }
  if ((param_3 & 0x8000) != 0) {
    *(undefined1 *)((int)param_2 + 9) = 0xff;
  }
  return;
}


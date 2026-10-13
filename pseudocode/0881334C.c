/* Entry 0x0881334C | file offset 0x00010324 | FUN_0881334c | bytes 104 */

void FUN_0881334c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 0;
  *param_3 = 0;
  switch(*(undefined1 *)(param_1 + 0x35)) {
  case 1:
  case 4:
  case 0x10:
  case 0x11:
  case 0x13:
    if (*(int *)(param_1 + 0x30) != 0) {
      *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c);
      *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x20);
    }
  }
  return;
}


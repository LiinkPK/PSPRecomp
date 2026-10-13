/* Entry 0x088133B4 | file offset 0x0001038C | FUN_088133b4 | bytes 104 */

void FUN_088133b4(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 0;
  *param_3 = 0;
  switch(*(undefined1 *)(param_1 + 0x35)) {
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x14:
    if (*(int *)(param_1 + 0x30) != 0) {
      *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x18);
      *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x20);
    }
  }
  return;
}


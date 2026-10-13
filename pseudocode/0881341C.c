/* Entry 0x0881341C | file offset 0x000103F4 | FUN_0881341c | bytes 104 */

void FUN_0881341c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  bVar1 = *(byte *)(param_1 + 0x35);
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      return;
    }
  }
  else if (bVar1 != 0x11) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x28);
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x2c);
  }
  return;
}


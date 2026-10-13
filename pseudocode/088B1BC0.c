/* Entry 0x088B1BC0 | file offset 0x000AEB98 | FUN_088b1bc0 | bytes 84 */

undefined4 FUN_088b1bc0(int param_1)

{
  undefined4 uVar1;
  int local_1c [4];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_1c[0] = param_1;
    uVar1 = FUN_088b1a78(DAT_089d728c,DAT_089d728c + *(int *)(DAT_089d7288 + 8) * 0x10,local_1c,0);
  }
  return uVar1;
}


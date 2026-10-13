/* Entry 0x088D804C | file offset 0x000D5024 | FUN_088d804c | bytes 96 */

undefined4 FUN_088d804c(undefined1 *param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  FUN_088d8030();
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    param_1[8] = param_3;
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}


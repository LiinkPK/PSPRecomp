/* Entry 0x0884F960 | file offset 0x0004C938 | FUN_0884f960 | bytes 120 */

void FUN_0884f960(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)(param_1 + 0x12) != 0) {
      FUN_0884eef4(param_1,param_2);
      FUN_088501d8(param_1,1);
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar1 < 0x10);
  return;
}


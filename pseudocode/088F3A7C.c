/* Entry 0x088F3A7C | file offset 0x000F0A54 | FUN_088f3a7c | bytes 156 */

void FUN_088f3a7c(int *param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  do {
    if (*piVar2 != 0) {
      FUN_088f37bc(param_1,param_2,iVar1);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x36;
  } while (iVar1 < 5);
  iVar1 = 1;
  do {
    if (iVar1 != 0x17) {
      FUN_088f3b80(param_1,iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x21);
  return;
}


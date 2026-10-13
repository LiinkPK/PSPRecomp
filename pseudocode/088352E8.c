/* Entry 0x088352E8 | file offset 0x000322C0 | FUN_088352e8 | bytes 112 */

int FUN_088352e8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_088350ac(param_1,param_2,iVar1);
    if (iVar2 == param_3) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar1 != 0);
  return 0;
}


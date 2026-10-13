/* Entry 0x0884417C | file offset 0x00041154 | FUN_0884417c | bytes 212 */

int FUN_0884417c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088444d4();
  if (iVar1 == 0) {
    iVar2 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),0xec,0,0,1,0);
    iVar1 = 0;
    if (iVar2 != 0) {
      FUN_08843c1c(iVar2);
      iVar1 = iVar2;
    }
    FUN_08843014(iVar1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_0884403c(iVar1);
  }
  return iVar1;
}


/* Entry 0x088442A0 | file offset 0x00041278 | FUN_088442a0 | bytes 256 */

int FUN_088442a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

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
    FUN_088430b8(iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_0884403c(iVar1);
  }
  return iVar1;
}


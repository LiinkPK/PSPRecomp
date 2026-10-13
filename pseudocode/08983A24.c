/* Entry 0x08983A24 | file offset 0x001809FC | FUN_08983a24 | bytes 144 */

bool FUN_08983a24(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0898d440(0x20);
  iVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0898c9e4(param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    FUN_0898c9a8(iVar1,param_3);
    iVar3 = iVar1;
  }
  *param_4 = iVar3;
  return iVar3 != 0;
}


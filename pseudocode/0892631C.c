/* Entry 0x0892631C | file offset 0x001232F4 | FUN_0892631c | bytes 300 */

void FUN_0892631c(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_08926048(param_1,(int)param_3);
  iVar2 = FUN_0885c9e4(uVar1,1,0x7773616d);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_0885ca98(uVar1,1,0x7773616d,iVar4);
      if (iVar3 == 0) {
        return;
      }
      FUN_0892624c(param_1,param_2,1,&DAT_089cea88,*(undefined4 *)(iVar3 + 8),
                   *(undefined4 *)(iVar3 + 0xc));
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}


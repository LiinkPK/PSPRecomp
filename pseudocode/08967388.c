/* Entry 0x08967388 | file offset 0x00164360 | FUN_08967388 | bytes 168 */

undefined4 FUN_08967388(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0896c8f0(0x50);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0896bd58(iVar1);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0896be68(iVar2,param_2,param_3,*(short *)(param_3 + 0xc) + 1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


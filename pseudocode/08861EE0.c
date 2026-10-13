/* Entry 0x08861EE0 | file offset 0x0005EEB8 | FUN_08861ee0 | bytes 152 */

void FUN_08861ee0(undefined4 param_1,int param_2,undefined4 param_3,short param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_089d6c30;
  iVar3 = 0;
  iVar2 = param_2 + 0x10;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      FUN_0889f040(uVar1,iVar2,(int)param_4,(int)(short)iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar3 < *(int *)(param_2 + 8));
  }
  return;
}


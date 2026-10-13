/* Entry 0x08926F08 | file offset 0x00123EE0 | FUN_08926f08 | bytes 296 */

void FUN_08926f08(undefined4 param_1,undefined4 param_2,undefined4 param_3,short param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = (int)param_4;
  iVar1 = FUN_08926c34(param_1,iVar3);
  FUN_089266f0(param_1,param_2,param_3,iVar3,iVar1);
  FUN_08926770(param_1,param_3,iVar1);
  iVar5 = iVar1 + param_6 * 4;
  puVar2 = *(ushort **)(iVar5 + 0x408);
  iVar4 = 0;
  iVar6 = 0;
  if (*puVar2 != 0) {
    do {
      FUN_08926dfc(param_1,param_3,(int)puVar2 + iVar6 + 4,param_5);
      puVar2 = *(ushort **)(iVar5 + 0x408);
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar4 < (int)(uint)*puVar2);
  }
  FUN_0892631c(param_1,param_2,iVar3);
  FUN_08926448(param_1,param_2,iVar3);
  FUN_08926d04(param_1,iVar1);
  return;
}


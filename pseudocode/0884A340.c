/* Entry 0x0884A340 | file offset 0x00047318 | FUN_0884a340 | bytes 276 */

int FUN_0884a340(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_08848078(DAT_089d4974,*(undefined4 *)(*(int *)(param_2 + 0x390) + 0x88));
  iVar1 = (**(code **)(*(int *)(param_2 + 0x544) + 0x124))
                    (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x120));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(param_2 + 0x544) + 0x134))
                      (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x130));
  }
  iVar4 = 0;
  while( true ) {
    iVar2 = FUN_088480d0(DAT_089d4974,iVar4);
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = FUN_08847f10(iVar2,param_2,iVar1);
    if (((iVar3 != 0) && ((*(uint *)(iVar2 + 0x18) & 0x2000) != 0)) &&
       (*(byte *)(iVar2 + 0x14) == param_3)) break;
    iVar4 = iVar4 + 1;
  }
  return iVar2;
}


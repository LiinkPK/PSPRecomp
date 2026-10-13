/* Entry 0x08808748 | file offset 0x00005720 | FUN_08808748 | bytes 392 */

void FUN_08808748(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_0880966c(param_1,param_2,param_3,param_4,iVar2 != 0);
    if (iVar1 != 0) {
      if ((*(uint *)(*(int *)(iVar1 + 0xc0) + 0x38) & 0x40) == 0) {
        FUN_088a7284(*param_5,param_5[1],param_5[2],iVar1);
      }
      else {
        FUN_088a6a38(0xbf800000,iVar1,2,param_2 + 0x4c8,0xffffffff,0xffffffff);
      }
      *(undefined4 *)(iVar1 + 0xe0) = DAT_089d5eac;
      FUN_08828638(iVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}


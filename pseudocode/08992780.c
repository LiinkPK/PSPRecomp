/* Entry 0x08992780 | file offset 0x0018F758 | FUN_08992780 | bytes 236 */

undefined4 FUN_08992780(int param_1,int *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  
  iVar1 = sceAtracGetStreamDataInfo(*(undefined4 *)(param_1 + 4));
  if (iVar1 < 0) {
    local_20 = 0;
    sceAtracGetInternalErrorInfo(*(undefined4 *)(param_1 + 4),&local_20);
    *param_3 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (0x20000 < *param_3) {
      *param_3 = 0x20000;
    }
    if ((uint)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc)) < *param_2 + *param_3) {
      *param_3 = (*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc)) - *param_2;
    }
    if (*(int *)(param_1 + 0x44) != *param_4) {
      uVar2 = 1;
      *(int *)(param_1 + 0x44) = *param_4;
    }
  }
  return uVar2;
}


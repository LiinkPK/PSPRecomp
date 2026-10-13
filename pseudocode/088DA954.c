/* Entry 0x088DA954 | file offset 0x000D792C | FUN_088da954 | bytes 236 */

int FUN_088da954(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  short local_20;
  short sStack_1e;
  
  iVar1 = DAT_089d7830;
  iVar2 = **(int **)(DAT_089d7830 + 0xc4ec);
  **(int **)(DAT_089d7830 + 0xc4ec) = 0;
  *(undefined4 *)(iVar1 + 0xc4ec) = *(undefined4 *)(*(int *)(iVar1 + 0xc4ec) + 4);
  local_20 = (short)param_3;
  sStack_1e = (short)((uint)param_3 >> 0x10);
  FUN_088d99dc(iVar2,param_1,param_2,(int)local_20,(int)sStack_1e);
  if (param_4 != '\0') {
    *(ushort *)(iVar2 + 0x20) = *(ushort *)(iVar2 + 0x20) | 0x100;
    *(ushort *)(iVar2 + 0x20) = *(ushort *)(iVar2 + 0x20) | 0x1000;
  }
  if (*param_1 == 0) {
    param_1[1] = iVar2;
    *param_1 = iVar2;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    iVar1 = param_1[2];
  }
  else {
    *(int *)(*param_1 + 0x40) = iVar2;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(int *)(iVar2 + 0x3c) = *param_1;
    iVar1 = param_1[2];
    *param_1 = iVar2;
  }
  param_1[2] = iVar1 + 1;
  return iVar2;
}


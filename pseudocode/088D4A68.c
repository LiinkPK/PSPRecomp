/* Entry 0x088D4A68 | file offset 0x000D1A40 | FUN_088d4a68 | bytes 268 */

void FUN_088d4a68(int *param_1,int param_2,int param_3,int param_4,undefined2 param_5,int param_6,
                 undefined1 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined2 *)(param_1 + 3) = param_5;
  param_1[4] = param_6;
  iVar1 = FUN_088da024(param_3);
  param_1[5] = iVar1;
  param_1[6] = 0;
  iVar2 = *param_1;
  iVar5 = (iVar1 * *(int *)(iVar2 + 0x18)) / (*(int *)(iVar2 + 0xc) + 1);
  if (iVar5 < iVar1) {
    iVar4 = param_1[4];
    if (iVar5 < iVar4) {
      iVar3 = *(int *)(iVar2 + 0x10);
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x10);
      iVar4 = iVar5;
    }
    param_1[6] = (iVar3 * (iVar1 - iVar4)) / ((*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x18)) + 1);
  }
  else {
    param_1[6] = 0;
    iVar4 = iVar1;
  }
  FUN_088d9aec((float)iVar4,param_1[1]);
  *(ushort *)(param_1[1] + 0x20) = *(ushort *)(param_1[1] + 0x20) & 0xfffd;
  FUN_088d4b74(param_1,param_7);
  return;
}


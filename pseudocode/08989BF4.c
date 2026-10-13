/* Entry 0x08989BF4 | file offset 0x00186BCC | FUN_08989bf4 | bytes 316 */

bool FUN_08989bf4(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_20;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  uVar6 = param_2[4];
  uVar4 = param_2[5];
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  iVar2 = DAT_09b6f478;
  uVar4 = *(undefined4 *)(DAT_09b6f478 + 0x18);
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = FUN_08971010(uVar4);
    iVar3 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
    uVar4 = *(undefined4 *)(iVar2 + 0x18);
    *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
  }
  iVar1 = FUN_08971134(uVar4,param_3 << 4,&local_20,1);
  if (iVar1 != 0) {
    iVar2 = iVar2 + (uint)*(ushort *)(*(int *)(*(int *)(iVar2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) + local_20;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return iVar1 != 0;
}


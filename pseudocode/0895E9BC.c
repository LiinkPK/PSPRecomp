/* Entry 0x0895E9BC | file offset 0x0015B994 | FUN_0895e9bc | bytes 336 */

void FUN_0895e9bc(undefined4 param_1,int param_2,int *param_3,uint param_4,float *param_5,
                 float *param_6)

{
  byte bVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar2 = (ushort *)*param_3;
  if ((param_4 & 2) == 0) {
    if ((param_4 & 1) != 0) {
      puVar2 = puVar2 + 1;
      *param_3 = (int)puVar2;
    }
  }
  else {
    puVar2 = puVar2 + 2;
    *param_3 = (int)puVar2;
  }
  if ((param_4 & 0x1c) == 0x1c) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)puVar2;
    pbVar3 = (byte *)(*param_3 + 4);
    *param_3 = (int)pbVar3;
  }
  else {
    if ((param_4 & 0x18) != 0x18) {
      bVar1 = (byte)*puVar2;
      goto LAB_0895ea98;
    }
    uVar4 = (uint)*puVar2;
    uVar5 = (int)uVar4 >> 4 & 0xf;
    uVar6 = (uVar4 & 0xf) << 4 | uVar4 & 0xf;
    uVar7 = (int)uVar4 >> 8 & 0xf;
    *(uint *)(param_2 + 8) = uVar6;
    uVar6 = uVar6 | (uVar5 << 4 | uVar5) << 8;
    *(uint *)(param_2 + 8) = uVar6;
    uVar6 = uVar6 | (uVar7 << 4 | uVar7) << 0x10;
    *(uint *)(param_2 + 8) = uVar6;
    *(uint *)(param_2 + 8) = uVar6 | (((int)uVar4 >> 0xc) << 4 | (int)uVar4 >> 0xc) << 0x18;
    pbVar3 = (byte *)(*param_3 + 2);
    *param_3 = (int)pbVar3;
  }
  bVar1 = *pbVar3;
LAB_0895ea98:
  *(float *)(param_2 + 0xc) = (float)bVar1 * *param_5 + *param_6;
  *(float *)(param_2 + 0x10) = (float)*(byte *)(*param_3 + 1) * param_5[1] + param_6[1];
  *(float *)(param_2 + 0x14) = (float)*(byte *)(*param_3 + 2) * param_5[2] + param_6[2];
  *param_3 = *param_3 + 4;
  return;
}


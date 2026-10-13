/* Entry 0x0886E86C | file offset 0x0006B844 | FUN_0886e86c | bytes 792 */

void FUN_0886e86c(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *local_30;
  uint local_2c;
  
  puVar6 = *(undefined4 **)(DAT_089d5f94 + 0xc);
  if (puVar6 != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x10;
    FUN_0886a6a4(param_1);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
    if ((param_3 != (int *)0x0) && (-1 < *param_3)) {
      uVar1 = FUN_0886f094(param_3);
      FUN_089b18fc(0,uVar7,uVar1);
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
      uVar7 = FUN_0886f094(param_3);
      uVar7 = FUN_089b0f44(uVar1,uVar7);
      uVar1 = FUN_0886b344(param_1,0xffffffff);
      FUN_089b0d1c(uVar1,uVar7);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
    }
    FUN_089b0cc4(uVar7,0);
    iVar8 = *(int *)(*(int *)(param_1 + 0x84) + 8);
    if ((param_3 != (int *)0x0) && (-1 < *param_3)) {
      iVar3 = 0;
      if (*(short *)(iVar8 + 0x20) != 0) {
        iVar4 = 0;
        do {
          iVar3 = iVar3 + 1;
          iVar5 = *(int *)(iVar8 + 0xc) + iVar4;
          *(undefined4 *)(iVar5 + 0x60) = 0;
          *(undefined4 *)(iVar5 + 100) = 0;
          *(undefined4 *)(iVar5 + 0x68) = 0;
          *(undefined4 *)(iVar5 + 0x6c) = 0x3f800000;
          iVar4 = iVar4 + 0x100;
        } while (iVar3 < (int)(uint)*(ushort *)(iVar8 + 0x20));
      }
      FUN_089b263c(iVar8,2);
      iVar8 = *(int *)(*(int *)(param_1 + 0x84) + 8);
    }
    FUN_089b2974(iVar8,0xfff);
    FUN_0886ac64(param_1);
    FUN_0886ac98(param_1);
    FUN_089b0d40(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),1,0);
    FUN_089b0d64(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),4,0);
    FUN_089b0d40(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),4,0xffffffff);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
    if ((param_2 == 0) || ((*(uint *)(param_2 + 0x48) & 1) == 0)) {
      FUN_089b0d40(uVar7,2,0);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
    }
    else {
      FUN_089b0d40(uVar7,2,0xffffffff);
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
    }
    FUN_089b0d88(uVar7,1,0);
    local_2c = 0x10000;
    local_30 = puVar6;
    FUN_089b46e8(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),&local_30,&local_2c,0xffff);
    *local_30 = 0xb000000;
    local_2c = (int)(local_30 + 1) + (0x3f - (int)puVar6) & 0xffffffc0;
    local_30 = local_30 + 1;
    uVar7 = FUN_0885c6cc(*(undefined4 *)(DAT_089d5f94 + 0x14),local_2c,0,0,1,0);
    uVar2 = local_2c;
    *(undefined4 *)(param_1 + 0x94) = uVar7;
    *(uint *)(param_1 + 0x9c) = local_2c;
    sceKernelDcacheWritebackRange(puVar6,local_2c);
    sceDmacMemcpy(uVar7,puVar6,uVar2);
    sceKernelDcacheInvalidateRange(uVar7,uVar2);
    uVar2 = FUN_089b0dd0(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
    if ((uVar2 & 0x1000) != 0) {
      FUN_0886b980(param_1);
    }
  }
  return;
}


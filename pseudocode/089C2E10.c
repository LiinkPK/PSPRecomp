/* Entry 0x089C2E10 | file offset 0x001BFDE8 | FUN_089c2e10 | bytes 740 */

void FUN_089c2e10(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 auStack_80 [12];
  float local_74;
  undefined1 auStack_70 [12];
  float local_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  int local_40;
  
  FUN_0896fb5c(param_5);
  uVar3 = FUN_08983db4(param_2,0,1,2);
  FUN_08983cd8(uVar3);
  FUN_089a03dc(9);
  FUN_08983b74(0);
  FUN_089a3918(auStack_60,
               *(int *)(DAT_09b6f478 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                      (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) + param_6) * 2) + 0x60,
               *(int *)(DAT_09b6f478 + 0x88) + 0x40);
  FUN_089a3a44(0x3c000000,auStack_50,param_3);
  FUN_089a3918(auStack_80,auStack_60,auStack_50);
  FUN_089a4aac(0,0x437f0000,auStack_80,auStack_80);
  FUN_089a3a44(0x3c000000,auStack_50,param_4);
  FUN_089a3918(auStack_70,auStack_60,auStack_50);
  FUN_089a4aac(0,0x437f0000,auStack_70,auStack_70);
  FUN_089a4aac(0,0x437f0000,auStack_80,auStack_80);
  FUN_089a4aac(0,0x437f0000,auStack_70,auStack_70);
  FUN_089a3918(auStack_80,&DAT_089da410,auStack_80);
  FUN_089a3918(auStack_70,&DAT_089da410,auStack_70);
  fVar2 = local_64;
  fVar1 = local_74;
  iVar5 = *param_1;
  uVar6 = param_1[1];
  iVar4 = FUN_08974a3c(*(undefined4 *)(DAT_09b6f478 + 0xb0),uVar6 << 5);
  if (iVar4 != 0) {
    uVar7 = 0;
    iVar8 = 0;
    if (uVar6 != 0) {
      iVar11 = iVar5 + 0x10;
      iVar10 = iVar5;
      do {
        if (*(char *)(iVar5 + 0x50) != '\0') {
          puVar12 = (undefined4 *)(iVar4 + iVar8 * 0x10);
          local_40 = iVar8 + 2;
          puVar9 = (undefined4 *)(iVar4 + (iVar8 + 1) * 0x10);
          FUN_089a34c0(puVar12 + 1,iVar10);
          local_74 = fVar1 * *(float *)(iVar5 + 0x44);
          uVar3 = FUN_089a48cc(auStack_80);
          *puVar12 = uVar3;
          FUN_089a34c0(puVar9 + 1,iVar11);
          local_64 = fVar2 * *(float *)(iVar5 + 0x44);
          uVar3 = FUN_089a48cc(auStack_70);
          *puVar9 = uVar3;
          iVar8 = local_40;
        }
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 0x60;
        iVar10 = iVar10 + 0x60;
        iVar11 = iVar11 + 0x60;
      } while (uVar7 < uVar6);
    }
    if (iVar8 != 0) {
      FUN_089a0520(1,0x19c,iVar8,0,iVar4);
    }
  }
  return;
}


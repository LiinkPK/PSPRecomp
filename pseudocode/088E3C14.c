/* Entry 0x088E3C14 | file offset 0x000E0BEC | FUN_088e3c14 | bytes 792 */

void FUN_088e3c14(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 local_1c0 [16];
  short local_180 [16];
  undefined4 local_160 [16];
  short local_120 [16];
  undefined4 local_100 [32];
  short local_80 [32];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  
  puVar10 = local_1c0;
  puVar11 = local_1c0;
  puVar12 = local_1c0;
  puVar13 = local_1c0;
  *(int *)(param_1 + 4) = param_2;
  iVar3 = FUN_0885c9a4(param_3,0x11);
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = FUN_0885ca3c(param_3,0x11,iVar9);
      *puVar10 = *(undefined4 *)(iVar4 + 8);
      *(short *)((int)puVar11 + 0x40) = (short)*(undefined4 *)(iVar4 + 0xc);
      iVar4 = FUN_0885ca3c(param_3,0xd,iVar9);
      if (iVar4 == 0) {
        puVar10[0x18] = 0;
        *(undefined2 *)((int)puVar11 + 0xa0) = 0;
      }
      else {
        puVar10[0x18] = *(undefined4 *)(iVar4 + 8);
        *(short *)((int)puVar11 + 0xa0) = (short)*(undefined4 *)(iVar4 + 0xc);
      }
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 1;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
    } while (iVar9 < iVar3);
  }
  iVar9 = FUN_0885c9a4(param_3,3);
  iVar4 = 0;
  if (0 < iVar9) {
    do {
      iVar5 = FUN_0885ca3c(param_3,3,iVar4);
      iVar4 = iVar4 + 1;
      *(undefined4 *)((int)puVar12 + 0xc0) = *(undefined4 *)(iVar5 + 8);
      puVar12 = (undefined4 *)((int)puVar12 + 4);
      *(short *)((int)puVar13 + 0x140) = (short)*(undefined4 *)(iVar5 + 0xc);
      puVar13 = (undefined4 *)((int)puVar13 + 2);
    } while (iVar4 < iVar9);
  }
  if (0 < iVar3) {
    iVar4 = 0;
    iVar5 = 0;
    iVar3 = param_1;
    if (*(char *)(param_2 + 2) != '\0') {
      do {
        psVar7 = (short *)(*(int *)(param_2 + 0x480) + iVar5);
        sVar2 = *psVar7;
        iVar8 = (int)psVar7[1];
        if ((iVar9 < 1) || (iVar9 <= iVar8)) {
          uVar6 = FUN_088cf188(DAT_089d7830,local_1c0[sVar2],(int)local_180[sVar2],0,0,
                               local_160[sVar2],(int)local_120[sVar2]);
          *(undefined4 *)(iVar3 + 0x60) = uVar6;
          bVar1 = *(byte *)(param_2 + 2);
        }
        else {
          uVar6 = FUN_088cf188(DAT_089d7830,local_1c0[sVar2],(int)local_180[sVar2],local_100[iVar8],
                               (int)local_80[iVar8],local_160[sVar2],(int)local_120[sVar2]);
          *(undefined4 *)(iVar3 + 0x60) = uVar6;
          bVar1 = *(byte *)(param_2 + 2);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
        iVar3 = iVar3 + 4;
      } while (iVar4 < (int)(uint)bVar1);
    }
  }
  iVar3 = FUN_0885ca98(param_3,1,0x74786574,0);
  if (iVar3 != 0) {
    local_40 = 0;
    local_3c = 0;
    iVar9 = FUN_08870bd4(*(undefined4 *)(iVar3 + 8),&local_40,&local_3c);
    if (iVar9 == 0) {
      local_40 = *(undefined4 *)(iVar3 + 8);
      local_3c = *(undefined4 *)(iVar3 + 0xc);
    }
    uVar6 = FUN_0885c6cc(param_4,local_3c,0,0,1,0);
    *(undefined4 *)(param_1 + 0x66c) = uVar6;
    FUN_08935524(uVar6,local_40,local_3c);
    local_38 = 0;
    iVar9 = FUN_0887b080(0x10);
    iVar3 = local_38;
    if (iVar9 != 0) {
      FUN_0887a61c(iVar9);
      iVar3 = iVar9;
    }
    *(int *)(param_1 + 0x390) = iVar3;
    FUN_0887ac24(iVar3,*(undefined4 *)(param_1 + 0x66c));
  }
  return;
}


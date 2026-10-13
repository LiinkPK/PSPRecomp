/* Entry 0x0897B560 | file offset 0x00178538 | FUN_0897b560 | bytes 748 */

void FUN_0897b560(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  iVar4 = *(int *)(param_4 + 0xc);
  uVar11 = *(undefined4 *)(DAT_089da27c + 0x3c);
  fVar12 = -*(float *)(DAT_089da27c + 0x30);
  fVar9 = -*(float *)(DAT_089da27c + 0x34);
  fVar10 = -*(float *)(DAT_089da27c + 0x38);
  FUN_089a405c(auStack_110,DAT_089da278);
  FUN_0896fb5c(auStack_110);
  iVar1 = FUN_0897ba50(param_3,param_4);
  if (iVar1 != 0) {
    local_34 = iVar4 + 0xc0;
    local_38 = iVar4 + 0x100;
    local_40 = iVar4 + 0xa0;
    local_3c = iVar4 + 0x60;
    iVar6 = iVar4 + 0x40;
    iVar8 = iVar4 + 0x140;
    iVar5 = iVar4 + 0x180;
    iVar7 = iVar4 + 0x120;
    iVar1 = iVar4 + 0x160;
    if (*(char *)(param_3 + 0x65) == '\0') {
      FUN_0897c030(param_4,local_34,local_38,iVar6,iVar8,iVar5,iVar7,iVar1);
      FUN_0897c27c(param_4,iVar6,iVar4,iVar1,iVar5);
      FUN_0897bde0(param_4,local_3c,local_40,iVar6,iVar8,iVar5,iVar7,iVar1);
      FUN_0897c4c8(param_4);
    }
    else {
      local_50 = *(undefined4 *)(param_3 + 0x58);
      iVar3 = *(int *)(param_2 + 0x8c);
      puVar2 = *(undefined1 **)
                (*(int *)(iVar3 + 0x48) +
                (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
      local_4c = local_50;
      local_48 = local_50;
      local_44 = local_50;
      local_30 = iVar4;
      FUN_08946ac4(0x3f800000,param_2,iVar3,*(undefined4 *)(iVar3 + 0x50),*puVar2,puVar2[1],
                   puVar2[2],auStack_90);
      iVar4 = *(int *)(param_2 + 0x8c);
      FUN_08947b88(0x3f800000,param_2,iVar4,*(undefined4 *)(iVar4 + 0x50),
                   *(undefined1 *)
                    (*(int *)(*(int *)(iVar4 + 0x48) +
                             (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4) + 1)
                   ,3,param_3 + 0x40,&local_50,auStack_d0,fVar12,fVar9,fVar10,uVar11);
      uVar11 = FUN_0896fd08(auStack_90,auStack_d0);
      FUN_0896fd88(uVar11);
      FUN_0897c030(param_4,local_34,local_38,iVar6,iVar8,iVar5,iVar7,iVar1);
      FUN_0897c27c(param_4,iVar6,local_30,iVar1,iVar5);
      FUN_0897bde0(param_4,local_3c,local_40,iVar6,iVar8,iVar5,iVar7,iVar1);
      FUN_0897c4c8(param_4);
      FUN_0896fe50();
    }
  }
  return;
}


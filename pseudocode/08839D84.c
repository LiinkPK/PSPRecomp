/* Entry 0x08839D84 | file offset 0x00036D5C | FUN_08839d84 | bytes 972 */

void FUN_08839d84(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_180 [112];
  undefined1 auStack_110 [112];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined4 local_74;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  undefined1 auStack_60 [16];
  float local_50 [2];
  float local_48;
  undefined *local_40;
  
  puVar6 = auStack_180;
  puVar7 = auStack_180;
  if (((((*(int *)(param_1 + 0x4a8) != 0) && ((*(uint *)(param_1 + 0x388) & 0x800) == 0)) &&
       ((*(uint *)(param_1 + 0x388) & 0x40000) == 0)) &&
      (((*(byte *)(param_1 + 0x195) & 4) == 0 && (iVar1 = FUN_08837990(param_1), iVar1 == 0)))) &&
     (*(int *)(param_1 + 0x394) != 0)) {
    FUN_089a3890(auStack_70);
    iVar1 = FUN_0886b604(*(undefined4 *)(param_1 + 0x394),auStack_a0,auStack_90);
    if (iVar1 == 0) {
      uVar10 = **(undefined4 **)(param_1 + 0x4a8);
      FUN_089a383c(uVar10,(*(undefined4 **)(param_1 + 0x4a8))[3],uVar10,0,auStack_60);
      FUN_089a3868(auStack_80,param_1 + 0x80);
      FUN_089a38a8(auStack_80,auStack_80,*(int *)(param_1 + 0x4a8) + 0x10);
      local_74 = 0x3f800000;
      FUN_088768d0(*(undefined4 *)(param_1 + 0x370),auStack_80,auStack_70,auStack_60,0,1);
    }
    else {
      piVar3 = (int *)&DAT_089c7fec;
      iVar1 = 0;
      iVar8 = *(int *)(param_1 + 0x394) + 0xa4;
      local_40 = &DAT_089c7fec;
      puVar5 = auStack_110;
      do {
        if ((piVar3[4] == 0) || (*(int *)(*(int *)(param_1 + 0x4a8) + 0x20) != 0)) {
          uVar10 = FUN_089b0e78(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x394) + 0x84) + 8),
                                *(undefined4 *)(iVar8 + *piVar3 * 4));
          iVar2 = FUN_089b1224(uVar10);
          FUN_089a3f40(puVar6,param_1,iVar2 + 0x30);
          uVar10 = FUN_089b0e78(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x394) + 0x84) + 8),
                                *(undefined4 *)(iVar8 + piVar3[1] * 4));
          iVar2 = FUN_089b1224(uVar10);
          FUN_089a3f40(puVar5,param_1,iVar2 + 0x30);
        }
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 5;
        puVar6 = puVar6 + 0x10;
        puVar5 = puVar5 + 0x10;
      } while (iVar1 < 7);
      iVar1 = 0;
      puVar6 = auStack_110;
      puVar4 = local_40;
      do {
        if ((*(int *)(puVar4 + 0x10) == 0) || (*(int *)(*(int *)(param_1 + 0x4a8) + 0x20) != 0)) {
          FUN_089a38e0(local_50,puVar7,puVar6);
          local_6c = FUN_089a457c(local_50[0],local_48);
          fVar9 = (float)FUN_089a2c68(local_50[0] * local_50[0] + local_48 * local_48);
          iVar8 = *(int *)(param_1 + 0x4a8);
          FUN_089a383c(*(float *)(puVar4 + 8) * *(float *)(iVar8 + 4),*(undefined4 *)(iVar8 + 0xc),
                       fVar9 * 2.0 * *(float *)(iVar8 + 8),0,auStack_60);
          FUN_089a38a8(auStack_80,puVar7,puVar6);
          FUN_089a3a44(0x3f000000,auStack_80,auStack_80);
          local_7c = *(undefined4 *)(param_1 + 0x84);
          local_74 = 0x3f800000;
          FUN_088768d0(*(float *)(puVar4 + 0xc) * *(float *)(param_1 + 0x370),auStack_80,auStack_70,
                       auStack_60,1,0);
        }
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 0x14;
        puVar7 = puVar7 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while (iVar1 < 7);
    }
  }
  return;
}


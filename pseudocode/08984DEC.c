/* Entry 0x08984DEC | file offset 0x00181DC4 | FUN_08984dec | bytes 696 */

void FUN_08984dec(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 (*pauVar13) [16];
  int iVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_a0 [64];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  
  iVar8 = *(int *)(DAT_09b6f478 + 0x8c);
  puVar7 = *(undefined1 **)
            (*(int *)(iVar8 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(0x3f800000,DAT_09b6f478,iVar8,*(undefined4 *)(iVar8 + 0x50),*puVar7,puVar7[1],
               puVar7[2],auStack_a0);
  FUN_0896fb5c(auStack_a0);
  iVar8 = FUN_08985234(param_2,param_1);
  uVar3 = FUN_08983db4(*(undefined1 *)(iVar8 + 0x44),0,1,2);
  FUN_08983cd8(uVar3);
  FUN_089a03dc(9);
  FUN_08983b74(0);
  FUN_089a3918(&local_60,
               *(int *)(DAT_09b6f478 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                      *(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) * 2) + 0x60,
               *(int *)(DAT_09b6f478 + 0x88) + 0x40);
  local_34 = param_1;
  FUN_089a4aac(0,0x437f0000,&local_60,&local_60);
  FUN_089a3918(&local_60,&DAT_089da410,&local_60);
  fVar2 = local_54;
  piVar4 = (int *)FUN_08984564(param_1);
  iVar14 = *piVar4;
  uVar10 = piVar4[1];
  local_3c = uVar10;
  iVar8 = FUN_0898456c(param_1);
  local_38 = FUN_08974a3c(*(undefined4 *)(param_3 + 0xb0),uVar10 * iVar8 * 0x10);
  if (local_38 != 0) {
    uVar10 = 0;
    iVar15 = 0;
    iVar8 = 0;
    if (local_3c != 0) {
      do {
        if (*(char *)(iVar14 + 0x38) != '\0') {
          iVar15 = iVar15 + 1;
          fVar16 = fVar2 * *(float *)(iVar14 + 0x34);
          pauVar9 = *(undefined1 (**) [16])(iVar14 + 0x40);
          uVar3 = local_60;
          uVar17 = uStack_5c;
          uVar18 = uStack_58;
          local_54 = fVar16;
          iVar5 = FUN_0898456c(local_34);
          pauVar13 = pauVar9 + iVar5 * 2;
          if (pauVar9 != pauVar13) {
            puVar11 = (undefined4 *)(local_38 + iVar8 * 0x10);
            puVar12 = puVar11 + 1;
            do {
              FUN_089a34c0(puVar12,pauVar9 + 1);
              auVar1._12_4_ = fVar16;
              auVar1._8_4_ = uVar18;
              auVar1._4_4_ = uVar17;
              auVar1._0_4_ = uVar3;
              auVar1 = vmul_q(auVar1,*pauVar9);
              auVar1 = vsat0_q(auVar1);
              local_50 = auVar1._0_4_;
              uStack_4c = auVar1._4_4_;
              uStack_48 = auVar1._8_4_;
              uStack_44 = auVar1._12_4_;
              uVar6 = FUN_089a48cc(&local_50);
              *puVar11 = uVar6;
              iVar8 = iVar8 + 1;
              puVar11 = puVar11 + 4;
              puVar12 = puVar12 + 4;
              pauVar9 = pauVar9 + 2;
            } while (pauVar9 != pauVar13);
          }
        }
        uVar10 = uVar10 + 1;
        iVar14 = iVar14 + 0x50;
      } while (uVar10 < local_3c);
    }
    if (iVar15 != 0) {
      uVar3 = FUN_0898456c(local_34);
      FUN_089a05f0(2,0x19c,uVar3,iVar15,0,local_38);
    }
  }
  return;
}


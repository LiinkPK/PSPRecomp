/* Entry 0x089C390C | file offset 0x001C08E4 | FUN_089c390c | bytes 976 */

void FUN_089c390c(undefined4 *param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  int iVar3;
  undefined1 (*pauVar4) [12];
  uint uVar5;
  undefined1 (*pauVar6) [12];
  undefined1 (*pauVar7) [12];
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  
  fVar11 = *(float *)(DAT_089da27c + 0x34);
  fVar15 = -*(float *)(DAT_089da27c + 0x30);
  fVar12 = -*(float *)(DAT_089da27c + 0x38);
  if (*(char *)(param_2 + 0x3b) != '\0') {
    iVar3 = param_1[10];
    param_1[10] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      param_1[10] = (uint)*(byte *)(param_2 + 0x3c);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      param_1[9] = *(float *)(param_2 + 0x2c) +
                   (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                    *(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x30));
    }
    param_1[8] = (float)param_1[8] +
                 ((float)param_1[9] - (float)param_1[8]) * *(float *)(param_2 + 0x34);
  }
  local_30 = param_1[4];
  local_2c = -(float)param_1[5];
  local_28 = -(float)param_1[6];
  local_24 = param_1[7];
  FUN_089a3a44(param_1[8],&local_40,&local_30);
  pauVar4 = (undefined1 (*) [12])*param_1;
  uVar10 = param_1[1];
  fVar14 = *(float *)(param_2 + 0x10);
  uVar5 = 0;
  fVar13 = *(float *)(param_2 + 0x14);
  if (uVar10 != 0) {
    fVar16 = fVar13 - 0.1;
    pauVar7 = pauVar4 + 3;
    puVar8 = (undefined4 *)(pauVar4[1] + 4);
    pauVar6 = pauVar4;
    do {
      uVar18 = *(undefined4 *)pauVar4[1];
      uVar19 = vadd_s(uStack_3c,*(undefined4 *)*pauVar7);
      auVar1._8_4_ = uStack_38;
      auVar1._4_4_ = uVar19;
      auVar1._0_4_ = local_40;
      auVar1 = vadd_t(*pauVar4,auVar1);
      *(int *)*pauVar4 = auVar1._0_4_;
      *(int *)(*pauVar4 + 4) = auVar1._4_4_;
      *(int *)(*pauVar4 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar4[1] = uVar18;
      *puVar8 = local_40;
      puVar8[1] = uVar19;
      puVar8[2] = uStack_38;
      puVar8[3] = uStack_34;
      if ((*(float *)(pauVar6[3] + 8) < 1.0) &&
         (fVar17 = *(float *)(pauVar6[3] + 8) + 0.1, *(float *)(pauVar6[3] + 8) = fVar17,
         1.0 < fVar17)) {
        *(undefined4 *)(pauVar6[3] + 8) = 0x3f800000;
      }
      uVar18 = vmov_s(*(undefined4 *)(*pauVar4 + 8));
      uVar19 = vmov_s(fVar12);
      uVar2 = vsub_p(CONCAT44(uVar18,*(undefined4 *)*pauVar4),CONCAT44(uVar19,fVar15));
      uVar18 = vdot_p(uVar2,uVar2);
      fVar17 = (float)vsqrt_s(uVar18);
      if (fVar13 < fVar17) {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        *(float *)*pauVar6 =
             fVar15 + (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar16 - fVar16);
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        uVar9 = DAT_089da120 >> 0x10;
        *(undefined4 *)(pauVar6[3] + 8) = 0;
        *(float *)(*pauVar6 + 8) =
             fVar12 + (((float)(uVar9 & 0x7fff) / 32767.0) * 2.0 * fVar16 - fVar16);
      }
      else if (*(float *)(*pauVar6 + 4) < -fVar11 - fVar14) {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        *(float *)*pauVar6 =
             fVar15 + (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar16 - fVar16);
        *(float *)(*pauVar6 + 4) = fVar14 + 0.1 + -fVar11;
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        *(float *)(*pauVar6 + 8) =
             fVar12 + (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar16 - fVar16);
      }
      uVar5 = uVar5 + 1;
      pauVar4 = (undefined1 (*) [12])(pauVar4[5] + 4);
      pauVar6 = (undefined1 (*) [12])(pauVar6[5] + 4);
      pauVar7 = (undefined1 (*) [12])(pauVar7[5] + 4);
      puVar8 = puVar8 + 0x10;
    } while (uVar5 < uVar10);
  }
  return;
}


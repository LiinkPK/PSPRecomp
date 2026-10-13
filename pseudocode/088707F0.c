/* Entry 0x088707F0 | file offset 0x0006D7C8 | FUN_088707f0 | bytes 800 */

uint FUN_088707f0(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [8];
  
  iVar4 = param_1[5];
  uVar5 = 0;
  if (*(int *)(iVar4 + 4) == 0) {
    uVar6 = 0x80000011;
  }
  else {
    iVar3 = *(int *)(iVar4 + 4);
    uVar7 = param_1[4];
    uVar2 = FUN_088716c8(DAT_089d5ff0,*param_1);
    if (uVar2 < uVar7) {
      uVar7 = FUN_088716c8(DAT_089d5ff0,*param_1);
    }
    uVar2 = uVar7;
    if (*(char *)((int)param_1 + 0xa1) != '\0') {
      uVar2 = 0x20000;
    }
    iVar8 = param_1[1];
    uVar6 = uVar5;
    if (uVar7 != 0) {
      do {
        if (uVar7 - uVar5 < uVar2) {
          uVar2 = uVar7 - uVar5;
        }
        uVar6 = iVar3 * 0x2000 + uVar5;
        uVar6 = scesupPreAcc_NID_28C5F696
                          (PTR_s_DISSINST_DAT_089d5fa4,&PTR_caseD_893c500_089d0000,uVar6,
                           (uint)(uVar6 < uVar5) + ((int)uVar5 >> 0x1f),iVar8 + uVar5,uVar2);
        if (uVar6 == 0) {
          uVar6 = 0x80000016;
        }
      } while ((-1 < (int)uVar6) && (uVar5 = uVar5 + uVar6, uVar6 = uVar5, uVar5 < uVar7));
    }
    if (((int)uVar6 < 0) ||
       ((DAT_089d5fac != 1 ||
        (iVar3 = FUN_0886f9e4(param_1[1],uVar6), *(short *)(iVar4 + 2) == iVar3)))) {
      if ((-1 < (int)uVar6) && (DAT_089d5fb0 == 1)) {
        FUN_088706e8(&DAT_089c95fa,&DAT_089c9606,auStack_70,0x18);
        FUN_0886f0e4(auStack_70,0x18,param_1[1],uVar6,auStack_58);
        iVar4 = FUN_08935b50(iVar4 + 8,auStack_58,0x14);
        if (iVar4 != 0) {
          iVar4 = 1;
          do {
            bVar1 = iVar4 < 0x14;
            iVar4 = iVar4 + 1;
          } while (bVar1);
          iVar4 = 1;
          do {
            bVar1 = iVar4 < 0x14;
            iVar4 = iVar4 + 1;
          } while (bVar1);
          DAT_089d5fcc = DAT_089d5fcc + 1;
          uVar6 = 0x80000010;
          goto LAB_08870a90;
        }
      }
      if (-1 < (int)uVar6) {
        FUN_088706e8(&DAT_089c960e,&DAT_089c95fe,auStack_44,0x10);
        FUN_0885cde0(auStack_34);
        FUN_0885ce2c(auStack_34,auStack_44,0x10);
        FUN_0885d338(auStack_34,param_1[1],param_1[1],
                     ((int)(uVar6 + ((uint)((int)uVar6 >> 3) >> 0x1d)) >> 3) << 3);
        FUN_0885ce00(auStack_34,2);
      }
    }
    else {
      DAT_089d5fcc = DAT_089d5fcc + 1;
      uVar6 = 0x80000010;
    }
  }
LAB_08870a90:
  if (param_1[6] != 0) {
    if ((int)uVar6 < 1) {
      DAT_089d5fd4 = 1;
      uVar6 = FUN_088629dc(param_1 + 8,param_1[1],param_1[4],param_1[6],param_1[7],
                           *(undefined1 *)((int)param_1 + 0xa2));
    }
    else {
      (*(code *)param_1[6])(uVar6,param_1[7]);
    }
  }
  return uVar6;
}


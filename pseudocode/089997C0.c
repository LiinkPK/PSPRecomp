/* Entry 0x089997C0 | file offset 0x00196798 | FUN_089997c0 | bytes 1476 */

undefined8 FUN_089997c0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_20;
  uint local_1c;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar3 = 8;
      if (param_3 < 0x100) {
        iVar3 = 0;
      }
      if ((0xffff < param_3) && (iVar3 = 0x10, 0xffffff < param_3)) {
        iVar3 = 0x18;
      }
      uVar7 = 0x20 - ((uint)(byte)(&DAT_089d11f8)[param_3 >> iVar3] + iVar3);
      if (uVar7 != 0) {
        param_2 = param_2 << (uVar7 & 0x1f) | param_1 >> (0x20 - uVar7 & 0x1f);
        param_3 = param_3 << (uVar7 & 0x1f);
        param_1 = param_1 << (uVar7 & 0x1f);
      }
      uVar6 = param_3 >> 0x10;
      if (uVar6 == 0) {
        trap(7);
      }
      uVar10 = (param_2 / uVar6) * (param_3 & 0xffff);
      uVar4 = param_2 % uVar6 << 0x10 | param_1 >> 0x10;
      if (uVar4 < uVar10) {
        uVar4 = uVar4 + param_3;
        if (param_3 <= uVar4) {
          if (uVar4 < uVar10) {
            uVar4 = uVar4 + param_3;
          }
          goto LAB_089998c8;
        }
        uVar4 = uVar4 - uVar10;
      }
      else {
LAB_089998c8:
        uVar4 = uVar4 - uVar10;
      }
      if (uVar6 == 0) {
        trap(7);
      }
      uVar5 = (uVar4 / uVar6) * (param_3 & 0xffff);
      uVar6 = uVar4 % uVar6 << 0x10 | param_1 & 0xffff;
      if (uVar6 < uVar5) {
        uVar6 = uVar6 + param_3;
        uVar10 = uVar6 - uVar5;
        if (uVar6 < param_3) goto LAB_08999924;
        if (uVar6 < uVar5) {
          uVar6 = uVar6 + param_3;
        }
      }
      uVar10 = uVar6 - uVar5;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(7);
      }
      iVar3 = 8;
      if (param_3 < 0x100) {
        iVar3 = 0;
      }
      if ((0xffff < param_3) && (iVar3 = 0x10, 0xffffff < param_3)) {
        iVar3 = 0x18;
      }
      uVar7 = 0x20 - ((uint)(byte)(&DAT_089d11f8)[param_3 >> iVar3] + iVar3);
      if (uVar7 == 0) {
        param_2 = param_2 - param_3;
        uVar10 = param_3 >> 0x10;
        uVar6 = param_3 & 0xffff;
      }
      else {
        param_3 = param_3 << (uVar7 & 0x1f);
        uVar10 = param_3 >> 0x10;
        uVar5 = param_2 >> (0x20 - uVar7 & 0x1f);
        uVar6 = param_3 & 0xffff;
        uVar4 = param_2 << (uVar7 & 0x1f) | param_1 >> (0x20 - uVar7 & 0x1f);
        if (uVar10 == 0) {
          trap(7);
        }
        param_1 = param_1 << (uVar7 & 0x1f);
        uVar9 = (uVar5 / uVar10) * uVar6;
        uVar5 = uVar5 % uVar10 << 0x10 | uVar4 >> 0x10;
        if (uVar5 < uVar9) {
          uVar5 = uVar5 + param_3;
          if (param_3 <= uVar5) {
            if (uVar5 < uVar9) {
              uVar5 = uVar5 + param_3;
            }
            goto LAB_08999b14;
          }
          uVar5 = uVar5 - uVar9;
        }
        else {
LAB_08999b14:
          uVar5 = uVar5 - uVar9;
        }
        if (uVar10 == 0) {
          trap(7);
        }
        uVar9 = (uVar5 / uVar10) * uVar6;
        param_2 = uVar5 % uVar10 << 0x10 | uVar4 & 0xffff;
        if (param_2 < uVar9) {
          param_2 = param_2 + param_3;
          if (param_2 < param_3) {
            param_2 = param_2 - uVar9;
            goto LAB_089999e4;
          }
          if (param_2 < uVar9) {
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
      }
LAB_089999e4:
      if (uVar10 == 0) {
        trap(7);
      }
      uVar4 = (param_2 / uVar10) * uVar6;
      uVar5 = param_2 % uVar10 << 0x10 | param_1 >> 0x10;
      if (uVar5 < uVar4) {
        uVar5 = uVar5 + param_3;
        if (param_3 <= uVar5) {
          if (uVar5 < uVar4) {
            uVar5 = uVar5 + param_3;
          }
          goto LAB_08999a38;
        }
        uVar5 = uVar5 - uVar4;
      }
      else {
LAB_08999a38:
        uVar5 = uVar5 - uVar4;
      }
      if (uVar10 == 0) {
        trap(7);
      }
      uVar6 = (uVar5 / uVar10) * uVar6;
      uVar10 = uVar5 % uVar10 << 0x10 | param_1 & 0xffff;
      if (uVar10 < uVar6) {
        uVar10 = uVar10 + param_3;
        if (param_3 <= uVar10) {
          if (uVar10 < uVar6) {
            uVar10 = uVar10 + param_3;
          }
          goto LAB_08999a90;
        }
        uVar10 = uVar10 - uVar6;
      }
      else {
LAB_08999a90:
        uVar10 = uVar10 - uVar6;
      }
    }
LAB_08999924:
    param_2 = 0;
    param_1 = uVar10 >> (uVar7 & 0x1f);
LAB_0899992c:
    uVar7 = local_20;
    uVar6 = local_1c;
    if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_0899993c;
  }
  else {
    uVar7 = param_1;
    uVar6 = param_2;
    if (param_2 < param_4) goto LAB_0899993c;
    iVar3 = 8;
    if (param_4 < 0x100) {
      iVar3 = 0;
    }
    if ((0xffff < param_4) && (iVar3 = 0x10, 0xffffff < param_4)) {
      iVar3 = 0x18;
    }
    uVar10 = 0x20 - ((uint)(byte)(&DAT_089d11f8)[param_4 >> iVar3] + iVar3);
    uVar4 = 0x20 - uVar10;
    if (uVar10 == 0) {
      if (param_4 < param_2 || param_3 <= param_1) {
        param_2 = (param_2 - param_4) - (uint)(param_1 < param_1 - param_3);
        param_1 = param_1 - param_3;
      }
      goto LAB_0899992c;
    }
    uVar7 = param_4 << (uVar10 & 0x1f) | param_3 >> (uVar4 & 0x1f);
    uVar5 = uVar7 >> 0x10;
    uVar9 = param_2 >> (uVar4 & 0x1f);
    uVar11 = uVar9 / uVar5;
    uVar6 = param_2 << (uVar10 & 0x1f) | param_1 >> (uVar4 & 0x1f);
    if (uVar5 == 0) {
      trap(7);
    }
    param_3 = param_3 << (uVar10 & 0x1f);
    param_1 = param_1 << (uVar10 & 0x1f);
    uVar1 = uVar11 * (uVar7 & 0xffff);
    uVar8 = uVar9 % uVar5 << 0x10 | uVar6 >> 0x10;
    uVar9 = uVar11;
    if (uVar8 < uVar1) {
      uVar8 = uVar8 + uVar7;
      uVar9 = uVar11 - 1;
      if (uVar8 < uVar7) goto LAB_08999cb0;
      if (uVar8 < uVar1) {
        uVar9 = uVar11 - 2;
        uVar8 = uVar8 + uVar7;
        goto LAB_08999cb0;
      }
      uVar8 = uVar8 - uVar1;
    }
    else {
LAB_08999cb0:
      uVar8 = uVar8 - uVar1;
    }
    uVar11 = uVar8 / uVar5;
    if (uVar5 == 0) {
      trap(7);
    }
    uVar1 = uVar11 * (uVar7 & 0xffff);
    uVar5 = uVar8 % uVar5 << 0x10 | uVar6 & 0xffff;
    uVar6 = uVar11;
    if (uVar5 < uVar1) {
      uVar5 = uVar5 + uVar7;
      uVar6 = uVar11 - 1;
      if ((uVar7 <= uVar5) && (uVar5 < uVar1)) {
        uVar6 = uVar11 - 2;
        uVar5 = uVar5 + uVar7;
      }
    }
    uVar5 = uVar5 - uVar1;
    lVar2 = (ulonglong)(uVar9 << 0x10 | uVar6) * (ulonglong)param_3;
    uVar9 = (uint)lVar2;
    uVar6 = (uint)((ulonglong)lVar2 >> 0x20);
    param_3 = uVar9 - param_3;
    if ((uVar5 < uVar6) || (uVar6 == uVar5 && param_1 < uVar9)) {
      lVar2 = CONCAT44((uVar6 - uVar7) - (uint)(uVar9 < param_3),param_3);
    }
    uVar9 = param_1 - (int)lVar2;
    uVar7 = local_20;
    uVar6 = local_1c;
    if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_0899993c;
    param_2 = (uVar5 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar9);
    param_1 = param_2 << (uVar4 & 0x1f) | uVar9 >> (uVar10 & 0x1f);
    param_2 = param_2 >> (uVar10 & 0x1f);
  }
  uVar7 = param_1;
  uVar6 = param_2;
LAB_0899993c:
  local_1c = uVar6;
  local_20 = uVar7;
  return CONCAT44(local_1c,local_20);
}


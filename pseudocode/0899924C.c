/* Entry 0x0899924C | file offset 0x00196224 | FUN_0899924c | bytes 1396 */

undefined8 FUN_0899924c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
        trap(7);
      }
      iVar2 = 8;
      if (param_3 < 0x100) {
        iVar2 = 0;
      }
      if ((0xffff < param_3) && (iVar2 = 0x10, 0xffffff < param_3)) {
        iVar2 = 0x18;
      }
      uVar4 = 0x20 - ((uint)(byte)(&DAT_089d11f8)[param_3 >> iVar2] + iVar2);
      if (uVar4 == 0) {
        param_2 = param_2 - param_3;
        uVar4 = 1;
        uVar7 = param_3 >> 0x10;
        uVar9 = param_3 & 0xffff;
      }
      else {
        param_3 = param_3 << (uVar4 & 0x1f);
        uVar7 = param_3 >> 0x10;
        uVar3 = param_2 >> (0x20 - uVar4 & 0x1f);
        uVar8 = uVar3 / uVar7;
        uVar9 = param_3 & 0xffff;
        uVar10 = param_2 << (uVar4 & 0x1f) | param_1 >> (0x20 - uVar4 & 0x1f);
        param_1 = param_1 << (uVar4 & 0x1f);
        if (uVar7 == 0) {
          trap(7);
        }
        uVar4 = uVar8 * uVar9;
        uVar5 = uVar3 % uVar7 << 0x10 | uVar10 >> 0x10;
        uVar3 = uVar8;
        if (uVar5 < uVar4) {
          uVar5 = uVar5 + param_3;
          uVar3 = uVar8 - 1;
          if (uVar5 < param_3) goto LAB_0899959c;
          if (uVar5 < uVar4) {
            uVar3 = uVar8 - 2;
            uVar5 = uVar5 + param_3;
            goto LAB_0899959c;
          }
          uVar5 = uVar5 - uVar4;
        }
        else {
LAB_0899959c:
          uVar5 = uVar5 - uVar4;
        }
        uVar8 = uVar5 / uVar7;
        if (uVar7 == 0) {
          trap(7);
        }
        uVar6 = uVar8 * uVar9;
        param_2 = uVar5 % uVar7 << 0x10 | uVar10 & 0xffff;
        uVar4 = uVar8;
        if (param_2 < uVar6) {
          param_2 = param_2 + param_3;
          uVar4 = uVar8 - 1;
          if ((param_3 <= param_2) && (param_2 < uVar6)) {
            uVar4 = uVar8 - 2;
            param_2 = param_2 + param_3;
          }
        }
        uVar4 = uVar3 << 0x10 | uVar4;
        param_2 = param_2 - uVar6;
      }
      uVar10 = param_2 / uVar7;
      if (uVar7 == 0) {
        trap(7);
      }
      uVar3 = uVar10 * uVar9;
      uVar5 = param_2 % uVar7 << 0x10 | param_1 >> 0x10;
      uVar8 = uVar10;
      if (uVar5 < uVar3) {
        uVar5 = uVar5 + param_3;
        uVar8 = uVar10 - 1;
        if (uVar5 < param_3) goto LAB_089994b4;
        if (uVar5 < uVar3) {
          uVar8 = uVar10 - 2;
          uVar5 = uVar5 + param_3;
          goto LAB_089994b4;
        }
        uVar5 = uVar5 - uVar3;
      }
      else {
LAB_089994b4:
        uVar5 = uVar5 - uVar3;
      }
      uVar10 = uVar5 / uVar7;
      if (uVar7 == 0) {
        trap(7);
      }
      uVar9 = uVar10 * uVar9;
      uVar7 = uVar5 % uVar7 << 0x10 | param_1 & 0xffff;
      if (uVar7 < uVar9) {
        uVar7 = uVar7 + param_3;
        uVar10 = uVar10 - 1;
        if (param_3 <= uVar7) {
          uVar10 = uVar10 - (uVar7 < uVar9);
        }
      }
      uVar10 = uVar8 << 0x10 | uVar10;
      goto LAB_089993b4;
    }
    iVar2 = 8;
    if (param_3 < 0x100) {
      iVar2 = 0;
    }
    if ((0xffff < param_3) && (iVar2 = 0x10, 0xffffff < param_3)) {
      iVar2 = 0x18;
    }
    uVar4 = 0x20 - ((uint)(byte)(&DAT_089d11f8)[param_3 >> iVar2] + iVar2);
    if (uVar4 != 0) {
      param_2 = param_2 << (uVar4 & 0x1f) | param_1 >> (0x20 - uVar4 & 0x1f);
      param_1 = param_1 << (uVar4 & 0x1f);
      param_3 = param_3 << (uVar4 & 0x1f);
    }
    uVar4 = param_3 >> 0x10;
    uVar10 = param_2 / uVar4;
    if (uVar4 == 0) {
      trap(7);
    }
    uVar9 = uVar10 * (param_3 & 0xffff);
    uVar3 = param_2 % uVar4 << 0x10 | param_1 >> 0x10;
    uVar7 = uVar10;
    if (uVar3 < uVar9) {
      uVar3 = uVar3 + param_3;
      uVar7 = uVar10 - 1;
      if (uVar3 < param_3) goto LAB_08999350;
      if (uVar3 < uVar9) {
        uVar7 = uVar10 - 2;
        uVar3 = uVar3 + param_3;
        goto LAB_08999350;
      }
      uVar3 = uVar3 - uVar9;
    }
    else {
LAB_08999350:
      uVar3 = uVar3 - uVar9;
    }
    uVar10 = uVar3 / uVar4;
    if (uVar4 == 0) {
      trap(7);
    }
    uVar9 = uVar10 * (param_3 & 0xffff);
    uVar4 = uVar3 % uVar4 << 0x10 | param_1 & 0xffff;
    if (uVar4 < uVar9) {
      uVar4 = uVar4 + param_3;
      uVar10 = uVar10 - 1;
      if (param_3 <= uVar4) {
        uVar10 = uVar10 - (uVar4 < uVar9);
      }
    }
    uVar10 = uVar7 << 0x10 | uVar10;
  }
  else {
    uVar10 = 0;
    uVar4 = 0;
    if (param_2 < param_4) goto LAB_089993b4;
    iVar2 = 8;
    if (param_4 < 0x100) {
      iVar2 = 0;
    }
    if ((0xffff < param_4) && (iVar2 = 0x10, 0xffffff < param_4)) {
      iVar2 = 0x18;
    }
    uVar9 = 0x20 - ((uint)(byte)(&DAT_089d11f8)[param_4 >> iVar2] + iVar2);
    uVar4 = 0x20 - uVar9;
    if (uVar9 == 0) {
      uVar10 = (uint)(param_4 < param_2 || param_3 <= param_1);
    }
    else {
      uVar7 = param_4 << (uVar9 & 0x1f) | param_3 >> (uVar4 & 0x1f);
      uVar10 = uVar7 >> 0x10;
      uVar3 = param_2 >> (uVar4 & 0x1f);
      uVar8 = uVar3 / uVar10;
      uVar4 = param_2 << (uVar9 & 0x1f) | param_1 >> (uVar4 & 0x1f);
      if (uVar10 == 0) {
        trap(7);
      }
      uVar5 = uVar8 * (uVar7 & 0xffff);
      uVar6 = uVar3 % uVar10 << 0x10 | uVar4 >> 0x10;
      uVar3 = uVar8;
      if (uVar6 < uVar5) {
        uVar6 = uVar6 + uVar7;
        uVar3 = uVar8 - 1;
        if (uVar6 < uVar7) goto LAB_0899971c;
        if (uVar6 < uVar5) {
          uVar3 = uVar8 - 2;
          uVar6 = uVar6 + uVar7;
          goto LAB_0899971c;
        }
        uVar6 = uVar6 - uVar5;
      }
      else {
LAB_0899971c:
        uVar6 = uVar6 - uVar5;
      }
      uVar8 = uVar6 / uVar10;
      if (uVar10 == 0) {
        trap(7);
      }
      uVar5 = uVar8 * (uVar7 & 0xffff);
      uVar6 = uVar6 % uVar10 << 0x10 | uVar4 & 0xffff;
      uVar10 = uVar8;
      if (uVar6 < uVar5) {
        uVar6 = uVar6 + uVar7;
        uVar10 = uVar8 - 1;
        if ((uVar7 <= uVar6) && (uVar6 < uVar5)) {
          uVar6 = uVar6 + uVar7;
          uVar10 = uVar8 - 2;
        }
      }
      uVar10 = uVar3 << 0x10 | uVar10;
      lVar1 = (ulonglong)uVar10 * (ulonglong)(param_3 << (uVar9 & 0x1f));
      uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
      if (uVar7 <= uVar6 - uVar5) {
        uVar4 = 0;
        if (uVar7 == uVar6 - uVar5 && param_1 << (uVar9 & 0x1f) < (uint)lVar1) {
          uVar10 = uVar10 - 1;
        }
        goto LAB_089993b4;
      }
      uVar10 = uVar10 - 1;
    }
  }
  uVar4 = 0;
LAB_089993b4:
  return CONCAT44(uVar4,uVar10);
}


/* Entry 0x08998C18 | file offset 0x00195BF0 | FUN_08998c18 | bytes 1588 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 08b631c4. Boundary still requires runtime validation. */

undefined8 FUN_08998c18(uint param_1,uint param_2,uint param_3,uint param_4)

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
  int iVar11;
  uint uVar12;
  uint local_30;
  uint local_2c;
  
  iVar11 = 0;
  if ((int)param_2 < 0) {
    param_1 = -param_1;
    param_2 = -(uint)(param_1 != 0) - param_2;
    iVar11 = -1;
  }
  if ((int)param_4 < 0) {
    param_3 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
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
          goto LAB_08998d34;
        }
        uVar4 = uVar4 - uVar10;
      }
      else {
LAB_08998d34:
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
        if (uVar6 < param_3) goto LAB_08998d90;
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
            goto LAB_08998fac;
          }
          uVar5 = uVar5 - uVar9;
        }
        else {
LAB_08998fac:
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
            goto LAB_08998e7c;
          }
          if (param_2 < uVar9) {
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar9;
      }
LAB_08998e7c:
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
          goto LAB_08998ed0;
        }
        uVar5 = uVar5 - uVar4;
      }
      else {
LAB_08998ed0:
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
          goto LAB_08998f28;
        }
        uVar10 = uVar10 - uVar6;
      }
      else {
LAB_08998f28:
        uVar10 = uVar10 - uVar6;
      }
    }
LAB_08998d90:
    param_2 = 0;
    param_1 = uVar10 >> (uVar7 & 0x1f);
LAB_08998d98:
    uVar7 = local_30;
    uVar6 = local_2c;
    if (&stack0x00000000 == (undefined1 *)0x30) goto LAB_08998da8;
  }
  else {
    uVar7 = param_1;
    uVar6 = param_2;
    if (param_2 < param_4) goto LAB_08998da8;
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
      goto LAB_08998d98;
    }
    uVar7 = param_4 << (uVar10 & 0x1f) | param_3 >> (uVar4 & 0x1f);
    uVar5 = uVar7 >> 0x10;
    uVar9 = param_2 >> (uVar4 & 0x1f);
    uVar12 = uVar9 / uVar5;
    uVar6 = param_2 << (uVar10 & 0x1f) | param_1 >> (uVar4 & 0x1f);
    if (uVar5 == 0) {
      trap(7);
    }
    param_3 = param_3 << (uVar10 & 0x1f);
    param_1 = param_1 << (uVar10 & 0x1f);
    uVar1 = uVar12 * (uVar7 & 0xffff);
    uVar8 = uVar9 % uVar5 << 0x10 | uVar6 >> 0x10;
    uVar9 = uVar12;
    if (uVar8 < uVar1) {
      uVar8 = uVar8 + uVar7;
      uVar9 = uVar12 - 1;
      if (uVar8 < uVar7) goto LAB_08999148;
      if (uVar8 < uVar1) {
        uVar9 = uVar12 - 2;
        uVar8 = uVar8 + uVar7;
        goto LAB_08999148;
      }
      uVar8 = uVar8 - uVar1;
    }
    else {
LAB_08999148:
      uVar8 = uVar8 - uVar1;
    }
    uVar12 = uVar8 / uVar5;
    if (uVar5 == 0) {
      trap(7);
    }
    uVar1 = uVar12 * (uVar7 & 0xffff);
    uVar5 = uVar8 % uVar5 << 0x10 | uVar6 & 0xffff;
    uVar6 = uVar12;
    if (uVar5 < uVar1) {
      uVar5 = uVar5 + uVar7;
      uVar6 = uVar12 - 1;
      if ((uVar7 <= uVar5) && (uVar5 < uVar1)) {
        uVar6 = uVar12 - 2;
        uVar5 = uVar5 + uVar7;
      }
    }
    uVar5 = uVar5 - uVar1;
    lVar2 = (ulonglong)(uVar9 << 0x10 | uVar6) * (ulonglong)param_3;
    uVar6 = (uint)lVar2;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    param_3 = uVar6 - param_3;
    if ((uVar5 < uVar9) || (uVar9 == uVar5 && param_1 < uVar6)) {
      lVar2 = CONCAT44((uVar9 - uVar7) - (uint)(uVar6 < param_3),param_3);
    }
    uVar9 = param_1 - (int)lVar2;
    uVar7 = local_30;
    uVar6 = local_2c;
    if (&stack0x00000000 == (undefined1 *)0x30) goto LAB_08998da8;
    param_2 = (uVar5 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(param_1 < uVar9);
    param_1 = param_2 << (uVar4 & 0x1f) | uVar9 >> (uVar10 & 0x1f);
    param_2 = param_2 >> (uVar10 & 0x1f);
  }
  uVar7 = param_1;
  uVar6 = param_2;
LAB_08998da8:
  local_2c = uVar6;
  local_30 = uVar7;
  if (iVar11 != 0) {
    local_30 = -local_30;
    local_2c = -(uint)(local_30 != 0) - local_2c;
  }
  return CONCAT44(local_2c,local_30);
}


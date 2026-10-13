/* Entry 0x088FF4A8 | file offset 0x000FC480 | FUN_088ff4a8 | bytes 740 */

undefined8 FUN_088ff4a8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = *(int *)(param_1 + 0x1e8);
  if (0 < iVar6) {
    iVar4 = *(int *)(param_1 + 0x1e0);
    uVar5 = *(uint *)(param_1 + 0x1d8);
    uVar7 = *(undefined8 *)(param_1 + 0x1d8);
    if ((uVar5 & 0x3f) != 0) {
      uVar1 = (uint)(*(int *)(param_1 + 0x1dc) >> 6) >> 0x1a;
      uVar2 = uVar5 + uVar1;
      iVar3 = (uint)(uVar2 < uVar1) + *(int *)(param_1 + 0x1dc);
      uVar7 = FUN_08998588(iVar3 * 0x4000000 | uVar2 >> 6,iVar3 >> 6,0x40,0);
      uVar5 = uVar5 - (int)uVar7;
      iVar4 = FUN_089a9b64("DISSIDIA 012 FF",param_1 + 0x1ec,(int)uVar7,
                           (int)((ulonglong)uVar7 >> 0x20),iVar4 + *(int *)(param_1 + 0x1e4),uVar5);
      if (iVar4 < 0) {
        param_4 = -1;
        uVar5 = 0xffffffff;
        goto LAB_088ff75c;
      }
      iVar4 = *(int *)(param_1 + 0x1e0);
      uVar1 = *(int *)(param_1 + 0x1e4) + uVar5;
      FUN_08935524(iVar4 + uVar1,iVar4,*(undefined4 *)(param_1 + 0x1e8),iVar4,uVar1 < uVar5);
      iVar6 = iVar6 + uVar5;
      iVar4 = *(int *)(param_1 + 0x1e0) + *(int *)(param_1 + 0x1e4);
    }
    iVar6 = FUN_089a9640("DISSIDIA 012 FF",param_1 + 0x1ec,(int)uVar7,
                         (int)((ulonglong)uVar7 >> 0x20),iVar4,iVar6);
    if (iVar6 < 0) {
      param_4 = -1;
      uVar5 = 0xffffffff;
      goto LAB_088ff75c;
    }
    uVar5 = *(uint *)(param_1 + 0x1e8);
    uVar1 = *(int *)(param_1 + 0x1d8) + uVar5;
    *(uint *)(param_1 + 0x1dc) =
         (uint)(uVar1 < uVar5) + *(int *)(param_1 + 0x1dc) + ((int)uVar5 >> 0x1f);
    *(uint *)(param_1 + 0x1d8) = uVar1;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  if (param_5 < 1) {
    if (-1 < param_5) {
      *(int *)(param_1 + 0x1dc) = param_4;
      *(uint *)(param_1 + 0x1d8) = param_3;
      uVar5 = param_3;
      goto LAB_088ff75c;
    }
  }
  else {
    if (param_5 < 2) {
      uVar5 = *(int *)(param_1 + 0x1d8) + param_3;
      param_4 = (uint)(uVar5 < param_3) + *(int *)(param_1 + 0x1dc) + param_4;
      *(int *)(param_1 + 0x1dc) = param_4;
      *(uint *)(param_1 + 0x1d8) = uVar5;
      goto LAB_088ff75c;
    }
    if (param_5 < 3) {
      param_4 = (*(int *)(param_1 + 0x1dc) - param_4) - (uint)(*(uint *)(param_1 + 0x1d8) < param_3)
      ;
      uVar5 = *(uint *)(param_1 + 0x1d8) - param_3;
      *(int *)(param_1 + 0x1dc) = param_4;
      *(uint *)(param_1 + 0x1d8) = uVar5;
      goto LAB_088ff75c;
    }
  }
  param_4 = -1;
  uVar5 = 0xffffffff;
LAB_088ff75c:
  return CONCAT44(param_4,uVar5);
}


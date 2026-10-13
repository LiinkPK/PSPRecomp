/* Entry 0x088E0F14 | file offset 0x000DDEEC | FUN_088e0f14 | bytes 604 */

undefined4 FUN_088e0f14(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  switch(*param_1) {
  case 0:
    uVar2 = 1;
    break;
  case 1:
    iVar5 = FUN_088e0590(param_1);
    if (iVar5 != 0) {
      FUN_088e3f2c(param_1 + 0x16f,param_1[1]);
      FUN_088e06a0(param_1);
      *param_1 = 2;
    }
    uVar2 = 1;
    break;
  case 2:
    if (*(char *)((int)param_1 + 0x17b9) == '\0') {
      FUN_088e33e8(param_1 + 0x16f);
      FUN_088e3204(param_1 + 0x16f);
      *(undefined1 *)((int)param_1 + 0x17bb) = 1;
    }
    *param_1 = 3;
    *(undefined1 *)((int)param_1 + 0x17b6) = 0;
  default:
    if (*(char *)(param_1 + 0x5ed) == '\0') {
      sceKernelPowerTick(0);
      bVar1 = true;
      iVar6 = 0;
      iVar5 = 0;
      puVar4 = param_1 + 5;
      do {
        iVar3 = FUN_088e150c(param_1,*(undefined4 *)(param_1[2] + iVar5 + 0x408),puVar4);
        if (iVar3 != 0) {
          bVar1 = false;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
        puVar4 = puVar4 + 0xb;
      } while (iVar6 < 0x1e);
      FUN_088e1170(param_1);
      FUN_088e6f5c(param_1 + 0x380);
      FUN_088ea558(param_1 + 0x4d7);
      if (*(char *)((int)param_1 + 0x17ba) != '\0') {
        FUN_088e69d4(param_1 + 0x4ac);
      }
      FUN_088e53ec(param_1 + 0x16f);
      FUN_088e09fc(param_1 + 0x580);
      fVar7 = (float)FUN_088e04c4(param_1);
      param_1[3] = (float)param_1[3] + fVar7;
      if (bVar1) {
        *param_1 = 4;
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      FUN_088e6f5c(param_1 + 0x380);
      uVar2 = 1;
    }
    break;
  case 4:
    FUN_088e00c4(param_1);
    *param_1 = 5;
    *(undefined1 *)((int)param_1 + 0x17bf) = 2;
    uVar2 = 1;
    break;
  case 5:
    if (*(char *)((int)param_1 + 0x17bb) == '\0') {
      *param_1 = 6;
      uVar2 = 1;
    }
    else {
      if (*(char *)((int)param_1 + 0x17bf) < '\x01') {
        iVar5 = FUN_088e34e4(param_1 + 0x16f);
        if (iVar5 != 0) {
          FUN_088e3518(param_1 + 0x16f);
          *param_1 = 6;
          return 1;
        }
      }
      uVar2 = 1;
      *(char *)((int)param_1 + 0x17bf) = *(char *)((int)param_1 + 0x17bf) + -1;
    }
    break;
  case 6:
    uVar2 = 0;
  }
  return uVar2;
}


/* Entry 0x088F1940 | file offset 0x000EE918 | FUN_088f1940 | bytes 588 */

void FUN_088f1940(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 1;
  uVar2 = 0x3d6;
  uVar3 = 0x1e;
  do {
    if ((*(uint *)(DAT_089d726c + uVar3 * 4) & 1 << (uVar2 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar2 >> 5;
  } while ((int)uVar2 < 0x3df);
  iVar1 = FUN_088f1288(3);
  if (iVar1 < iVar4) {
    FUN_088f12f4(3,iVar4);
  }
  iVar4 = 1;
  uVar2 = 0x3e3;
  uVar3 = 0x1f;
  do {
    if ((*(uint *)(DAT_089d726c + uVar3 * 4) & 1 << (uVar2 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar2 >> 5;
  } while ((int)uVar2 < 0x3e5);
  iVar1 = FUN_088f1288(1);
  if (iVar1 < iVar4) {
    FUN_088f12f4(1,iVar4);
  }
  iVar4 = 1;
  uVar2 = 0x3e9;
  uVar3 = 0x1f;
  do {
    if ((*(uint *)(DAT_089d726c + uVar3 * 4) & 1 << (uVar2 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar2 >> 5;
  } while ((int)uVar2 < 0x3f2);
  iVar1 = FUN_088f1288(2);
  if (iVar1 < iVar4) {
    FUN_088f12f4(2,iVar4);
  }
  iVar4 = 1;
  uVar2 = 0x3f6;
  uVar3 = 0x1f;
  do {
    if ((*(uint *)(DAT_089d726c + uVar3 * 4) & 1 << (uVar2 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar2 >> 5;
  } while ((int)uVar2 < 0x3f8);
  iVar1 = FUN_088f1288(0);
  if (iVar1 < iVar4) {
    FUN_088f12f4(0,iVar4);
  }
  iVar4 = 1;
  uVar2 = 0x3fc;
  uVar3 = 0x1f;
  do {
    if ((*(uint *)(DAT_089d726c + uVar3 * 4) & 1 << (uVar2 & 0x1f)) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar2 >> 5;
  } while ((int)uVar2 < 0x405);
  iVar1 = FUN_088f1258();
  if (iVar1 < iVar4) {
    FUN_088f1270(iVar4);
  }
  return;
}


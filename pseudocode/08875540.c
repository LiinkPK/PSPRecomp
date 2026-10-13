/* Entry 0x08875540 | file offset 0x00072518 | FUN_08875540 | bytes 784 */

void FUN_08875540(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if (DAT_089d603c != '\0') {
    DAT_089d603c = '\0';
    iVar2 = FUN_088751e8();
    if (iVar2 == 0) {
      FUN_088a24d4(0,0x2713,1,0);
    }
    else {
      DAT_089d603a = '\0';
      *(undefined1 *)(DAT_089d5ec0 + 0x2cd1) = 1;
      FUN_088a24d4(0,0x272e,1,0);
    }
  }
  if ((DAT_089d603a != '\0') || (uVar3 = sceUtilityScreenshotGetStatus(), 4 < uVar3))
  goto LAB_088757ac;
  if (uVar3 != 0) {
    if (uVar3 == 2) {
      sceUtilityScreenshotUpdate(2);
      if ((DAT_089d6038 == '\0') && (DAT_09b488a4 == 1)) {
        DAT_089d6038 = '\x01';
        *(undefined1 *)(DAT_089d5ec0 + 0x2cd1) = 0;
      }
    }
    else if (uVar3 == 3) {
      sceUtilityScreenshotShutdownStart();
    }
    else if (uVar3 != 4) {
      DAT_089d6038 = '\0';
    }
    goto LAB_088757ac;
  }
  *(undefined1 *)(DAT_089d5ec0 + 0x2cd1) = 0;
  if (-1 < DAT_09b4888c) {
    DAT_089d6030 = 4;
    DAT_089d603a = '\x01';
    goto LAB_088757ac;
  }
  DAT_089d603d = '\x01';
  *(uint *)(DAT_089d6008 + 0x264) = *(uint *)(DAT_089d6008 + 0x264) | 8;
  FUN_088b16fc(DAT_089d7280);
  puVar5 = (undefined *)0x0;
  uVar4 = 0x1c;
  if (DAT_09b4888c < -0x7feeedf3) {
    if (DAT_09b4888c < -0x7ffeffec) {
      if (-0x7ffeffee < DAT_09b4888c) {
switchD_08875744_caseD_8011120d:
        uVar4 = 0x19;
      }
    }
    else if (DAT_09b4888c == -0x7ffdfcdf) goto switchD_08875744_caseD_8011120d;
  }
  else {
    switch(DAT_09b4888c) {
    case -0x7feeedf3:
    case -0x7feeedea:
      goto switchD_08875744_caseD_8011120d;
    case -0x7feeedf2:
      uVar4 = 0x1d;
      break;
    case -0x7feeedeb:
      uVar4 = 0x1b;
      puVar5 = &UNK_089c9c04;
    }
  }
  uVar4 = FUN_0887afbc(*(undefined4 *)(DAT_089d712c + 0xee0),uVar4,0);
  FUN_088b1230(DAT_089d727c,uVar4,0,0,0xa0,puVar5);
LAB_088757ac:
  if (DAT_089d603d != '\0') {
    if (*DAT_089d7280 == '\0') {
      iVar2 = FUN_088b1440(DAT_089d727c);
      bVar1 = iVar2 != 0 && iVar2 != -0x7feefffb;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      DAT_089d603d = '\0';
      DAT_089d6030 = 4;
      DAT_089d603a = '\x01';
      *(uint *)(DAT_089d6008 + 0x264) = *(uint *)(DAT_089d6008 + 0x264) & 0xfffffff7;
      FUN_088b1764(DAT_089d7280);
    }
  }
  return;
}


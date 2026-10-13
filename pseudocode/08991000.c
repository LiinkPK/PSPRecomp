/* Entry 0x08991000 | file offset 0x0018DFD8 | FUN_08991000 | bytes 344 */

void FUN_08991000(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x2c),1,0);
  uVar4 = 0;
  iVar5 = 0;
  iVar2 = DAT_089da420;
  do {
    iVar3 = *(int *)(iVar2 + iVar5 + 0x178);
    if (iVar3 < 2) {
      if (0 < iVar3) {
        FUN_089a4fd4(uVar4);
        iVar2 = DAT_089da420;
        *(undefined4 *)(DAT_089da420 + iVar5 + 0x178) = 0x10;
      }
    }
    else if (iVar3 < 3) {
      uVar1 = FUN_089a50a4();
      uVar6 = 1 << (uVar4 & 0x1f);
      if ((uVar1 & uVar6) != 0) {
        FUN_089a504c(uVar4,0);
      }
      iVar2 = FUN_089a5280(uVar4);
      if (iVar2 == 0) {
        iVar3 = DAT_089da420 + iVar5;
        if (*(char *)(iVar3 + 0x1a8) != '\0') {
          uVar1 = FUN_089a5244();
          iVar2 = DAT_089da420;
          if ((uVar6 & uVar1) == 0) goto LAB_08991114;
          iVar3 = DAT_089da420 + iVar5;
        }
      }
      else {
        FUN_089a5010(uVar4);
        iVar3 = DAT_089da420 + iVar5;
      }
      iVar2 = DAT_089da420;
      *(undefined4 *)(iVar3 + 0x178) = 0x20;
    }
LAB_08991114:
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 0x3c;
    if (0x1f < uVar4) {
      sceKernelSignalSema(*(undefined4 *)(iVar2 + 0x2c),1);
      return;
    }
  } while( true );
}


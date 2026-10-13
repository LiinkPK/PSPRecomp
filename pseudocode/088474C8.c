/* Entry 0x088474C8 | file offset 0x000444A0 | FUN_088474c8 | bytes 484 */

void FUN_088474c8(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = param_1 + iVar4;
    cVar1 = *(char *)(iVar5 + 0x20);
    if (cVar1 != -1) {
      bVar2 = false;
      iVar3 = 0;
      do {
        if (*(char *)(param_1 + iVar3 + 0x30) == cVar1) {
          bVar2 = true;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
      if (!bVar2) {
        FUN_088372b0(param_2,cVar1);
      }
    }
    cVar1 = *(char *)(iVar5 + 0x30);
    if (cVar1 != -1) {
      bVar2 = false;
      iVar3 = 0;
      do {
        if (*(char *)(param_1 + iVar3 + 0x20) == cVar1) {
          bVar2 = true;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
      if (!bVar2) {
        FUN_088372d0(param_2,cVar1);
      }
    }
    cVar1 = *(char *)(iVar5 + 0x40);
    if (cVar1 != -1) {
      bVar2 = false;
      iVar3 = 0;
      do {
        if (*(char *)(param_1 + iVar3 + 0x50) == cVar1) {
          bVar2 = true;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
      if (!bVar2) {
        FUN_088372d0(param_2,cVar1);
      }
    }
    cVar1 = *(char *)(iVar5 + 0x50);
    if (cVar1 != -1) {
      bVar2 = false;
      iVar5 = 0;
      do {
        if (*(char *)(param_1 + iVar5 + 0x40) == cVar1) {
          bVar2 = true;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      if (!bVar2) {
        FUN_088372b0(param_2,cVar1);
      }
    }
    iVar4 = iVar4 + 1;
    if (0xf < iVar4) {
      FUN_08935524(param_1 + 0x30,param_1 + 0x20,0x10);
      FUN_08935524(param_1 + 0x50,param_1 + 0x40,0x10);
      iVar4 = 0;
      do {
        *(undefined1 *)(param_1 + iVar4 + 0x20) = 0xff;
        *(undefined1 *)(param_1 + iVar4 + 0x40) = 0xff;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
      return;
    }
  } while( true );
}


/* Entry 0x088412E4 | file offset 0x0003E2BC | FUN_088412e4 | bytes 236 */

void FUN_088412e4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_089d4958;
  iVar3 = 0;
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x4a0);
    }
    if (iVar3 == 0) break;
    iVar2 = FUN_08837f6c(iVar3);
    if (iVar2 != 0) {
      if ((*(uint *)(iVar3 + 0x38c) & 0x10) == 0) {
        if (*(int *)(iVar1 + 0x3c) == 0) {
          *(int *)(iVar1 + 0x40) = iVar3;
          *(int *)(iVar1 + 0x3c) = iVar3;
          *(undefined4 *)(iVar3 + 0x4a4) = 0;
        }
        else {
          *(int *)(iVar3 + 0x4a4) = *(int *)(iVar1 + 0x3c);
          *(int *)(iVar1 + 0x3c) = iVar3;
        }
      }
      else if (*(int *)(iVar1 + 0x40) == 0) {
        *(int *)(iVar1 + 0x40) = iVar3;
        *(int *)(iVar1 + 0x3c) = iVar3;
        *(undefined4 *)(iVar3 + 0x4a4) = 0;
      }
      else {
        *(int *)(*(int *)(iVar1 + 0x40) + 0x4a4) = iVar3;
        *(undefined4 *)(iVar3 + 0x4a4) = 0;
        *(int *)(iVar1 + 0x40) = iVar3;
      }
    }
  }
  return;
}


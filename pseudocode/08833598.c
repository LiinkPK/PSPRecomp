/* Entry 0x08833598 | file offset 0x00030570 | FUN_08833598 | bytes 192 */

void FUN_08833598(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_089d4958;
  iVar3 = 0;
  do {
    iVar4 = iVar3;
    if (iVar4 == 0) {
      iVar3 = *(int *)(DAT_089d4958 + 0xc);
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x4a0);
    }
  } while ((iVar3 != 0) && (*(byte *)(iVar3 + 0x542) < *(byte *)(param_1 + 0x542)));
  piVar2 = (int *)(DAT_089d4958 + 0xc);
  if (iVar4 == 0) {
    if (*piVar2 == 0) {
      *(int *)(DAT_089d4958 + 0x10) = param_1;
      *piVar2 = param_1;
      *(undefined4 *)(param_1 + 0x4a0) = 0;
    }
    else {
      *(int *)(param_1 + 0x4a0) = *piVar2;
      *piVar2 = param_1;
    }
  }
  else {
    iVar3 = *(int *)(DAT_089d4958 + 0x10);
    if (iVar4 == iVar3) {
      if (iVar3 == 0) {
        *(int *)(DAT_089d4958 + 0x10) = param_1;
        *piVar2 = param_1;
        *(undefined4 *)(param_1 + 0x4a0) = 0;
      }
      else {
        *(int *)(iVar3 + 0x4a0) = param_1;
        *(undefined4 *)(param_1 + 0x4a0) = 0;
        *(int *)(iVar1 + 0x10) = param_1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(iVar4 + 0x4a0);
      *(int *)(iVar4 + 0x4a0) = param_1;
    }
  }
  return;
}


/* Entry 0x0890A080 | file offset 0x00107058 | FUN_0890a080 | bytes 316 */

void FUN_0890a080(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_30 [8];
  byte local_28 [8];
  
  if (*(int *)(param_1 + 0x14c64) != 0) {
    if (*(char *)(param_1 + 0x118) == '\x01') {
      sceWlanGetEtherAddr(local_28);
      iVar2 = 0;
      do {
        if (local_28[iVar2] < *(byte *)(param_2 + iVar2)) {
          *(undefined1 *)(param_1 + 0x14c58) = 1;
          break;
        }
        if (*(byte *)(param_2 + iVar2) < local_28[iVar2]) {
          *(undefined1 *)(param_1 + 0x14c58) = 0;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
    }
    if (*(char *)(param_1 + 0x14c58) == '\x01') {
      FUN_08935524(auStack_30,param_1 + 0x13e5,8);
      piVar3 = *(int **)(param_1 + 0x14c64);
      uVar1 = *(undefined1 *)(param_1 + 0x14c58);
      iVar2 = *piVar3;
    }
    else {
      FUN_08935524(auStack_30,param_1 + 0x14c4d,8);
      piVar3 = *(int **)(param_1 + 0x14c64);
      uVar1 = *(undefined1 *)(param_1 + 0x14c58);
      iVar2 = *piVar3;
    }
    (**(code **)(iVar2 + 0x44))
              ((int)piVar3 + (int)*(short *)(iVar2 + 0x40),param_1 + 0x139f8,auStack_30,uVar1);
  }
  return;
}


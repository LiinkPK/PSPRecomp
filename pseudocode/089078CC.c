/* Entry 0x089078CC | file offset 0x001048A4 | FUN_089078cc | bytes 284 */

void FUN_089078cc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_c0 [152];
  
  iVar5 = *(int *)(param_1 + 0x804);
  iVar4 = 0;
  bVar1 = true;
  if (0 < iVar5) {
    iVar3 = param_1 + 4;
    do {
      iVar2 = sceNetAdhocctlGetPeerInfo(iVar3,0x98,auStack_c0);
      if (iVar2 != 0) {
        bVar1 = false;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x80;
    } while (iVar4 < iVar5);
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x1658) = 4;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x166c) - *(float *)(DAT_089d69e0 + 0x18);
    *(float *)(param_1 + 0x166c) = fVar6;
    if (*(char *)(param_1 + 0x16e5) == '\x01' || fVar6 <= 0.0) {
      if ((*(int *)(param_1 + 0x1644) == 0) && (1 < *(int *)(param_1 + 0x804))) {
        *(undefined1 *)(param_1 + 0x16e5) = 1;
      }
      *(undefined4 *)(param_1 + 0x1658) = 2;
    }
  }
  return;
}

